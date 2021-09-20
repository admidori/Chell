#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void echo_hello(){
    printf("Hello\n");
}

int judge(char cmd[]){
    if(strcmp(cmd,"hello")==0){
        echo_hello();
    }
    else if(strcmp(cmd,"exit")==0){
        exit(0);
    }
    else{
        return 1;
    }
    return 0;
}

int main(void){
    int status=0;
    char cmd[256];
    while(1){
        printf("> ");    scanf("%s",cmd);
        status=judge(cmd);
        if(status==1){
            printf("chell: command not found: %s\n",cmd);
            status=0;
        }
    }
    return 0;
}