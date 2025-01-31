/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/common/include/p10_ppe_eq_0.H $                     */
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

#ifndef __p10_ppe_eq_0_H_
#define __p10_ppe_eq_0_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> [QME_BCECSR]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_BCECSR = 0xc0000680ull;

static const uint32_t QME_BCECSR_BUSY = 0;
static const uint32_t QME_BCECSR_ERROR = 1;
static const uint32_t QME_BCECSR_START = 2;
static const uint32_t QME_BCECSR_STOP = 3;
static const uint32_t QME_BCECSR_RNW = 4;
static const uint32_t QME_BCECSR_BARSEL = 5;
static const uint32_t QME_BCECSR_PRIORITY = 6;
static const uint32_t QME_BCECSR_INJECT_ERR = 7;
static const uint32_t QME_BCECSR_TYPE = 13;
static const uint32_t QME_BCECSR_TYPE_LEN = 3;
static const uint32_t QME_BCECSR_NUM_BLOCKS = 17;
static const uint32_t QME_BCECSR_NUM_BLOCKS_LEN = 11;
static const uint32_t QME_BCECSR_SBASE = 28;
static const uint32_t QME_BCECSR_SBASE_LEN = 13;
static const uint32_t QME_BCECSR_MBASE = 42;
static const uint32_t QME_BCECSR_MBASE_LEN = 22;
//<< [QME_BCECSR]
// ppe_eq/reg00000.H

//>> [QME_PSREQ]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_PSREQ = 0xc0001300ull;

static const uint32_t QME_PSREQ_PSTATE_REQ_C0 = 0;
static const uint32_t QME_PSREQ_PSTATE_REQ_C0_LEN = 8;
static const uint32_t QME_PSREQ_PSTATE_REQ_C1 = 8;
static const uint32_t QME_PSREQ_PSTATE_REQ_C1_LEN = 8;
static const uint32_t QME_PSREQ_PSTATE_REQ_C2 = 16;
static const uint32_t QME_PSREQ_PSTATE_REQ_C2_LEN = 8;
static const uint32_t QME_PSREQ_PSTATE_REQ_C3 = 24;
static const uint32_t QME_PSREQ_PSTATE_REQ_C3_LEN = 8;
static const uint32_t QME_PSREQ_PSTATE_REQ_QUAD = 32;
static const uint32_t QME_PSREQ_PSTATE_REQ_QUAD_LEN = 8;
static const uint32_t QME_PSREQ_RECENT_CORE_NUM = 42;
static const uint32_t QME_PSREQ_RECENT_CORE_NUM_LEN = 2;
static const uint32_t QME_PSREQ_PSTATE_UPDATE = 44;
static const uint32_t QME_PSREQ_PSTATE_UPDATE_LEN = 4;
static const uint32_t QME_PSREQ_QME_QMCR_CORE_PARTIAL_GOOD = 48;
static const uint32_t QME_PSREQ_QME_QMCR_CORE_PARTIAL_GOOD_LEN = 4;
static const uint32_t QME_PSREQ_QME_QMCR_AUTO_PMCR_UPDATE = 52;
static const uint32_t QME_PSREQ_QME_QMCR_PMCR_RECENT_MODE = 53;
static const uint32_t QME_PSREQ_PMCR_PIG_PENDING = 55;
//<< [QME_PSREQ]
// ppe_eq/reg00000.H

//>> [QME_QHTMODE]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_QHTMODE = 0xc0001a00ull;

static const uint32_t QME_QHTMODE_HTM_ENABLE = 0;
static const uint32_t QME_QHTMODE_MODE_WRAP = 1;
static const uint32_t QME_QHTMODE_DIS_TSTAMP = 2;
static const uint32_t QME_QHTMODE_SINGLE_TSTAMP = 3;
//<< [QME_QHTMODE]
// ppe_eq/reg00000.H

//>> [QME_RCOCR]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_RCOCR = 0xc00017c0ull;

static const uint32_t QME_RCOCR_0_RESCLK_CONTROL = 0;
static const uint32_t QME_RCOCR_0_RESCLK_CONTROL_LEN = 8;
static const uint32_t QME_RCOCR_1_RESCLK_CONTROL = 8;
static const uint32_t QME_RCOCR_1_RESCLK_CONTROL_LEN = 8;
static const uint32_t QME_RCOCR_2_RESCLK_CONTROL = 16;
static const uint32_t QME_RCOCR_2_RESCLK_CONTROL_LEN = 8;
static const uint32_t QME_RCOCR_3_RESCLK_CONTROL = 24;
static const uint32_t QME_RCOCR_3_RESCLK_CONTROL_LEN = 8;
static const uint32_t QME_RCOCR_0_RESCLK_ACTUAL = 32;
static const uint32_t QME_RCOCR_0_RESCLK_ACTUAL_LEN = 8;
static const uint32_t QME_RCOCR_1_RESCLK_ACTUAL = 40;
static const uint32_t QME_RCOCR_1_RESCLK_ACTUAL_LEN = 8;
static const uint32_t QME_RCOCR_2_RESCLK_ACTUAL = 48;
static const uint32_t QME_RCOCR_2_RESCLK_ACTUAL_LEN = 8;
static const uint32_t QME_RCOCR_3_RESCLK_ACTUAL = 56;
static const uint32_t QME_RCOCR_3_RESCLK_ACTUAL_LEN = 8;
//<< [QME_RCOCR]
// ppe_eq/reg00000.H

//>> [QME_RCTAR3]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_RCTAR3 = 0xc00019c0ull;

static const uint32_t QME_RCTAR3_DATA = 0;
static const uint32_t QME_RCTAR3_DATA_LEN = 64;
//<< [QME_RCTAR3]
// ppe_eq/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_eq/reg00000.H"
#endif
#endif
