#include "ir/lima_ir.h"

#include "nir.h"
#include "nir_builder.h"
#include "nir_search.h"
#include "nir_search_helpers.h"

/* What follows is NIR algebraic transform code for the following 2
 * transforms:
 *    ('fsin', 'a') => ('fsin', ('fmul', 'a', 0.15915494309189535))
 *    ('fcos', 'a') => ('fcos', ('fmul', 'a', 0.15915494309189535))
 */


static const nir_search_value_union lima_nir_scale_trig_values[] = {
   /* ('fsin', 'a') => ('fsin', ('fmul', 'a', 0.15915494309189535)) */
   { .variable = {
      { nir_search_value_variable, -1 },
      0, /* a */
      false,
      nir_type_invalid,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fsin,
      -1, 0,
      { 0 },
      -1,
   } },

   /* replace0_0_0 -> 0 in the cache */
   { .constant = {
      { nir_search_value_constant, -1 },
      nir_type_float, { 0x3fc45f306dc9c883 /* 0.15915494309189535 */ },
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fmul,
      0, 1,
      { 0, 2 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fsin,
      -1, 1,
      { 3 },
      -1,
   } },

   /* ('fcos', 'a') => ('fcos', ('fmul', 'a', 0.15915494309189535)) */
   /* search1_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fcos,
      -1, 0,
      { 0 },
      -1,
   } },

   /* replace1_0_0 -> 0 in the cache */
   /* replace1_0_1 -> 2 in the cache */
   /* replace1_0 -> 3 in the cache */
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fcos,
      -1, 1,
      { 3 },
      -1,
   } },

};



static const struct transform lima_nir_scale_trig_transforms[] = {
   { ~0, ~0, ~0 }, /* Sentinel */

   { 1, 4, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 5, 6, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

};

static const struct per_op_table lima_nir_scale_trig_pass_op_table[nir_num_search_ops] = {
   [nir_op_fsin] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         2,
      },
   },
   [nir_op_fcos] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         3,
      },
   },
};

/* Mapping from state index to offset in transforms (0 being no transforms) */
static const uint16_t lima_nir_scale_trig_transform_offsets[] = {
   0,
   0,
   1,
   3,
};

static const nir_algebraic_table lima_nir_scale_trig_table = {
   .transforms = lima_nir_scale_trig_transforms,
   .transform_offsets = lima_nir_scale_trig_transform_offsets,
   .pass_op_table = lima_nir_scale_trig_pass_op_table,
   .values = lima_nir_scale_trig_values,
   .expression_cond = NULL,
   .variable_cond = NULL,
};

bool
lima_nir_scale_trig(
   nir_shader *shader
) {
   bool progress = false;
   bool condition_flags[1];
   const nir_shader_compiler_options *options = shader->options;
   const shader_info *info = &shader->info;
   (void) options;
   (void) info;

   STATIC_ASSERT(7 == ARRAY_SIZE(lima_nir_scale_trig_values));
   condition_flags[0] = true;

   nir_foreach_function_impl(impl, shader) {
     progress |= nir_algebraic_impl(impl, condition_flags, &lima_nir_scale_trig_table);
   }

   return progress;
}


#include "nir.h"
#include "nir_builder.h"
#include "nir_search.h"
#include "nir_search_helpers.h"

/* What follows is NIR algebraic transform code for the following 1
 * transforms:
 *    ('ftrunc', 'a') => ('fmul', ('fsign', 'a'), ('ffloor', ('fmax', 'a', ('fneg', 'a'))))
 */


static const nir_search_value_union lima_nir_lower_ftrunc_values[] = {
   /* ('ftrunc', 'a') => ('fmul', ('fsign', 'a'), ('ffloor', ('fmax', 'a', ('fneg', 'a')))) */
   { .variable = {
      { nir_search_value_variable, -1 },
      0, /* a */
      false,
      nir_type_invalid,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_ftrunc,
      -1, 0,
      { 0 },
      -1,
   } },

   /* replace2_0_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fsign,
      -1, 0,
      { 0 },
      -1,
   } },
   /* replace2_1_0_0 -> 0 in the cache */
   /* replace2_1_0_1_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fneg,
      -1, 0,
      { 0 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fmax,
      1, 1,
      { 0, 3 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_ffloor,
      -1, 1,
      { 4 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, -1 },
      false,
      false,
      false,
      nir_op_fmul,
      0, 2,
      { 2, 5 },
      -1,
   } },

};



static const struct transform lima_nir_lower_ftrunc_transforms[] = {
   { ~0, ~0, ~0 }, /* Sentinel */

   { 1, 6, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

};

static const struct per_op_table lima_nir_lower_ftrunc_pass_op_table[nir_num_search_ops] = {
   [nir_op_ftrunc] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         2,
      },
   },
};

/* Mapping from state index to offset in transforms (0 being no transforms) */
static const uint16_t lima_nir_lower_ftrunc_transform_offsets[] = {
   0,
   0,
   1,
};

static const nir_algebraic_table lima_nir_lower_ftrunc_table = {
   .transforms = lima_nir_lower_ftrunc_transforms,
   .transform_offsets = lima_nir_lower_ftrunc_transform_offsets,
   .pass_op_table = lima_nir_lower_ftrunc_pass_op_table,
   .values = lima_nir_lower_ftrunc_values,
   .expression_cond = NULL,
   .variable_cond = NULL,
};

bool
lima_nir_lower_ftrunc(
   nir_shader *shader
) {
   bool progress = false;
   bool condition_flags[1];
   const nir_shader_compiler_options *options = shader->options;
   const shader_info *info = &shader->info;
   (void) options;
   (void) info;

   STATIC_ASSERT(7 == ARRAY_SIZE(lima_nir_lower_ftrunc_values));
   condition_flags[0] = true;

   nir_foreach_function_impl(impl, shader) {
     progress |= nir_algebraic_impl(impl, condition_flags, &lima_nir_lower_ftrunc_table);
   }

   return progress;
}

