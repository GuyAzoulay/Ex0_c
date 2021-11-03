#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int length(int);

int isArmstrong(int x){
int temp=x;
int l= length(x);
int i=0;
while(temp != 0){

    //LETAKEN
i= i+ (double)pow(temp%10,l);
temp= temp/10;
}
if(i == x){
return 1;
}
     return 0;

}


int length(int x){
int counter=0;
int temp =x;
while(temp != 0){
temp=temp/10;
counter++;
}
return counter;
}


int isPalindrome(int x){    
int temp =x;
int f=0;
int sum =0;

while(temp > 0) {
f= temp %10; 
sum = sum*10+ f; 
temp =temp/10; 
}
if(sum == x)
return 1;
else return 0;
}