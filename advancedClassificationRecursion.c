#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int length(int);
int isPalindrome(int);
int isArmstrongRecursive(int,int);
int isArmstrong(int);
int Reverse(int);




int length(int x){
int counter=0;
int temp =x;
while(temp != 0){
temp=temp/10;
counter++;
}
return counter;
}

int pow1(int x, int p){
if(p==0)
return 1;
return x*pow1(x, p-1);
}

int Reverse(int x){

int digit = (int)log10(x);
if(x == 0){
   return 0;
}
return ((x%10 * pow1(10,digit)) +Reverse(x/10));

}

int isPalindrome(int x){
    if(x== Reverse(x))
{
return 1;
}
return 0;
}


    int isArmstrongRecursive(int x,int len){ 
        if(x == 0){
            return 0;
        }
        int temp =x;
        int r= temp%10;
        return pow1(r,len)+isArmstrongRecursive(x/10,len);

    }
    int isArmstrong(int x){
        int len= length(x);
        int p=isArmstrongRecursive(x,len);
        if (p == x){
            return 1;
        }
        else{
            return 0;
        }
        
    }
    

    
