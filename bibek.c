#include<stdio.h>
void main(){

int i=0,n,sum=0;

printf("enter the value of n");
scanf("%d",&n);

while(i<5){

i=i+1;
if(n%2==1)
continue;
sum=sum+n;


}


printf("the sum is %d",sum);







}