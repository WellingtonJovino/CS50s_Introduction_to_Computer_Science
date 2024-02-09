#include <stdio.h>
#include <string.h>
#include "cs50.h" 
#include <ctype.h>
#include <stdlib.h>

int main(void){
    char *s = get_string("");
    char *t = malloc(strlen(s) + 1);
    
    for(int i = 0; i <= strlen(s); i++){
        t[i] = s[i];
    }

    if (strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    printf("%s\n", t);
    printf("%s\n", s);
}
