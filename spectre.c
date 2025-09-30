#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <sys/time.h>
#include <math.h>
#include <x86intrin.h>

int main(int argc, char **argv) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    uint64_t start = tv.tv_sec*(uint64_t)1000000+tv.tv_usec;

    printf("hello world!\n");

    gettimeofday(&tv, NULL);
    uint64_t end = tv.tv_sec*(uint64_t)1000000+tv.tv_usec;
    
    uint64_t elapsed = end - start;
    printf("time elapsed : %lld\n", elapsed);
    return 0;
}