#include <stdio.h>

int strlen(char *S){
    int len=0;
    while(S[len] != '\0'){
        len++;
    }
    return len;
}

int main(void){
    char cmd[256];
    while(1){
        /* Ready process */
        printf("#");
        fgets(&cmd,256,stdin);
        fflush(stdin);

        /* Search process (brute force) */
        
    }
}