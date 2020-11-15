#include <stdio.h>

int strlen( char *string );

int main( int argc, char const *argv[]) {
    char *string;
    printf("Input a string to see its length\n");
    scanf("%s",&string);
    printf("%d",strlen(string));
    return 0;
}

int strlen( char *string ) {
    int cnt = 0;
    while( *string++ != '\0') {
        cnt++;
    }
    return cnt;
}