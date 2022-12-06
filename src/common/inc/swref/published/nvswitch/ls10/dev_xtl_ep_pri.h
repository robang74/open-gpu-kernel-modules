/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __ls10_dev_xtl_ep_pri_h__
#define __ls10_dev_xtl_ep_pri_h__
/* This file is autogenerated.  Do not edit */
#define NV_XTL                                                                   0x91FFF:0x91000        /* RW--D */
#define NV_XTL_EP_PRI                                                            0x00FFF:0x00000        /* RW--D */
#define NV_XTL_EP_PRI_XTL_EP_CG                          0x00000F00 /* RWI4R */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_DLY_CNT                 5:0 /* RWIVF */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_DLY_CNT_HWINIT   0x0000000B /* RWI-V */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_DLY_CNT__PROD    0x0000000B /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_EN                      6:6 /* RWIVF */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_EN_ENABLED       0x00000001 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_EN_DISABLED      0x00000000 /* RWI-V */
#define NV_XTL_EP_PRI_XTL_EP_CG_IDLE_CG_EN__PROD         0x00000001 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG_STATE_CG_EN                     7:7 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STATE_CG_EN_ENABLED      0x00000001 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STATE_CG_EN_DISABLED     0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STATE_CG_EN__PROD        0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_DLY_CNT               13:8 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_DLY_CNT_HWINIT  0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_DLY_CNT__PROD   0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_EN                   14:14 /* RWIVF */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_EN_ENABLED      0x00000001 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_EN_DISABLED     0x00000000 /* RWI-V */
#define NV_XTL_EP_PRI_XTL_EP_CG_STALL_CG_EN__PROD        0x00000000 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG_QUIESCENT_CG_EN               15:15 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_QUIESCENT_CG_EN_ENABLED  0x00000001 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_QUIESCENT_CG_EN_DISABLED 0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_QUIESCENT_CG_EN__PROD    0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_WAKEUP_DLY_CNT                19:16 /* RWIVF */
#define NV_XTL_EP_PRI_XTL_EP_CG_WAKEUP_DLY_CNT_HWINIT    0x0000000B /* RWI-V */
#define NV_XTL_EP_PRI_XTL_EP_CG_WAKEUP_DLY_CNT__PROD     0x0000000B /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_CNT                 23:20 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_CNT_FULLSPEED  0x0000000f /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_CNT__PROD      0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_DI_DT_SKEW_VAL                27:24 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_DI_DT_SKEW_VAL_HWINIT    0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_DI_DT_SKEW_VAL__PROD     0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_EN                  28:28 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_EN_ENABLED     0x00000001 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_EN_DISABLED    0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_EN__PROD       0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_SW_OVER             29:29 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_SW_OVER_EN     0x00000001 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_SW_OVER_DIS    0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_THROT_CLK_SW_OVER__PROD  0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_PAUSE_CG_EN                   30:30 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_PAUSE_CG_EN_ENABLED      0x00000001 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_PAUSE_CG_EN_DISABLED     0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_PAUSE_CG_EN__PROD        0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_HALT_CG_EN                    31:31 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_HALT_CG_EN_ENABLED       0x00000001 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_HALT_CG_EN_DISABLED      0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG_HALT_CG_EN__PROD         0x00000000 /*       */
#define NV_XTL_EP_PRI_XTL_EP_CG1                               0x00000F04 /* RWI4R */
#define NV_XTL_EP_PRI_XTL_EP_CG1_MONITOR_CG_EN                      0:0 /* RWIVF */
#define NV_XTL_EP_PRI_XTL_EP_CG1_MONITOR_CG_EN_ENABLED       0x00000001 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG1_MONITOR_CG_EN_DISABLED      0x00000000 /* RWI-V */
#define NV_XTL_EP_PRI_XTL_EP_CG1_MONITOR_CG_EN__PROD         0x00000000 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG1_SLCG                            15:1 /* RWIVF */
#define NV_XTL_EP_PRI_XTL_EP_CG1_SLCG_ENABLED                0x00000000 /* RW--V */
#define NV_XTL_EP_PRI_XTL_EP_CG1_SLCG_DISABLED               0x00007FFF /* RWI-V */
#define NV_XTL_EP_PRI_XTL_EP_CG1_SLCG__PROD                  0x00000000 /* RW--V */
#endif // __ls10_dev_xtl_ep_pri_h__
