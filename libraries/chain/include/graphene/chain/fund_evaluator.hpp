#pragma once
#include <graphene/chain/protocol/operations.hpp>
#include <graphene/chain/evaluator.hpp>
#include <graphene/chain/database.hpp>
#include <graphene/chain/fund_object.hpp>

namespace graphene { namespace chain {

   class fund_create_evaluator: public evaluator<fund_create_evaluator>
   {
   public:
      typedef fund_create_operation operation_type;

      void_result do_evaluate(const fund_create_operation& o);
      object_id_type do_apply(const fund_create_operation& o);

   };

   /////////////////////////////////////////////////////

   class fund_update_evaluator: public evaluator<fund_update_evaluator>
   {
   public:
      typedef fund_update_operation operation_type;

      void_result do_evaluate(const fund_update_operation& o);
      void_result do_apply(const fund_update_operation& o);

      const fund_object* fund_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class fund_refill_evaluator: public evaluator<fund_refill_evaluator>
   {
   public:
      typedef fund_refill_operation operation_type;

      void_result do_evaluate(const fund_refill_operation& o);
      void_result do_apply(const fund_refill_operation& o);

      const fund_object* fund_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class fund_deposit_evaluator: public evaluator<fund_deposit_evaluator>
   {
   public:
      typedef fund_deposit_operation operation_type;

      void_result do_evaluate(const fund_deposit_operation& o);
      eval_fund_dep_apply_object do_apply(const fund_deposit_operation& o);

      optional<fund_options::payment_rate> p_rate;
      const fund_object* fund_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class fund_withdrawal_evaluator: public evaluator<fund_withdrawal_evaluator>
   {
   public:
      typedef fund_withdrawal_operation operation_type;

      void_result do_evaluate(const fund_withdrawal_operation& o);
      void_result do_apply(const fund_withdrawal_operation& o);

   };

   /////////////////////////////////////////////////////

   class fund_payment_evaluator: public evaluator<fund_payment_evaluator>
   {
   public:
      typedef fund_payment_operation operation_type;

      void_result do_evaluate(const fund_payment_operation& o);
      void_result do_apply(const fund_payment_operation& o);

      const asset_dynamic_data_object* asset_dyn_data_ptr = nullptr;
   };

   /////////////////////////////////////////////////////

   class fund_set_enable_evaluator: public evaluator<fund_set_enable_evaluator>
   {
   public:
      typedef fund_set_enable_operation operation_type;

      void_result do_evaluate(const fund_set_enable_operation& o);
      void_result do_apply(const fund_set_enable_operation& o);

      const fund_object* fund_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class fund_deposit_set_enable_evaluator: public evaluator<fund_deposit_set_enable_evaluator>
   {
   public:
      typedef fund_deposit_set_enable_operation operation_type;

      void_result do_evaluate(const fund_deposit_set_enable_operation& o);
      void_result do_apply(const fund_deposit_set_enable_operation& o);

      const fund_deposit_object* fund_dep_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class fund_remove_evaluator: public evaluator<fund_remove_evaluator>
   {
   public:
      typedef fund_remove_operation operation_type;

      void_result do_evaluate(const fund_remove_operation& o);
      void_result do_apply(const fund_remove_operation& o);

      const fund_object* fund_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class fund_set_fixed_percent_on_deposits_evaluator: public evaluator<fund_set_fixed_percent_on_deposits_evaluator>
   {
   public:
      typedef fund_set_fixed_percent_on_deposits_operation operation_type;

      void_result do_evaluate(const fund_set_fixed_percent_on_deposits_operation& o);
      void_result do_apply(const fund_set_fixed_percent_on_deposits_operation& o);

      const fund_object* fund_obj_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class enable_autorenewal_deposits_evaluator: public evaluator<enable_autorenewal_deposits_evaluator>
   {
   public:
      typedef enable_autorenewal_deposits_operation operation_type;

      void_result do_evaluate(const enable_autorenewal_deposits_operation& o);
      void_result do_apply(const enable_autorenewal_deposits_operation& o);

      const account_object* account_ptr = nullptr;

   };

   /////////////////////////////////////////////////////

   class deposit_renewal_evaluator: public evaluator<deposit_renewal_evaluator>
   {
   public:
      typedef deposit_renewal_operation operation_type;

      void_result do_evaluate( const deposit_renewal_operation& o );
      void_result do_apply( const deposit_renewal_operation& o );

      const fund_deposit_object* fund_deposit_ptr = nullptr;

   };

} } // graphene::chain
