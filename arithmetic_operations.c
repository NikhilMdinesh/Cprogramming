#include<stdio.h>
int a,b,c;

void sum(int a,int b,int c){
    c=a+b;
printf("The sum is %d",c);
}
void difference(int a,int b,int c){
    if (a>b){
        c=(a-b);
        printf("the difference is %d",c);
    }
else{
    c=(b-a);
    printf("the difference is &d",c);
}};
void multiplication(int a,int b,int c)
{
    c=a*b;
    printf("the product is %d",c);
}
void division(int a,int b,int c){
    c=a/b;
    printf("the result is %d",c);
}
int  main(){
    int n;
    printf("enter the choice" );
    scanf("%d",&n);
   
    do
    {
     printf("enter the numbers\n");
     scanf("%d%d",&a,&b);
        switch(n)
        {
    
    case 1:sum(a,b,c);
    break;
    case 2:difference(a,b,c);
    break;
    case3:multiplication(a,b,c);
    break;
    case 4:division(a,b,c);
    break;
        }return 0;
    }while(n!=5);
}

    