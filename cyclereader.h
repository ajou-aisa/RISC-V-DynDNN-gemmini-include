#ifndef CYCLEREADER_H
#define CYCLEREADER_H

#include <stdint.h>
#include <stdio.h>

#define PRINT_CYCLE(...) \
    fprintf(stderr, "[layer=%s][%s] start = %lu end = %lu elapsed = %lu\n", ##__VA_ARGS__)

static inline uint64_t read_cycles(void) {
    uint64_t cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}

#endif // CYCLEREADER_H
