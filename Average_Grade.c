#include<stdio.h>
int main(){
    int tamil, english, science, social, maths, avg;
    printf("Enter the tamil mark: ");
    scanf("%d",&tamil);
    printf("Enter the english mark: ");
    scanf("%d",&english);
    printf("Enter the science mark: ");
    scanf("%d",&science);
    printf("Enter the social mark: ");
    scanf("%d",&social);
    printf("Enter the maths mark: ");
    scanf("%d",&maths);
    
    
    if(tamil<101 && english<101 && science<101 && social<101 && maths<101){
        avg=(tamil+english+science+social+maths)/5;
    printf("Total average :%d\n",avg);
        if(avg>=90){
        printf("Your grade is A");
        }else if(avg>=89 && avg>=80){
        printf("Your grade is B ");
        }else if(avg>=79 && avg>=70){
        printf("Your grade is C");
       }else if(avg>=69 && avg>=60){
        printf("Your grade is D");
       }else if(avg>=59 && avg>=50){
        printf("Your grade is  E");
       }else if(avg<50){
           printf("Your grade is F");
       }
   
    }else{
        printf("Invalid data");
    }
     return 0;
    
    
}
