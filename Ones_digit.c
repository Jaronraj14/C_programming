#include<stdio.h>
int main(){
    int num,a;
    printf("Enter a 2 digit number:");
    scanf("%d",&num);
    if(num<10|| num>99){
        printf("Enter a valid 2 digit number");
        return 1;
    }else{
        a=num%10;
        printf("The ones digit of the given number is :%d",a);
        return 0;
    }
}
