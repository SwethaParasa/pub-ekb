/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/common/include/p10_ppe_c_f.H $                      */
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

#ifndef __p10_ppe_c_f_H_
#define __p10_ppe_c_f_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_ACCR]
static const uint32_t CPMS_ACCR = 0xc000e780ull;

static const uint32_t CPMS_ACCR_COUNT_MODE = 0;
static const uint32_t CPMS_ACCR_COUNT_MODE_LEN = 2;
static const uint32_t CPMS_ACCR_COUNT_TYPE = 2;
static const uint32_t CPMS_ACCR_COUNT_TYPE_LEN = 2;
static const uint32_t CPMS_ACCR_COUNT_ENABLE_SEL = 4;
static const uint32_t CPMS_ACCR_COUNT_ENABLE_SEL_LEN = 2;
static const uint32_t CPMS_ACCR_INVERT_COUNT_ENABLE = 6;
static const uint32_t CPMS_ACCR_COUNT_ALWAYS_SAMPLED = 7;
static const uint32_t CPMS_ACCR_HI_THRESHOLD = 8;
static const uint32_t CPMS_ACCR_HI_THRESHOLD_LEN = 8;
static const uint32_t CPMS_ACCR_LO_THRESHOLD = 16;
static const uint32_t CPMS_ACCR_LO_THRESHOLD_LEN = 8;
static const uint32_t CPMS_ACCR_SPARE = 24;
static const uint32_t CPMS_ACCR_SPARE_LEN = 2;
//<< [CPMS_ACCR]
// ppe_c/reg00015.H

//>> [CPMS_MMAR]
static const uint32_t CPMS_MMAR = 0xc000e380ull;
static const uint32_t CPMS_MMAR_PPE2 = 0xc000e3a0ull;
static const uint32_t CPMS_MMAR_WO_CLEAR = 0xc000e3b0ull;

static const uint32_t CPMS_MMAR_AVAILABLE = 0;
static const uint32_t CPMS_MMAR_FUNC_RESET = 1;
static const uint32_t CPMS_MMAR_LIMIT = 2;
static const uint32_t CPMS_MMAR_LIMIT_LEN = 2;
static const uint32_t CPMS_MMAR_LIMIT_UPDATE_SELECT = 4;
static const uint32_t CPMS_MMAR_DIRTY = 32;
//<< [CPMS_MMAR]
// ppe_c/reg00015.H

//>> [CPMS_SDSR]
static const uint32_t CPMS_SDSR = 0xc000e680ull;

static const uint32_t CPMS_SDSR_DDS_DATA = 0;
static const uint32_t CPMS_SDSR_DDS_DATA_LEN = 5;
static const uint32_t P10_20_CPMS_SDSR_CPMS_DDSR_DDS_DATA = 0; // p10:20,
static const uint32_t P10_20_CPMS_SDSR_CPMS_DDSR_DDS_DATA_LEN = 5;
static const uint32_t CPMS_SDSR_DDS_MIN = 5;
static const uint32_t CPMS_SDSR_DDS_MIN_LEN = 5;
static const uint32_t P10_20_CPMS_SDSR_DDS_MIN = 5; // p10:20,
static const uint32_t P10_20_CPMS_SDSR_DDS_MIN_LEN = 5;
static const uint32_t CPMS_SDSR_DDS_MAX = 10;
static const uint32_t CPMS_SDSR_DDS_MAX_LEN = 5;
static const uint32_t P10_20_CPMS_SDSR_DDS_MAX = 10; // p10:20,
static const uint32_t P10_20_CPMS_SDSR_DDS_MAX_LEN = 5;
static const uint32_t CPMS_SDSR_SAMPLE_DISABLE_OCCURRED = 15;
static const uint32_t P10_20_CPMS_SDSR_SAMPLE_DISABLE_OCCURRED = 15; // p10:20,
static const uint32_t P10_20_CPMS_SDSR_STOP_STATE_OCCURRED = 16; // p10:20,
//<< [CPMS_SDSR]
// ppe_c/reg00015.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00015.H"
#endif
#endif
