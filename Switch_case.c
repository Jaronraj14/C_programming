#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
float division(float a,float b){
    return a/b;
}
int main(){
    int option,a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    printf("\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division");
    printf("\n\nEnter the option to execute :");
    scanf("%d",&option);
    if(option>4){
        printf("\nInvalid input !!!");
    }
    switch(option){
        case 1:
        printf("\nTher answer is:%d",add(a,b));
        break;
        case 2:
        printf("\nTher answer is:%d",sub(a,b));
        break;
        case 3:
        printf("\nThe answer is:%d",multiply(a,b));
        break;
        case 4:
        printf("\nThe answer is:%f",division(a,b));
        break;
    }
}
