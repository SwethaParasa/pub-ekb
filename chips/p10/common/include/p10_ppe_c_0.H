/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/common/include/p10_ppe_c_0.H $                      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_ppe_c_0_H_
#define __p10_ppe_c_0_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_L3_PFETCNTL]
static const uint32_t CPMS_L3_PFETCNTL = 0xc000e200ull;
static const uint32_t CPMS_L3_PFETCNTL_WO_CLEAR = 0xc000e230ull;
static const uint32_t CPMS_L3_PFETCNTL_WO_OR = 0xc000e220ull;

static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_SEQ_STATE = 0;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_SEQ_STATE_LEN = 2;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_SEQ_STATE = 2;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_SEQ_STATE_LEN = 2;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_VAL_OVERRIDE = 4;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_SEL_OVERRIDE = 5;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_VAL_OVERRIDE = 6;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_SEL_OVERRIDE = 7;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_ENABLE_VALUE = 12;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_ENABLE_VALUE_LEN = 8;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_SEL_VALUE = 20;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PFET_SEL_VALUE_LEN = 4;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_ENABLE_VALUE = 24;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_ENABLE_VALUE_LEN = 8;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_SEL_VALUE = 32;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PFET_SEL_VALUE_LEN = 4;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PG_STATE = 42;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PG_STATE_LEN = 4;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PG_SEL = 46;
static const uint32_t CPMS_L3_PFETCNTL_VDD_PG_SEL_LEN = 4;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PG_STATE = 50;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PG_STATE_LEN = 4;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PG_SEL = 54;
static const uint32_t CPMS_L3_PFETCNTL_VCS_PG_SEL_LEN = 4;
static const uint32_t CPMS_L3_PFETCNTL_SRAM_ENABLE = 63;
//<< [CPMS_L3_PFETCNTL]
// ppe_c/reg00000.H

//>> [QME_SPWU_OTR]
static const uint32_t QME_SPWU_OTR = 0xc0008300ull;

static const uint32_t QME_SPWU_OTR_REQ = 0;
static const uint32_t QME_SPWU_OTR_DONE = 4;
//<< [QME_SPWU_OTR]
// ppe_c/reg00000.H

//>> [QME_SSH_OTR]
static const uint32_t QME_SSH_OTR = 0xc0008200ull;

static const uint32_t QME_SSH_OTR_STOP_GATED = 0;
static const uint32_t QME_SSH_OTR_SPECIAL_WKUP_DONE = 1;
static const uint32_t QME_SSH_OTR_STOP_TRANSITION = 2;
static const uint32_t QME_SSH_OTR_STOP_TRANSITION_LEN = 2;
static const uint32_t QME_SSH_OTR_REQ_STOP_LEVEL = 4;
static const uint32_t QME_SSH_OTR_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OTR_ACT_STOP_LEVEL = 8;
static const uint32_t QME_SSH_OTR_ACT_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OTR_DEEPEST_REQ_STOP_LEVEL = 12;
static const uint32_t QME_SSH_OTR_DEEPEST_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OTR_DEEPEST_ACT_STOP_LEVEL = 16;
static const uint32_t QME_SSH_OTR_DEEPEST_ACT_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OTR_SPECIAL_WKUP_OCCURRED = 20;
static const uint32_t QME_SSH_OTR_SPECIAL_WKUP_ENTERED = 21;
static const uint32_t QME_SSH_OTR_STOP_STATE_EXITED = 22;
static const uint32_t QME_SSH_OTR_STOP_STATE_ENTERED = 23;
static const uint32_t QME_SSH_OTR_DEEPEST_STOP_ENTRY = 24;
static const uint32_t QME_SSH_OTR_DEEPEST_STOP_ENTRY_LEN = 4;
//<< [QME_SSH_OTR]
// ppe_c/reg00000.H

//>> [QME_SSH_SRC]
static const uint32_t QME_SSH_SRC = 0xc00081c0ull;

static const uint32_t QME_SSH_SRC_STOP_GATED = 0;
static const uint32_t QME_SSH_SRC_SPECIAL_WKUP_DONE = 1;
static const uint32_t QME_SSH_SRC_STOP_TRANSITION = 2;
static const uint32_t QME_SSH_SRC_STOP_TRANSITION_LEN = 2;
static const uint32_t QME_SSH_SRC_REQ_STOP_LEVEL = 4;
static const uint32_t QME_SSH_SRC_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_SRC_ACT_STOP_LEVEL = 8;
static const uint32_t QME_SSH_SRC_ACT_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_SRC_REQ_WRITE_ENABLE = 12;
static const uint32_t QME_SSH_SRC_ACT_WRITE_ENABLE = 13;
static const uint32_t QME_SSH_SRC_SELF_SAVE_ACTIVE = 30;
static const uint32_t QME_SSH_SRC_SELF_RESTORE_ACTIVE = 31;
static const uint32_t QME_SSH_SRC_SAMPLED_STOP_ACTIVE = 39;
static const uint32_t QME_SSH_SRC_SAMPLED_STOP_STATE = 40;
static const uint32_t QME_SSH_SRC_SAMPLED_STOP_STATE_LEN = 4;
static const uint32_t QME_SSH_SRC_SPECIAL_WKUP_PRESENT = 48;
static const uint32_t QME_SSH_SRC_SPECIAL_WKUP_PRESENT_LEN = 4;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_SET = 56;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_SET_LEN = 2;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_CLR = 58;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_CLR_LEN = 2;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_ACT = 60;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_ACT_LEN = 2;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_DRP = 62;
static const uint32_t QME_SSH_SRC_SPC_WKUP_RECENT_DRP_LEN = 2;
//<< [QME_SSH_SRC]
// ppe_c/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00000.H"
#endif
#endif
