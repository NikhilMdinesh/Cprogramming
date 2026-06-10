#include<stdio.h>
int main(){
    int i,sum=1,n;
    printf("enter the number\n");
    scanf("%d",&n);
for(i=1;i<=n/2;i++){
    
    if ((n%i)==0){
        sum=i;
        sum=sum+i;
    }
}printf("sum of divisors:%d\n",sum);
if (sum==n){
    printf("number is perfect\n");
}
else{
    printf("number is not perfect\n");
}return 0;
}