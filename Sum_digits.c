#include<stdio.h>
int main(){
    int num;
    printf("Enter a 3-digit number:");
    scanf("%d",&num);
    if(num>=100 && num<= 999){
        int digit_1=num/100;
        int digit_2=(num/10)%10;
        int digit_3=num%10;
        int sum=digit_1+digit_2+digit_3;
        printf("The sum of the given 3-digit number is:%d",sum);
    }else{
        printf("Invaild input! Enter a valid input");
    }
}
