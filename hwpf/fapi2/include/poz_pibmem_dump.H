#ifndef _POS_PIBMEM_DUMP_H_
#define _POS_PIBMEM_DUMP_H_

#include <cstdint>
typedef struct
{
    uint32_t read_addr;
    uint64_t read_data;
} array_data_t;

typedef enum
{
    START_TILL_END = 0,                         // Dump complete PIBMEM Array contents
    INTERMEDIATE_TILL_END = 1,                  // Dump from Address till End of PIBMEM
    START_TILL_INTERMEDIATE = 2,                // Dump from Start till Number of Bytes
    INTERMEDIATE_TILL_INTERMEDIATE = 3          // Dump from Address till Number of Bytes
} user_options;
#endif
