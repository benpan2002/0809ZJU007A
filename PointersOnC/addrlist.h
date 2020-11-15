#define NAME_LENGTH 30
#define ADDR_LENGTH 1000
#define PHONE_LENGTH 11

#define MAX_ADDRESSES 1000

int input_name(char name[][]);

int input_addr(char address[][]);

int input_phone(char phone[][]);

char const *lookup_address ( char const *name );

char const *lookup_phone ( char const *name );