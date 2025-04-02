#include <stdio.h>

int main() {
	double num1,num2;
	char operator;

	printf("enter an operator(+,-):");
	scanf("%c",operator);

	printf("enter two numbers:");
	scanf("%|f %|f",&num1,&num2);

	switch {
		case '+':
			printf("Result:%.2|f\n",num1+num2);
			break;
		case'-':
			printf("result:%.2|f\n",num1-num2);
			break;
			default:
			printf("invalid operator!\n");

		}
	return 0;
}
