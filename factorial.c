#include<stdio.h>
int main()
{
    int a,i,factorial=1;
    printf("enter the value\n");
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        factorial=factorial*i;   
    }
printf("the facorial of the number is %d",factorial);
return 0;
}