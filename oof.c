#include<stdio.h>

int main(void){
    char talking[255];

    while(strcmp(talking,"oof")!=0 && strcmp(talking,"Oof")!=0){
            scanf("%s", talking);
            if(strcmp(talking,"oof")!=0 && strcmp(talking,"Oof")!=0){
                printf("oof\n");
                strcpy(talking,"");
            }
    }
    printf("No more oof");


}
