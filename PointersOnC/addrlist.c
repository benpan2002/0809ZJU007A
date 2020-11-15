#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "addrlist.h"

static char name[MAX_ADDRESSES][NAME_LENGTH];
static char address[MAX_ADDRESSES][ADDR_LENGTH];
static char phone[MAX_ADDRESSES][PHONE_LENGTH];

int main( int argc, char const* argv[]) {
    int entry;
    char name, address, phone;

    name[MAX_ADDRESSES][NAME_LENGTH] = input_name(name[][]);
    address[MAX_ADDRESSES][ADDR_LENGTH] = input_addr(address[][]);
    phone[MAX_ADDRESSES][PHONE_LENGTH] = input_phone(phone[][]);

    scanf("%s", &name);
    address = lookup_address(name);
    phone = lookup_phone(name);
    return EXIT_SUCCESS;
}

int input_name(char name[][]) {
    int i,j;
    for( i = 0; i < MAX_ADDRESSES; i++){
        for( j = 0; j < NAME_LENGTH; j++){
            scanf("%s",&name[i][j]);
        }
    }
    return name[MAX_ADDRESSES][NAME_LENGTH];
}

int input_addr(char address[][]) {
    int i,j;
    for( i = 0; i < MAX_ADDRESSES; i++){
        for( j = 0; j < ADDR_LENGTH; j++){
            scanf("%s",&address[i][j]);
        }
    }
    return address[MAX_ADDRESSES][ADDR_LENGTH];
}

int input_phone(char phone[][]) {
    int i,j;
    for( i = 0; i < MAX_ADDRESSES; i++){
        for( j = 0; j < PHONE_LENGTH; j++){
            scanf("%s",&phone[i][j]);
        }
    }
    return phone[MAX_ADDRESSES][PHONE_LENGTH];
}

static int find_entry( char const *name_to_find ) {
    int entry;

    for( entry = 0; entry < MAX_ADDRESSES; entry++) {
        if (strcmp( name_to_find, name[entry]) == 0 ) {
            return entry;
        }else{
            return -1;
        }
    }
}

char const *lookup_address( char const *name ) {
    int entry;

    entry = find_entry( name );
    if ( entry == -1 ) {
        return NULL;
    } else {
        return address[entry];
    }
}

char const *lookup_phone( char const *name ) {
    int entry;

    entry = find_entry( name );
    if ( entry == -1 ) {
        return NULL;
    } else {
        return phone[entry];
    }
}