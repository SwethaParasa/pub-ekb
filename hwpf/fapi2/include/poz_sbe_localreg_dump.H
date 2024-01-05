#ifndef _POZ_SBELOCALREG_DUMP_H_
#define _POZ_SBELOCALREG_DUMP_H_

#include <cstdint>
#include <string>

typedef struct
{
    uint16_t     number;
    std::string  name;
} SBEReg_t;

typedef struct
{
    SBEReg_t    reg;
    uint32_t    value;
} SBERegValue_t;

typedef struct
{
    SBEReg_t    reg;
    uint64_t    value;
} SBESCOMRegValue_t;

#endif
