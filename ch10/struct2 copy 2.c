#include <stdio.h>

struct abc {
    int a;
    int b;
    int c;
};

int main(int argc, char const *argv[]) {
    struct abc dabc;
    dabc.a = 25;
    dabc.b = 15;
    dabc.c = -1;
    
    return 0;
}

// typedef struct {
//     int a;
//     int b;
//     int c;
// } abc;

// int main(int argc, char const *argv[]) {
//     abc abc;
//     abc.a = 25;
//     abc.b = 15;
//     abc.c = -1;
//     return 0;
// }
