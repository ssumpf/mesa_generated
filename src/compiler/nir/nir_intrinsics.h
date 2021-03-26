/* Copyright (C) 2018 Red Hat
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef _NIR_INTRINSICS_
#define _NIR_INTRINSICS_



typedef enum {
   nir_intrinsic_accept_ray_intersection,
   nir_intrinsic_addr_mode_is,
   nir_intrinsic_atomic_counter_add,
   nir_intrinsic_atomic_counter_add_deref,
   nir_intrinsic_atomic_counter_and,
   nir_intrinsic_atomic_counter_and_deref,
   nir_intrinsic_atomic_counter_comp_swap,
   nir_intrinsic_atomic_counter_comp_swap_deref,
   nir_intrinsic_atomic_counter_exchange,
   nir_intrinsic_atomic_counter_exchange_deref,
   nir_intrinsic_atomic_counter_inc,
   nir_intrinsic_atomic_counter_inc_deref,
   nir_intrinsic_atomic_counter_max,
   nir_intrinsic_atomic_counter_max_deref,
   nir_intrinsic_atomic_counter_min,
   nir_intrinsic_atomic_counter_min_deref,
   nir_intrinsic_atomic_counter_or,
   nir_intrinsic_atomic_counter_or_deref,
   nir_intrinsic_atomic_counter_post_dec,
   nir_intrinsic_atomic_counter_post_dec_deref,
   nir_intrinsic_atomic_counter_pre_dec,
   nir_intrinsic_atomic_counter_pre_dec_deref,
   nir_intrinsic_atomic_counter_read,
   nir_intrinsic_atomic_counter_read_deref,
   nir_intrinsic_atomic_counter_xor,
   nir_intrinsic_atomic_counter_xor_deref,
   nir_intrinsic_ballot,
   nir_intrinsic_ballot_bit_count_exclusive,
   nir_intrinsic_ballot_bit_count_inclusive,
   nir_intrinsic_ballot_bit_count_reduce,
   nir_intrinsic_ballot_bitfield_extract,
   nir_intrinsic_ballot_find_lsb,
   nir_intrinsic_ballot_find_msb,
   nir_intrinsic_begin_invocation_interlock,
   nir_intrinsic_bindless_image_atomic_add,
   nir_intrinsic_bindless_image_atomic_and,
   nir_intrinsic_bindless_image_atomic_comp_swap,
   nir_intrinsic_bindless_image_atomic_dec_wrap,
   nir_intrinsic_bindless_image_atomic_exchange,
   nir_intrinsic_bindless_image_atomic_fadd,
   nir_intrinsic_bindless_image_atomic_imax,
   nir_intrinsic_bindless_image_atomic_imin,
   nir_intrinsic_bindless_image_atomic_inc_wrap,
   nir_intrinsic_bindless_image_atomic_or,
   nir_intrinsic_bindless_image_atomic_umax,
   nir_intrinsic_bindless_image_atomic_umin,
   nir_intrinsic_bindless_image_atomic_xor,
   nir_intrinsic_bindless_image_format,
   nir_intrinsic_bindless_image_load,
   nir_intrinsic_bindless_image_load_raw_intel,
   nir_intrinsic_bindless_image_order,
   nir_intrinsic_bindless_image_samples,
   nir_intrinsic_bindless_image_size,
   nir_intrinsic_bindless_image_sparse_load,
   nir_intrinsic_bindless_image_store,
   nir_intrinsic_bindless_image_store_raw_intel,
   nir_intrinsic_bindless_resource_ir3,
   nir_intrinsic_btd_resume_intel,
   nir_intrinsic_btd_retire_intel,
   nir_intrinsic_btd_spawn_intel,
   nir_intrinsic_btd_stack_push_intel,
   nir_intrinsic_cond_end_ir3,
   nir_intrinsic_control_barrier,
   nir_intrinsic_convert_alu_types,
   nir_intrinsic_copy_deref,
   nir_intrinsic_demote,
   nir_intrinsic_demote_if,
   nir_intrinsic_deref_atomic_add,
   nir_intrinsic_deref_atomic_and,
   nir_intrinsic_deref_atomic_comp_swap,
   nir_intrinsic_deref_atomic_exchange,
   nir_intrinsic_deref_atomic_fadd,
   nir_intrinsic_deref_atomic_fcomp_swap,
   nir_intrinsic_deref_atomic_fmax,
   nir_intrinsic_deref_atomic_fmin,
   nir_intrinsic_deref_atomic_imax,
   nir_intrinsic_deref_atomic_imin,
   nir_intrinsic_deref_atomic_or,
   nir_intrinsic_deref_atomic_umax,
   nir_intrinsic_deref_atomic_umin,
   nir_intrinsic_deref_atomic_xor,
   nir_intrinsic_deref_buffer_array_length,
   nir_intrinsic_deref_mode_is,
   nir_intrinsic_discard,
   nir_intrinsic_discard_if,
   nir_intrinsic_elect,
   nir_intrinsic_emit_vertex,
   nir_intrinsic_emit_vertex_with_counter,
   nir_intrinsic_end_invocation_interlock,
   nir_intrinsic_end_patch_ir3,
   nir_intrinsic_end_primitive,
   nir_intrinsic_end_primitive_with_counter,
   nir_intrinsic_exclusive_scan,
   nir_intrinsic_execute_callable,
   nir_intrinsic_first_invocation,
   nir_intrinsic_get_ssbo_size,
   nir_intrinsic_get_ubo_size,
   nir_intrinsic_global_atomic_add,
   nir_intrinsic_global_atomic_and,
   nir_intrinsic_global_atomic_comp_swap,
   nir_intrinsic_global_atomic_exchange,
   nir_intrinsic_global_atomic_fadd,
   nir_intrinsic_global_atomic_fcomp_swap,
   nir_intrinsic_global_atomic_fmax,
   nir_intrinsic_global_atomic_fmin,
   nir_intrinsic_global_atomic_imax,
   nir_intrinsic_global_atomic_imin,
   nir_intrinsic_global_atomic_or,
   nir_intrinsic_global_atomic_umax,
   nir_intrinsic_global_atomic_umin,
   nir_intrinsic_global_atomic_xor,
   nir_intrinsic_group_memory_barrier,
   nir_intrinsic_ignore_ray_intersection,
   nir_intrinsic_image_atomic_add,
   nir_intrinsic_image_atomic_and,
   nir_intrinsic_image_atomic_comp_swap,
   nir_intrinsic_image_atomic_dec_wrap,
   nir_intrinsic_image_atomic_exchange,
   nir_intrinsic_image_atomic_fadd,
   nir_intrinsic_image_atomic_imax,
   nir_intrinsic_image_atomic_imin,
   nir_intrinsic_image_atomic_inc_wrap,
   nir_intrinsic_image_atomic_or,
   nir_intrinsic_image_atomic_umax,
   nir_intrinsic_image_atomic_umin,
   nir_intrinsic_image_atomic_xor,
   nir_intrinsic_image_deref_atomic_add,
   nir_intrinsic_image_deref_atomic_and,
   nir_intrinsic_image_deref_atomic_comp_swap,
   nir_intrinsic_image_deref_atomic_dec_wrap,
   nir_intrinsic_image_deref_atomic_exchange,
   nir_intrinsic_image_deref_atomic_fadd,
   nir_intrinsic_image_deref_atomic_imax,
   nir_intrinsic_image_deref_atomic_imin,
   nir_intrinsic_image_deref_atomic_inc_wrap,
   nir_intrinsic_image_deref_atomic_or,
   nir_intrinsic_image_deref_atomic_umax,
   nir_intrinsic_image_deref_atomic_umin,
   nir_intrinsic_image_deref_atomic_xor,
   nir_intrinsic_image_deref_format,
   nir_intrinsic_image_deref_load,
   nir_intrinsic_image_deref_load_param_intel,
   nir_intrinsic_image_deref_load_raw_intel,
   nir_intrinsic_image_deref_order,
   nir_intrinsic_image_deref_samples,
   nir_intrinsic_image_deref_size,
   nir_intrinsic_image_deref_sparse_load,
   nir_intrinsic_image_deref_store,
   nir_intrinsic_image_deref_store_raw_intel,
   nir_intrinsic_image_format,
   nir_intrinsic_image_load,
   nir_intrinsic_image_load_raw_intel,
   nir_intrinsic_image_order,
   nir_intrinsic_image_samples,
   nir_intrinsic_image_size,
   nir_intrinsic_image_sparse_load,
   nir_intrinsic_image_store,
   nir_intrinsic_image_store_raw_intel,
   nir_intrinsic_inclusive_scan,
   nir_intrinsic_interp_deref_at_centroid,
   nir_intrinsic_interp_deref_at_offset,
   nir_intrinsic_interp_deref_at_sample,
   nir_intrinsic_interp_deref_at_vertex,
   nir_intrinsic_is_helper_invocation,
   nir_intrinsic_is_sparse_texels_resident,
   nir_intrinsic_last_invocation,
   nir_intrinsic_load_aa_line_width,
   nir_intrinsic_load_barycentric_at_offset,
   nir_intrinsic_load_barycentric_at_sample,
   nir_intrinsic_load_barycentric_centroid,
   nir_intrinsic_load_barycentric_model,
   nir_intrinsic_load_barycentric_pixel,
   nir_intrinsic_load_barycentric_sample,
   nir_intrinsic_load_base_global_invocation_id,
   nir_intrinsic_load_base_instance,
   nir_intrinsic_load_base_vertex,
   nir_intrinsic_load_base_work_group_id,
   nir_intrinsic_load_blend_const_color_a_float,
   nir_intrinsic_load_blend_const_color_aaaa8888_unorm,
   nir_intrinsic_load_blend_const_color_b_float,
   nir_intrinsic_load_blend_const_color_g_float,
   nir_intrinsic_load_blend_const_color_r_float,
   nir_intrinsic_load_blend_const_color_rgba,
   nir_intrinsic_load_blend_const_color_rgba8888_unorm,
   nir_intrinsic_load_btd_dss_id_intel,
   nir_intrinsic_load_btd_global_arg_addr_intel,
   nir_intrinsic_load_btd_local_arg_addr_intel,
   nir_intrinsic_load_btd_resume_sbt_addr_intel,
   nir_intrinsic_load_btd_stack_id_intel,
   nir_intrinsic_load_callable_sbt_addr_intel,
   nir_intrinsic_load_callable_sbt_stride_intel,
   nir_intrinsic_load_color0,
   nir_intrinsic_load_color1,
   nir_intrinsic_load_constant,
   nir_intrinsic_load_constant_base_ptr,
   nir_intrinsic_load_deref,
   nir_intrinsic_load_deref_block_intel,
   nir_intrinsic_load_draw_id,
   nir_intrinsic_load_fb_layers_v3d,
   nir_intrinsic_load_first_vertex,
   nir_intrinsic_load_frag_coord,
   nir_intrinsic_load_frag_shading_rate,
   nir_intrinsic_load_front_face,
   nir_intrinsic_load_fs_input_interp_deltas,
   nir_intrinsic_load_global,
   nir_intrinsic_load_global_block_intel,
   nir_intrinsic_load_global_const_block_intel,
   nir_intrinsic_load_global_constant,
   nir_intrinsic_load_global_invocation_id,
   nir_intrinsic_load_global_invocation_id_zero_base,
   nir_intrinsic_load_global_invocation_index,
   nir_intrinsic_load_global_ir3,
   nir_intrinsic_load_gs_header_ir3,
   nir_intrinsic_load_helper_invocation,
   nir_intrinsic_load_hs_patch_stride_ir3,
   nir_intrinsic_load_input,
   nir_intrinsic_load_input_vertex,
   nir_intrinsic_load_instance_id,
   nir_intrinsic_load_interpolated_input,
   nir_intrinsic_load_invocation_id,
   nir_intrinsic_load_is_indexed_draw,
   nir_intrinsic_load_kernel_input,
   nir_intrinsic_load_layer_id,
   nir_intrinsic_load_leaf_opaque_intel,
   nir_intrinsic_load_leaf_procedural_intel,
   nir_intrinsic_load_line_coord,
   nir_intrinsic_load_line_width,
   nir_intrinsic_load_local_group_size,
   nir_intrinsic_load_local_invocation_id,
   nir_intrinsic_load_local_invocation_index,
   nir_intrinsic_load_local_shared_r600,
   nir_intrinsic_load_num_subgroups,
   nir_intrinsic_load_num_work_groups,
   nir_intrinsic_load_output,
   nir_intrinsic_load_param,
   nir_intrinsic_load_patch_vertices_in,
   nir_intrinsic_load_per_vertex_input,
   nir_intrinsic_load_per_vertex_output,
   nir_intrinsic_load_point_coord,
   nir_intrinsic_load_primitive_id,
   nir_intrinsic_load_primitive_location_ir3,
   nir_intrinsic_load_printf_buffer_address,
   nir_intrinsic_load_ptr_dxil,
   nir_intrinsic_load_push_constant,
   nir_intrinsic_load_raw_output_pan,
   nir_intrinsic_load_ray_base_mem_addr_intel,
   nir_intrinsic_load_ray_flags,
   nir_intrinsic_load_ray_geometry_index,
   nir_intrinsic_load_ray_hit_kind,
   nir_intrinsic_load_ray_hit_sbt_addr_intel,
   nir_intrinsic_load_ray_hit_sbt_stride_intel,
   nir_intrinsic_load_ray_hw_stack_size_intel,
   nir_intrinsic_load_ray_instance_custom_index,
   nir_intrinsic_load_ray_launch_id,
   nir_intrinsic_load_ray_launch_size,
   nir_intrinsic_load_ray_miss_sbt_addr_intel,
   nir_intrinsic_load_ray_miss_sbt_stride_intel,
   nir_intrinsic_load_ray_num_dss_rt_stacks_intel,
   nir_intrinsic_load_ray_object_direction,
   nir_intrinsic_load_ray_object_origin,
   nir_intrinsic_load_ray_object_to_world,
   nir_intrinsic_load_ray_sw_stack_size_intel,
   nir_intrinsic_load_ray_t_max,
   nir_intrinsic_load_ray_t_min,
   nir_intrinsic_load_ray_world_direction,
   nir_intrinsic_load_ray_world_origin,
   nir_intrinsic_load_ray_world_to_object,
   nir_intrinsic_load_reloc_const_intel,
   nir_intrinsic_load_sample_id,
   nir_intrinsic_load_sample_id_no_per_sample,
   nir_intrinsic_load_sample_mask_in,
   nir_intrinsic_load_sample_pos,
   nir_intrinsic_load_sample_pos_from_id,
   nir_intrinsic_load_sampler_lod_parameters_pan,
   nir_intrinsic_load_scratch,
   nir_intrinsic_load_scratch_base_ptr,
   nir_intrinsic_load_scratch_dxil,
   nir_intrinsic_load_shader_record_ptr,
   nir_intrinsic_load_shared,
   nir_intrinsic_load_shared_base_ptr,
   nir_intrinsic_load_shared_block_intel,
   nir_intrinsic_load_shared_dxil,
   nir_intrinsic_load_shared_ir3,
   nir_intrinsic_load_simd_width_intel,
   nir_intrinsic_load_size_ir3,
   nir_intrinsic_load_ssbo,
   nir_intrinsic_load_ssbo_address,
   nir_intrinsic_load_ssbo_block_intel,
   nir_intrinsic_load_ssbo_ir3,
   nir_intrinsic_load_subgroup_eq_mask,
   nir_intrinsic_load_subgroup_ge_mask,
   nir_intrinsic_load_subgroup_gt_mask,
   nir_intrinsic_load_subgroup_id,
   nir_intrinsic_load_subgroup_invocation,
   nir_intrinsic_load_subgroup_le_mask,
   nir_intrinsic_load_subgroup_lt_mask,
   nir_intrinsic_load_subgroup_size,
   nir_intrinsic_load_tcs_header_ir3,
   nir_intrinsic_load_tcs_in_param_base_r600,
   nir_intrinsic_load_tcs_out_param_base_r600,
   nir_intrinsic_load_tcs_rel_patch_id_r600,
   nir_intrinsic_load_tcs_tess_factor_base_r600,
   nir_intrinsic_load_tess_coord,
   nir_intrinsic_load_tess_factor_base_ir3,
   nir_intrinsic_load_tess_level_inner,
   nir_intrinsic_load_tess_level_inner_default,
   nir_intrinsic_load_tess_level_outer,
   nir_intrinsic_load_tess_level_outer_default,
   nir_intrinsic_load_tess_param_base_ir3,
   nir_intrinsic_load_tlb_color_v3d,
   nir_intrinsic_load_ubo,
   nir_intrinsic_load_ubo_dxil,
   nir_intrinsic_load_ubo_vec4,
   nir_intrinsic_load_uniform,
   nir_intrinsic_load_user_clip_plane,
   nir_intrinsic_load_user_data_amd,
   nir_intrinsic_load_vertex_id,
   nir_intrinsic_load_vertex_id_zero_base,
   nir_intrinsic_load_view_index,
   nir_intrinsic_load_viewport_offset,
   nir_intrinsic_load_viewport_scale,
   nir_intrinsic_load_viewport_x_scale,
   nir_intrinsic_load_viewport_y_scale,
   nir_intrinsic_load_viewport_z_offset,
   nir_intrinsic_load_viewport_z_scale,
   nir_intrinsic_load_vs_primitive_stride_ir3,
   nir_intrinsic_load_vs_vertex_stride_ir3,
   nir_intrinsic_load_vulkan_descriptor,
   nir_intrinsic_load_work_dim,
   nir_intrinsic_load_work_group_id,
   nir_intrinsic_load_work_group_id_zero_base,
   nir_intrinsic_masked_swizzle_amd,
   nir_intrinsic_mbcnt_amd,
   nir_intrinsic_memcpy_deref,
   nir_intrinsic_memory_barrier,
   nir_intrinsic_memory_barrier_atomic_counter,
   nir_intrinsic_memory_barrier_buffer,
   nir_intrinsic_memory_barrier_image,
   nir_intrinsic_memory_barrier_shared,
   nir_intrinsic_memory_barrier_tcs_patch,
   nir_intrinsic_nop,
   nir_intrinsic_printf,
   nir_intrinsic_quad_broadcast,
   nir_intrinsic_quad_swap_diagonal,
   nir_intrinsic_quad_swap_horizontal,
   nir_intrinsic_quad_swap_vertical,
   nir_intrinsic_quad_swizzle_amd,
   nir_intrinsic_read_first_invocation,
   nir_intrinsic_read_invocation,
   nir_intrinsic_reduce,
   nir_intrinsic_report_ray_intersection,
   nir_intrinsic_scoped_barrier,
   nir_intrinsic_set_vertex_and_primitive_count,
   nir_intrinsic_shader_clock,
   nir_intrinsic_shared_atomic_add,
   nir_intrinsic_shared_atomic_add_dxil,
   nir_intrinsic_shared_atomic_and,
   nir_intrinsic_shared_atomic_and_dxil,
   nir_intrinsic_shared_atomic_comp_swap,
   nir_intrinsic_shared_atomic_comp_swap_dxil,
   nir_intrinsic_shared_atomic_exchange,
   nir_intrinsic_shared_atomic_exchange_dxil,
   nir_intrinsic_shared_atomic_fadd,
   nir_intrinsic_shared_atomic_fcomp_swap,
   nir_intrinsic_shared_atomic_fmax,
   nir_intrinsic_shared_atomic_fmin,
   nir_intrinsic_shared_atomic_imax,
   nir_intrinsic_shared_atomic_imax_dxil,
   nir_intrinsic_shared_atomic_imin,
   nir_intrinsic_shared_atomic_imin_dxil,
   nir_intrinsic_shared_atomic_or,
   nir_intrinsic_shared_atomic_or_dxil,
   nir_intrinsic_shared_atomic_umax,
   nir_intrinsic_shared_atomic_umax_dxil,
   nir_intrinsic_shared_atomic_umin,
   nir_intrinsic_shared_atomic_umin_dxil,
   nir_intrinsic_shared_atomic_xor,
   nir_intrinsic_shared_atomic_xor_dxil,
   nir_intrinsic_shuffle,
   nir_intrinsic_shuffle_down,
   nir_intrinsic_shuffle_up,
   nir_intrinsic_shuffle_xor,
   nir_intrinsic_sparse_residency_code_and,
   nir_intrinsic_ssbo_atomic_add,
   nir_intrinsic_ssbo_atomic_add_ir3,
   nir_intrinsic_ssbo_atomic_and,
   nir_intrinsic_ssbo_atomic_and_ir3,
   nir_intrinsic_ssbo_atomic_comp_swap,
   nir_intrinsic_ssbo_atomic_comp_swap_ir3,
   nir_intrinsic_ssbo_atomic_exchange,
   nir_intrinsic_ssbo_atomic_exchange_ir3,
   nir_intrinsic_ssbo_atomic_fadd,
   nir_intrinsic_ssbo_atomic_fcomp_swap,
   nir_intrinsic_ssbo_atomic_fmax,
   nir_intrinsic_ssbo_atomic_fmin,
   nir_intrinsic_ssbo_atomic_imax,
   nir_intrinsic_ssbo_atomic_imax_ir3,
   nir_intrinsic_ssbo_atomic_imin,
   nir_intrinsic_ssbo_atomic_imin_ir3,
   nir_intrinsic_ssbo_atomic_or,
   nir_intrinsic_ssbo_atomic_or_ir3,
   nir_intrinsic_ssbo_atomic_umax,
   nir_intrinsic_ssbo_atomic_umax_ir3,
   nir_intrinsic_ssbo_atomic_umin,
   nir_intrinsic_ssbo_atomic_umin_ir3,
   nir_intrinsic_ssbo_atomic_xor,
   nir_intrinsic_ssbo_atomic_xor_ir3,
   nir_intrinsic_store_combined_output_pan,
   nir_intrinsic_store_deref,
   nir_intrinsic_store_deref_block_intel,
   nir_intrinsic_store_global,
   nir_intrinsic_store_global_block_intel,
   nir_intrinsic_store_global_ir3,
   nir_intrinsic_store_local_shared_r600,
   nir_intrinsic_store_output,
   nir_intrinsic_store_per_vertex_output,
   nir_intrinsic_store_raw_output_pan,
   nir_intrinsic_store_scratch,
   nir_intrinsic_store_scratch_dxil,
   nir_intrinsic_store_shared,
   nir_intrinsic_store_shared_block_intel,
   nir_intrinsic_store_shared_dxil,
   nir_intrinsic_store_shared_ir3,
   nir_intrinsic_store_shared_masked_dxil,
   nir_intrinsic_store_ssbo,
   nir_intrinsic_store_ssbo_block_intel,
   nir_intrinsic_store_ssbo_ir3,
   nir_intrinsic_store_ssbo_masked_dxil,
   nir_intrinsic_store_tf_r600,
   nir_intrinsic_store_tlb_sample_color_v3d,
   nir_intrinsic_terminate,
   nir_intrinsic_terminate_if,
   nir_intrinsic_terminate_ray,
   nir_intrinsic_trace_ray,
   nir_intrinsic_trace_ray_commit_intel,
   nir_intrinsic_trace_ray_continue_intel,
   nir_intrinsic_trace_ray_initial_intel,
   nir_intrinsic_vote_all,
   nir_intrinsic_vote_any,
   nir_intrinsic_vote_feq,
   nir_intrinsic_vote_ieq,
   nir_intrinsic_vulkan_resource_index,
   nir_intrinsic_vulkan_resource_reindex,
   nir_intrinsic_write_invocation_amd,

   nir_last_intrinsic = nir_intrinsic_write_invocation_amd,
   nir_num_intrinsics = nir_last_intrinsic + 1
} nir_intrinsic_op;

typedef enum {
   NIR_INTRINSIC_BASE,
   NIR_INTRINSIC_WRITE_MASK,
   NIR_INTRINSIC_STREAM_ID,
   NIR_INTRINSIC_UCP_ID,
   NIR_INTRINSIC_RANGE_BASE,
   NIR_INTRINSIC_RANGE,
   NIR_INTRINSIC_DESC_SET,
   NIR_INTRINSIC_BINDING,
   NIR_INTRINSIC_COMPONENT,
   NIR_INTRINSIC_COLUMN,
   NIR_INTRINSIC_INTERP_MODE,
   NIR_INTRINSIC_REDUCTION_OP,
   NIR_INTRINSIC_CLUSTER_SIZE,
   NIR_INTRINSIC_PARAM_IDX,
   NIR_INTRINSIC_IMAGE_DIM,
   NIR_INTRINSIC_IMAGE_ARRAY,
   NIR_INTRINSIC_FORMAT,
   NIR_INTRINSIC_ACCESS,
   NIR_INTRINSIC_ALIGN_MUL,
   NIR_INTRINSIC_ALIGN_OFFSET,
   NIR_INTRINSIC_DESC_TYPE,
   NIR_INTRINSIC_SRC_TYPE,
   NIR_INTRINSIC_DEST_TYPE,
   NIR_INTRINSIC_SWIZZLE_MASK,
   NIR_INTRINSIC_DST_ACCESS,
   NIR_INTRINSIC_SRC_ACCESS,
   NIR_INTRINSIC_DRIVER_LOCATION,
   NIR_INTRINSIC_MEMORY_SEMANTICS,
   NIR_INTRINSIC_MEMORY_MODES,
   NIR_INTRINSIC_MEMORY_SCOPE,
   NIR_INTRINSIC_EXECUTION_SCOPE,
   NIR_INTRINSIC_IO_SEMANTICS,
   NIR_INTRINSIC_ROUNDING_MODE,
   NIR_INTRINSIC_SATURATE,
   NIR_INTRINSIC_NUM_INDEX_FLAGS,
} nir_intrinsic_index_flag;

extern const char *nir_intrinsic_index_names[NIR_INTRINSIC_NUM_INDEX_FLAGS];

#endif /* _NIR_INTRINSICS_ */