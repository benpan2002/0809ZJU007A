#include <stdio.h>

// #define SIZE 166
// #define HSIZE 83

// int main( int argc, int const *argv[] ) {
//   int i = 0;
//   char string[SIZE] = "";
//   scanf("%SIZEs",string);
//   for( i = 0; i < sizeof(string)/sizeof(string[0])/2; i++){
//     string[SIZE-1-i] = string[i];
//     string[i] = NULL;
//   }
//   for( i = sizeof(string)/sizeof(string[0])/2; i < sizeof(string); i++){
//     printf("%c",string[i]);
//   }
//   // printf("%d",sizeof(string));
//   // printf("%s",string);
//   return 0;
// }

int reverse_string( char *string );

int main( int argc, int const *argv[] ) {
  char *string = "hello";
  string = reverse_string(string);
  return 0;
}

int reverse_string( char *string ){
  char *last, *tmp;
  //What if tmp isn't a pointer?
  for ( last = string; last != '/0'; last++) {

  }
  last--;

  while (string < last)
  {
    tmp = *last;
    *last = *string;
    *string = tmp;
  }
  
  return string;
}