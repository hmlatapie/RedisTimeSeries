/*
* Copyright 2018-2019 Redis Labs Ltd. and Contributors
*
* This file is available under the Redis Labs Source Available License Agreement
*/
#ifndef PARSE_POLICIES_H
#define PARSE_POLICIES_H

#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SimpleCompactionRule {
    uint64_t timeBucket;
    uint64_t retentionSizeMillisec;
    int aggType;
} SimpleCompactionRule;

int ParseCompactionPolicy(const char * policy_string, SimpleCompactionRule **parsed_rules, uint64_t *count_rules);

#ifdef __cplusplus
}
#endif

#endif
