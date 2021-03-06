/*
 * Copyright (c) 2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifdef TFM_PARTITION_INTERNAL_TRUSTED_STORAGE
#ifdef RTE_TFM_API_SFN
#include "tfm_its_func_api.c"
#endif
#ifdef RTE_TFM_API_IPC
#include "tfm_its_ipc_api.c"
#endif
#endif
