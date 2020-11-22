#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int type = 1,year;

    scanf("%d",&year);

    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0  )type = 0;
    switch (type){
    case 0:
        printf("days of the FEB.: 29\n");
        break;
    case 1:
        printf("days of the FEB.: 28\n");
        break;
    }
    return EXIT_SUCCESS;
}