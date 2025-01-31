/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/common/include/p10_ppe_eq_2.H $                     */
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

#ifndef __p10_ppe_eq_2_H_
#define __p10_ppe_eq_2_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> [QME_DUCR]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_DUCR = 0xc0001700ull;

static const uint32_t QME_DUCR_FDCR_DELAY_C0 = 0;
static const uint32_t QME_DUCR_FDCR_DELAY_C0_LEN = 8;
static const uint32_t QME_DUCR_FDCR_DELAY_C1 = 8;
static const uint32_t QME_DUCR_FDCR_DELAY_C1_LEN = 8;
static const uint32_t QME_DUCR_FDCR_DELAY_C2 = 16;
static const uint32_t QME_DUCR_FDCR_DELAY_C2_LEN = 8;
static const uint32_t QME_DUCR_FDCR_DELAY_C3 = 24;
static const uint32_t QME_DUCR_FDCR_DELAY_C3_LEN = 8;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C0 = 32;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C0_LEN = 2;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C1 = 34;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C1_LEN = 2;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C2 = 36;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C2_LEN = 2;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C3 = 38;
static const uint32_t QME_DUCR_FDCR_CAL_ADJUST_C3_LEN = 2;
static const uint32_t QME_DUCR_CORE_UPDATE_ENABLE = 40;
static const uint32_t QME_DUCR_CORE_UPDATE_ENABLE_LEN = 4;
static const uint32_t QME_DUCR_RESERVED_44_63 = 44;
static const uint32_t QME_DUCR_RESERVED_44_63_LEN = 20;
//<< [QME_DUCR]
// ppe_eq/reg00002.H

//>> [QME_EISR]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_EISR_RW = 0xc0002600ull;
static const uint32_t QME_EISR_WO_CLEAR = 0xc0002630ull;
static const uint32_t QME_EISR_WO_OR = 0xc0002620ull;

static const uint32_t QME_EISR_DEBUGGER = 0;
static const uint32_t QME_EISR_DEBUG_TRIGGER = 1;
static const uint32_t QME_EISR_SYSTEM_CHECKSTOP = 2;
static const uint32_t QME_EISR_LFIR_INDICATION = 3;
static const uint32_t QME_EISR_QOS_UPDATE = 4;
static const uint32_t QME_EISR_QOS_UPDATE_LEN = 4;
static const uint32_t QME_EISR_BCE_BUSY = 8;
static const uint32_t QME_EISR_RS4_BUSY = 9;
static const uint32_t QME_EISR_RESCLK_TARGET_ASSIST = 10;
static const uint32_t QME_EISR_RESCLK_DONE_ASSIST = 11;
static const uint32_t QME_EISR_PITCH_UPDATE = 12;
static const uint32_t QME_EISR_WOCR_UPDATE = 13;
static const uint32_t QME_EISR_TBR_CYCLES_ROLLED = 14;
static const uint32_t QME_EISR_TBR_TIMEBASE_ROLLED = 15;
static const uint32_t QME_EISR_DOORBELL_0 = 16;
static const uint32_t QME_EISR_DOORBELL_1 = 17;
static const uint32_t QME_EISR_DOORBELL_2 = 18;
static const uint32_t QME_EISR_PMCR_UPDATE = 19;
static const uint32_t QME_EISR_DOORBELL_A = 20;
static const uint32_t QME_EISR_DOORBELL_A_LEN = 4;
static const uint32_t P10_20_QME_EISR_DOORBELL_3 = 20; // p10:20,
static const uint32_t P10_20_QME_EISR_DOORBELL_4 = 21; // p10:20,
static const uint32_t P10_20_QME_EISR_SPAREA = 22; // p10:20,
static const uint32_t P10_20_QME_EISR_SPAREA_LEN = 2;
static const uint32_t QME_EISR_DOORBELL_B = 24;
static const uint32_t QME_EISR_DOORBELL_B_LEN = 4;
static const uint32_t P10_20_QME_EISR_SPAREB = 24; // p10:20,
static const uint32_t P10_20_QME_EISR_SPAREB_LEN = 4;
static const uint32_t QME_EISR_MMA_ACTIVE = 28;
static const uint32_t QME_EISR_MMA_ACTIVE_LEN = 4;
static const uint32_t QME_EISR_SPC_WKUP_RISE = 32;
static const uint32_t QME_EISR_SPC_WKUP_RISE_LEN = 4;
static const uint32_t QME_EISR_SPC_WKUP_FALL = 36;
static const uint32_t QME_EISR_SPC_WKUP_FALL_LEN = 4;
static const uint32_t QME_EISR_REG_WKUP_HIPRI = 40;
static const uint32_t QME_EISR_REG_WKUP_HIPRI_LEN = 4;
static const uint32_t QME_EISR_REG_WKUP_LOPRI = 44;
static const uint32_t QME_EISR_REG_WKUP_LOPRI_LEN = 4;
static const uint32_t QME_EISR_PM_STATE_ACTIVE_HIPRI = 48;
static const uint32_t QME_EISR_PM_STATE_ACTIVE_HIPRI_LEN = 4;
static const uint32_t QME_EISR_PM_STATE_ACTIVE_LOPRI = 52;
static const uint32_t QME_EISR_PM_STATE_ACTIVE_LOPRI_LEN = 4;
static const uint32_t QME_EISR_CPMS_INTERRUPT0 = 56;
static const uint32_t QME_EISR_CPMS_INTERRUPT0_LEN = 4;
static const uint32_t QME_EISR_CPMS_INTERRUPT1 = 60;
static const uint32_t QME_EISR_CPMS_INTERRUPT1_LEN = 4;
//<< [QME_EISR]
// ppe_eq/reg00002.H

//>> [QME_LFIRACT1]
//ERRCODE: // Some of the name targets not found in address targets: eq

static const uint32_t QME_LFIRACT1 = 0xc00000c0ull;

static const uint32_t QME_LFIRACT1_FIR_ACTION1 = 0;
static const uint32_t QME_LFIRACT1_FIR_ACTION1_LEN = 36;
//<< [QME_LFIRACT1]
// ppe_eq/reg00002.H

//>> [QME_SCRB]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_SCRB_RW = 0xc0001280ull;
static const uint32_t QME_SCRB_WO_CLEAR = 0xc00012b0ull;
static const uint32_t QME_SCRB_WO_OR = 0xc00012a0ull;

static const uint32_t QME_SCRB_DATA = 0;
static const uint32_t QME_SCRB_DATA_LEN = 32;
//<< [QME_SCRB]
// ppe_eq/reg00002.H

//>> [QME_THOR]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_THOR = 0xc0000980ull;

static const uint32_t QME_THOR_TSR_OVERRIDE_EN = 0;
static const uint32_t QME_THOR_PTSR_OVERRIDE_SEL = 1;
static const uint32_t QME_THOR_TSR_OVERRIDE_VAL = 4;
static const uint32_t QME_THOR_TSR_OVERRIDE_VAL_LEN = 8;
//<< [QME_THOR]
// ppe_eq/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_eq/reg00002.H"
#endif
#endif
