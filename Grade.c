#includ<stdio.h>
int main(){
	int mark;
	printf("Enter the mark you obtained:");
	scanf("%d",&mark);
	if(mark>100){
		printf("Invalid Data");
	}
	else if(mark>=90){
		printf("Your grade is A");
	}
	else if(mark>=80){
		printf("Your grade is B");
	}
	else if(mark>=70){
		printf("Your grade is C");
	}
	else if(mark>=60){
		printf("Your grade is D");
	}
	else if(mark>=50){
		printf("Your grade is E");
	}
	else if(mark<50){
		printf("Your grade is F");
	}
	reutrn 0;
