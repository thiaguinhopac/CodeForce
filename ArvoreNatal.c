#include <stdio.h>

int main (void){

    unsigned char tree[5][15];
    unsigned short spaces = 8;
    unsigned short count = 5;
    
    sprintf(tree[0],"%c",0x2B);
    
    for(int x = 10; x >= 2; x-=2){
        sprintf(tree[count],"%c",0x2F);
        for(int y = 0; y < x - 1; y++){
            sprintf(tree[count],"%s%c",tree[count],0x2A);
        }
        sprintf(tree[count],"%s%c",tree[count],0x5C);
        count--;
    }


    for(int x = 0; x < 5; x++){
        for(int y = 0; y < spaces; y++){
            printf(" ");
        }
        spaces--;
        printf("%s\n", tree[x]);
    }

        for(int y = 0, spaces = 6; y < spaces; y++){
            printf(" ");
        }
        spaces--;
        printf("%s\n", " |||");

    return 0;
}