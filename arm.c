#include<stdio.h>
void main(){
    int n,a,sum=0;
    printf("enter the numbr");
    scanf("%d",&n);
    do{
        a=n%10;
        a=a/10;
        sum=sum+pow(a,3);

    }
    while(n<0);
}
