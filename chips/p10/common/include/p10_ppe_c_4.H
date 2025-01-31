/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/common/include/p10_ppe_c_4.H $                      */
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

#ifndef __p10_ppe_c_4_H_
#define __p10_ppe_c_4_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_CCCR]
static const uint32_t CPMS_CCCR = 0xc000e700ull;

static const uint32_t CPMS_CCCR_COUNT_MODE = 0;
static const uint32_t CPMS_CCCR_COUNT_MODE_LEN = 2;
static const uint32_t CPMS_CCCR_COUNT_TYPE = 2;
static const uint32_t CPMS_CCCR_COUNT_TYPE_LEN = 2;
static const uint32_t CPMS_CCCR_COUNT_ENABLE_SEL = 4;
static const uint32_t CPMS_CCCR_COUNT_ENABLE_SEL_LEN = 2;
static const uint32_t CPMS_CCCR_INVERT_COUNT_ENABLE = 6;
static const uint32_t CPMS_CCCR_COUNT_ALWAYS_SAMPLED = 7;
static const uint32_t CPMS_CCCR_HI_THRESHOLD = 8;
static const uint32_t CPMS_CCCR_HI_THRESHOLD_LEN = 8;
static const uint32_t CPMS_CCCR_LO_THRESHOLD = 16;
static const uint32_t CPMS_CCCR_LO_THRESHOLD_LEN = 8;
static const uint32_t CPMS_CCCR_SPARE = 24;
static const uint32_t CPMS_CCCR_SPARE_LEN = 2;
//<< [CPMS_CCCR]
// ppe_c/reg00004.H

//>> [CPMS_DPCR]
static const uint32_t CPMS_DPCR = 0xc000ea40ull;

static const uint32_t CPMS_DPCR_PROXY_SCALE_FACTOR = 0;
static const uint32_t CPMS_DPCR_PROXY_SCALE_FACTOR_LEN = 12;
static const uint32_t CPMS_DPCR_PROXY_LEAKAGE_CONSTANT = 12;
static const uint32_t CPMS_DPCR_PROXY_LEAKAGE_CONSTANT_LEN = 8;
static const uint32_t CPMS_DPCR_DDP_RECHARGE_VALUE = 20;
static const uint32_t CPMS_DPCR_DDP_RECHARGE_VALUE_LEN = 7;
//<< [CPMS_DPCR]
// ppe_c/reg00004.H

//>> [CPMS_PSSR]
static const uint32_t CPMS_PSSR = 0xc000e9c0ull;

static const uint32_t CPMS_PSSR_ACCUM_ERROR = 0;
static const uint32_t CPMS_PSSR_ACCUM_ERROR_LEN = 20;
static const uint32_t CPMS_PSSR_AVG_FTX_PHASE0 = 20;
static const uint32_t CPMS_PSSR_AVG_FTX_PHASE0_LEN = 8;
static const uint32_t CPMS_PSSR_AVG_FTX_PHASE1 = 28;
static const uint32_t CPMS_PSSR_AVG_FTX_PHASE1_LEN = 8;
static const uint32_t CPMS_PSSR_AVG_FTX_TOTAL = 36;
static const uint32_t CPMS_PSSR_AVG_FTX_TOTAL_LEN = 8;
static const uint32_t CPMS_PSSR_PITCH_PERIOD_NUMBER = 44;
static const uint32_t CPMS_PSSR_PITCH_PERIOD_NUMBER_LEN = 4;
static const uint32_t CPMS_PSSR_PITCH_SUB_PERIOD = 48;
static const uint32_t CPMS_PSSR_PITCH_SUB_PERIOD_LEN = 2;
static const uint32_t CPMS_PSSR_PITCH_PERIOD_TIMER = 50;
static const uint32_t CPMS_PSSR_PITCH_PERIOD_TIMER_LEN = 13;
static const uint32_t CPMS_PSSR_PITCH_ACTIVE = 63;
//<< [CPMS_PSSR]
// ppe_c/reg00004.H

//>> [CPMS_RVCSR]
static const uint32_t CPMS_RVCSR = 0xc000e040ull;
static const uint32_t CPMS_RVCSR_WO_CLEAR = 0xc000e070ull;
static const uint32_t CPMS_RVCSR_WO_OR = 0xc000e060ull;

static const uint32_t CPMS_RVCSR_RVID_ENABLE = 0;
static const uint32_t CPMS_RVCSR_RVID_OVERRIDE = 1;
static const uint32_t CPMS_RVCSR_ACS_CALIBRATE = 2;
static const uint32_t CPMS_RVCSR_RVRM_TUNE = 6;
static const uint32_t CPMS_RVCSR_RVRM_TUNE_LEN = 6;
static const uint32_t CPMS_RVCSR_RVID_ACTIVE = 32;
static const uint32_t CPMS_RVCSR_BYPASS_ACTIVE = 33;
static const uint32_t CPMS_RVCSR_RVID_ENABLED = 34;
static const uint32_t P10_20_CPMS_RVCSR_BYPASS_RAW = 35; // p10:20,
//<< [CPMS_RVCSR]
// ppe_c/reg00004.H

//>> [QME_SPWU_FSP]
static const uint32_t QME_SPWU_FSP = 0xc0008340ull;

static const uint32_t QME_SPWU_FSP_REQ = 0;
static const uint32_t QME_SPWU_FSP_DONE = 4;
//<< [QME_SPWU_FSP]
// ppe_c/reg00004.H

//>> [QME_SPWU_HYP]
static const uint32_t QME_SPWU_HYP = 0xc00083c0ull;

static const uint32_t QME_SPWU_HYP_REQ = 0;
static const uint32_t QME_SPWU_HYP_DONE = 4;
//<< [QME_SPWU_HYP]
// ppe_c/reg00004.H

//>> [QME_SPWU_OCC]
static const uint32_t QME_SPWU_OCC = 0xc0008380ull;

static const uint32_t QME_SPWU_OCC_REQ = 0;
static const uint32_t QME_SPWU_OCC_DONE = 4;
//<< [QME_SPWU_OCC]
// ppe_c/reg00004.H

//>> [QME_SSH_FSP]
static const uint32_t QME_SSH_FSP = 0xc0008240ull;

static const uint32_t QME_SSH_FSP_STOP_GATED = 0;
static const uint32_t QME_SSH_FSP_SPECIAL_WKUP_DONE = 1;
static const uint32_t QME_SSH_FSP_STOP_TRANSITION = 2;
static const uint32_t QME_SSH_FSP_STOP_TRANSITION_LEN = 2;
static const uint32_t QME_SSH_FSP_REQ_STOP_LEVEL = 4;
static const uint32_t QME_SSH_FSP_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_FSP_ACT_STOP_LEVEL = 8;
static const uint32_t QME_SSH_FSP_ACT_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_FSP_DEEPEST_REQ_STOP_LEVEL = 12;
static const uint32_t QME_SSH_FSP_DEEPEST_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_FSP_DEEPEST_ACT_STOP_LEVEL = 16;
static const uint32_t QME_SSH_FSP_DEEPEST_ACT_STOP_LEVEL_LEN = 4;
//<< [QME_SSH_FSP]
// ppe_c/reg00004.H

//>> [QME_SSH_HYP]
static const uint32_t QME_SSH_HYP = 0xc00082c0ull;

static const uint32_t QME_SSH_HYP_STOP_GATED = 0;
static const uint32_t QME_SSH_HYP_SPECIAL_WKUP_DONE = 1;
static const uint32_t QME_SSH_HYP_STOP_TRANSITION = 2;
static const uint32_t QME_SSH_HYP_STOP_TRANSITION_LEN = 2;
static const uint32_t QME_SSH_HYP_REQ_STOP_LEVEL = 4;
static const uint32_t QME_SSH_HYP_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_HYP_ACT_STOP_LEVEL = 8;
static const uint32_t QME_SSH_HYP_ACT_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_HYP_DEEPEST_REQ_STOP_LEVEL = 12;
static const uint32_t QME_SSH_HYP_DEEPEST_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_HYP_DEEPEST_ACT_STOP_LEVEL = 16;
static const uint32_t QME_SSH_HYP_DEEPEST_ACT_STOP_LEVEL_LEN = 4;
//<< [QME_SSH_HYP]
// ppe_c/reg00004.H

//>> [QME_SSH_OCC]
static const uint32_t QME_SSH_OCC = 0xc0008280ull;

static const uint32_t QME_SSH_OCC_STOP_GATED = 0;
static const uint32_t QME_SSH_OCC_SPECIAL_WKUP_DONE = 1;
static const uint32_t QME_SSH_OCC_STOP_TRANSITION = 2;
static const uint32_t QME_SSH_OCC_STOP_TRANSITION_LEN = 2;
static const uint32_t QME_SSH_OCC_REQ_STOP_LEVEL = 4;
static const uint32_t QME_SSH_OCC_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OCC_ACT_STOP_LEVEL = 8;
static const uint32_t QME_SSH_OCC_ACT_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OCC_DEEPEST_REQ_STOP_LEVEL = 12;
static const uint32_t QME_SSH_OCC_DEEPEST_REQ_STOP_LEVEL_LEN = 4;
static const uint32_t QME_SSH_OCC_DEEPEST_ACT_STOP_LEVEL = 16;
static const uint32_t QME_SSH_OCC_DEEPEST_ACT_STOP_LEVEL_LEN = 4;
//<< [QME_SSH_OCC]
// ppe_c/reg00004.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00004.H"
#endif
#endif
