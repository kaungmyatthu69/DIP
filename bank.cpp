#include "stdio.h"
int main(){
    int arr[11]={0,1,2,3,4,3,5,6,7,8,9};
    int toFind=3;
    int count=0;
    for (int i = 0; i <11 ; i++) {
        if (arr[i]==toFind){
            count++;
        }

    }
    if (count==0){
        printf("we not found %d",toFind);
    } else{
        printf("we found %d:\n",toFind);
        printf("we found 3 %d times",count);

    }
    return  0;
}