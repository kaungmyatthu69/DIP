#include "stdio.h"
int main(){
    int row=0;
    printf("Enter a number :");
    scanf(" %d",&row);
    for (int i = row; i >=1; --i) {
        for (int j = 0; j <i; ++j) {
            printf("*");


        }
//        for (int k = i; k >1; ) {
//            printf("#");
//        }
        printf("\n");

    }
    return 0;
}