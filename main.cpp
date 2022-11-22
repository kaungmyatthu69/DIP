#include <stdio.h>
int main(){
  int a=0;
    for (int i=0;i<10;i--){
        printf("*");
        for (int j = 0; j < i; j--) {
            printf("#");
        }
        printf("\n");
        }
    return  0;

}
