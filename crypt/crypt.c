#include <stdio.h>
#include <stdlib.h>

#define MAX_INFO_LEN 2048
/**
 * info xor key = result
 * 
 */
int crypt_xor(){
  char i = 'A';
  char k = '*';
  char r0 = i^ k;
  char r1 = r0 ^ k;
  printf("\n %d %d %d %d \n", i, k, r0, r1);
  return 0;
}


/**
 * return 0 if not valid.
 */
int isValidChar(int c){
  if (c < 0x20) {
    return 0;
  } else if ( c >= 0x20 && c < 0x30) {
    // 0x20 - 0x2f ! "" # $ % & ' () * +, -./
    return 1;
  } else if ( c >= 0x30 && c < 0x3A) {
    // 0x30 - 0x39 0-9
    return 1;
  } else if ( c >= 0x3A && c < 0x41) {
    // 0x3A - 0x40 : ; < = > ? @ 
    return 1;
  } else if ( c >= 0x41 && c < 0x5B) {
    // 0x41 - 0x5A A-Z
    return 1;
  } else if ( c >= 0x5B && c < 0x61) {
    // 0x5B - 0x60 [ \ ] ^ _ `
    return 0;
  } else if ( c >= 0x61 && c < 0x7B) {
    // 0x61 - 0x7A a-z
    return 1;
  } else if ( c >= 0x7B && c < 0x7F) {
    // 0x7B - 0x7E { | } ~
    return 1;
  }
  return 0;

}

int decrypt(char* info, int len) {
  // result message same size as the info.
  char* result = malloc(sizeof(char)*len+1);
  result[len-1] = 0;
  // memset(result, 0, sizeof(char)*len);
  // key is 3 char.
  char key[3];
  for ( int offset = 0; offset < 3; offset++) {
  // d is the key char
  int d;
  //  c is the result key.
  char c;
  for (d = 'a'; d <= 'z'; d++) {
    // try a-z
    int i;
    for (i = offset; i < len; i+= 3){
      c = info[i] ^ d;
      if (!isValidChar(c)) {
        break; 
      }
      // result[i] = c;
      // printf("%3d %c %c \t", info[i], d, c);
      // printf("%3d ", info[i]);
    }
    if (i >= len) {
      // all decrypt char is valid, so 
      printf("\n\n key is  %c , i is %d, len is %d\n",  d, i, len);
      key[offset] = d;
      // fill the result string by this key char.
    for (i = offset; i < len; ){
      c = info[i] ^ d;
      result[i] = c;
      i+= 3;
    }

    }
  }

  } 
  // set end.  
  // len or len-1 ??? 
  result[len] = 0;
// result[len-1] = 0;
  printf("\n Total %d, key is %s \n%s\n\n", len, key,  result);
  free(result);
  result = NULL;
  return 0;
}

int main()
{
  // crypt_xor();

  FILE *fp; 
  // opening of file
  fp =fopen("/home/ben/cpp/0809ZJU007A/crypt/cipher1.txt", "r"); 
  if (!fp) // checking of error
    return 1;
  // char con[1000];
  //while (fgets(con,1000, fp)!=NULL) {
    // printf("%s",con);
    // decrypt(con);
  // }
  // the crypted info
  char info[MAX_INFO_LEN] = {0};
  int index=0;
  char c;
  char str[3];
  int i = 0;
  while ( (c = getc(fp)) != EOF ) {
    // format is 79,59, so need convert int into ascii code.
    if (c == ','){
      // convert into char, store it.
      str[i] = 0;
      int c = atoi(str);
      info[index++] = c;
      i = 0; 
    } else {
      str[i++] = c;
    }
    if (i >= 3) {
      printf("BAD input\n");
      exit(-9);
    }
  }
  if (i>0){
    // last num without ,
      str[i] = 0;
      int c = atoi(str);
      info[index++] = c;
  }
  fclose(fp); // closing of file
  // try to decrypt it.
  decrypt(info, index);
  printf("\n---END---\n");
  return 0;
}