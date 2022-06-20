#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned value_in_reg = * reg;
    unsigned p0 = value_in_reg & 1;
    unsigned p2 = (value_in_reg >> 2) & 1;
    unsigned p3 = (value_in_reg >> 3) & 1;
    unsigned p5 = (value_in_reg >> 5) & 1;

    unsigned next = p0 ^ p2 ^ p3 ^ p5;
    
    *reg = *reg >> 1;
    unsigned tmp = ~ (1 << 15);
    *reg = *reg & tmp;  //turn to 0
    *reg = *reg | (next << 15);  //turn to 1
}

