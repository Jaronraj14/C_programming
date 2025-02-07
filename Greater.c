#include<stdio.h>
int great(int a,int b,int c){
    if(a>b && a>c){
       printf("\n%d is greater",a);
    }else if(b>a && b>c){
       printf("\n%d is greater",b);
    }else{
        printf("\n%d is greater",c);
    }
    
}
int main(){
    int num1,num2,num3;
    printf("\nEnter First number:");
    scanf("%d",&num1);
    printf("\nEnter Second number:");
    scanf("%d",&num2);
    printf("\nEnter Third number:");
    scanf("%d",&num3);
    great(num1,num2,num3);
}
