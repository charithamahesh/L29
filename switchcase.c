#include <stdio.h>
int main () {
	int num1,num2,choice;
	printff("simple calculator\n");
	printf("1.addition,2.subtraction,3.multiplication,4.division\n");
	printf("enter your choice:");
	scanf("%d",&choice);

	printf("enter two numbers:");
	scanf("%d %d",&num1,&num2);

	switch{
case1:
		printf("result:%d+%d=%d\n",num1,num2,num1+num2);
		break;
case2:
		printf("result:%d-%d=%d\n",num1,num2,num1-num2);
		break;
case3:
		printf("result:%d*%d=%d\n",num1,num2,num1*num2);
		break;
case4:
		printf("result:%.2f/%.2f=%.2f\n",num1,num2,num1/num2);
		break;
		default:
		printf("invalid choice! please enter a number between 1 and 4.\n");
	}
	return 0;
}
