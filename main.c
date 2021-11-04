#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int main(){
    int low;
    int high;
    int temp;
    scanf("%d", &low);
    scanf("%d", &high);
    if(high < low){
        temp = low;
        low = high;
        high = temp;
    }
temp=low;
printf("isPalindrome :");
    while(temp <= high){
        if(isPalindrome(temp)==1){
            printf("%d ",temp);
        }
        temp++;
    }
temp=low;
printf("\n\nisArmstrong :");
    while(temp<=high){
        if(isArmstrong(temp)==1){
            printf("%d ",temp);
        }
        temp++;
    }
    temp=low;
    printf("\n\nisPrime :");
    while(temp<=high){
        if(isPrime(temp)==1){
            printf("%d ",temp);
        }
        temp++;
    }
    temp=low;
    printf("\n\nisStrong :");
        while(temp<=high){
        if(isStrong(temp)==1){
            printf("%d ",temp);
        }
        temp++;
        }
    return 0;
}