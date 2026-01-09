#ifndef CYCLEREADER_H
#define CYCLEREADER_H

#include <stdint.h>

#ifdef __riscv
static inline uint64_t read_cycles(void) {
    uint64_t cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}
#else
static inline uint64_t read_cycles(void) {
    return 0;
}
#endif

#endif // CYCLEREADER_H
