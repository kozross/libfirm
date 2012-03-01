/*
 * Copyright (C) 1995-2008 University of Karlsruhe.  All right reserved.
 *
 * This file is part of libFirm.
 *
 * This file may be distributed and/or modified under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in the
 * packaging of this file.
 *
 * Licensees holding valid libFirm Professional Edition licenses may use
 * this file in accordance with the libFirm Commercial License.
 * Agreement provided with the Software.
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE.
 */

/**
 * @file
 * @brief       Forward declarations of backend types
 * @author      Matthias Braun
 */
#ifndef FIRM_BE_TYPES_H
#define FIRM_BE_TYPES_H

#include "firm_types.h"

typedef unsigned int sched_timestep_t;

typedef struct arch_register_class_t     arch_register_class_t;
typedef struct arch_register_req_t       arch_register_req_t;
typedef struct arch_register_t           arch_register_t;
typedef struct arch_flag_t               arch_flag_t;
typedef struct arch_inverse_t            arch_inverse_t;
typedef struct arch_isa_if_t             arch_isa_if_t;
typedef struct arch_env_t                arch_env_t;

/**
 * Some flags describing a node in more detail.
 */
typedef enum arch_irn_flags_t {
	arch_irn_flags_none             = 0,       /**< Node flags. */
	arch_irn_flags_dont_spill       = 1U << 0, /**< This must not be spilled. */
	arch_irn_flags_rematerializable = 1U << 1, /**< This can be replicated instead of spilled/reloaded. */
	arch_irn_flags_modify_flags     = 1U << 2, /**< I modify flags, used by the
	                                                default check_modifies
	                                                implementation in beflags */
	arch_irn_flags_simple_jump      = 1U << 3, /**< a simple jump instruction */
	arch_irn_flags_not_scheduled    = 1U << 4, /**< node must not be scheduled*/
	arch_irn_flags_backend          = 1U << 5, /**< begin of custom backend
	                                                flags */
} arch_irn_flags_t;
ENUM_BITSET(arch_irn_flags_t)

typedef struct be_lv_t                  be_lv_t;
typedef union  be_lv_info_t             be_lv_info_t;

typedef struct be_abi_call_flags_bits_t be_abi_call_flags_bits_t;
typedef union  be_abi_call_flags_t      be_abi_call_flags_t;
typedef struct be_abi_callbacks_t       be_abi_callbacks_t;
typedef struct be_abi_call_t            be_abi_call_t;
typedef struct be_abi_irg_t             be_abi_irg_t;
typedef struct be_stack_layout_t        be_stack_layout_t;

typedef struct be_dom_front_info_t      be_dom_front_info_t;

typedef struct backend_info_t           backend_info_t;
typedef struct sched_info_t             sched_info_t;
typedef struct reg_out_info_t           reg_out_info_t;
typedef struct be_ifg_t                 be_ifg_t;
typedef struct copy_opt_t               copy_opt_t;

typedef struct be_main_env_t be_main_env_t;
typedef struct be_options_t  be_options_t;

#endif
