#include <stdio.h>
#include <stdlib.h>

/**
 * N! = N * (N-1)!
 */

int judgement(int num){
    if( num < 1 )
    return EXIT_FAILURE;
}

int factorial(int num){
    int product = num;
    if (num != 1){
        product *=factorial(num-1);
    }
    // product *= num;
    return product;
}

int main(int argc, char const *argv[]){
    int num = 4, product;
    judgement(num);
    product = factorial(num);
    printf("%d\n.", product);
    return EXIT_SUCCESS;
}