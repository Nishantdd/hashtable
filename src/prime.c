#include <math.h>
#include "prime.h"

/*
 * Return whether x is prime or not
 *
 * Returns:
 *   1  - prime
 *   0  - not prime
 *   -1 - undefined (i.e. x < 2)
 */
int is_prime(const int x){
    if(x < 2) return -1;
    if(x < 4) return 1;
    if(x % 2 == 0) return 0;
    size_t limit = (size_t)sqrt((double)x);
    for(size_t i = 3; i < limit; i += 2){
        if(x % i == 0) return 0;
    }
    return 1;
}

/*
 * Return the next prime after x, or x if x is prime
 */
int next_prime(int x){
    while(is_prime(x) != 1) x++;
    return x;
}