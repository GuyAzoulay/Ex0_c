#include "NumClass.h"
#include <stdio.h>

int factorial(int);

 int isPrime(int x){
     int temp = x/2;
     int i;
     for (i=2; i < temp; i++)
     {
         if(x % i == 0){
         return 0;
     }
 }
    return 1;
 }

 int isStrong(int x){//145
     int t=x;
     int temp=0;
     while (t>0)
     {
       int m = t % 10;
       temp =temp + factorial(m);
       t = t/10;  
     }
    if(temp == x){
        return 1;
    }
    return 0;
 }
 int factorial(int x){
     int result=1;
     for (int i = x; i >=1; i--)
     {
         result*=i;
     }
     return result;
 }
