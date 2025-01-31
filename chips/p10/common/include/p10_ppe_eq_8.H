/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: chips/p10/common/include/p10_ppe_eq_8.H $                     */
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

#ifndef __p10_ppe_eq_8_H_
#define __p10_ppe_eq_8_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_eq
{
#endif


//>> [QME_DORP]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_DORP = 0xc0002540ull;

static const uint32_t QME_DORP_QUOTIENT = 0;
static const uint32_t QME_DORP_QUOTIENT_LEN = 32;
static const uint32_t QME_DORP_REMAINDER = 32;
static const uint32_t QME_DORP_REMAINDER_LEN = 32;
//<< [QME_DORP]
// ppe_eq/reg00008.H

//>> [QME_RVCR]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_RVCR = 0xc0000840ull;

static const uint32_t QME_RVCR_RVID_VALUE = 1;
static const uint32_t QME_RVCR_RVID_VALUE_LEN = 7;
//<< [QME_RVCR]
// ppe_eq/reg00008.H

//>> [QME_SCRA]
//ERRCODE: // Some of the name targets not found in address targets: eq
// No targets could be determined from the address.

static const uint32_t QME_SCRA_RW = 0xc0001240ull;
static const uint32_t QME_SCRA_WO_CLEAR = 0xc0001270ull;
static const uint32_t QME_SCRA_WO_OR = 0xc0001260ull;

static const uint32_t QME_SCRA_DATA = 0;
static const uint32_t QME_SCRA_DATA_LEN = 32;
//<< [QME_SCRA]
// ppe_eq/reg00008.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_eq/reg00008.H"
#endif
#endif
