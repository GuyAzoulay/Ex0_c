#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int length(int);
int newNumToCheck(int);
int firstNumChecker(int);
int isPalindrome(int);
int isArmstrongRecursive(int,int);
int isArmstrong(int);




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

int newNumToCheck(int x){
    int temp = x/10;
    int leng = length(temp); 
    int res =0;
    int i;
    int multi=1;
    for (i = 0; i < leng-1; i++) { 
        res+= (temp%10)*multi; 
        multi = multi*10;
        temp =temp/10;
    }
    return res;
}

int firstNumChecker(int x){ 
    int temp =x;
    while (temp >10){
        temp = temp/10;
    }
    return temp;
}

int isPalindrome(int x){
    if (length(x) == 0 || length(x) == 1){
        return 1;
    }
    if (firstNumChecker(x) != x%10){
        return 0;
    }else {
        int t =newNumToCheck(x);
        return isPalindrome(t);
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
    

    
