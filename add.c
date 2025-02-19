#include <stdio.h>

int main() {
	float num1,num2,sum,difference;

	printf("Enter two numbers");
	scanf("%f %f",&num1,&num2);

	sum=num1+num2;
	difference=num1-num2;

	printf("sum:%.2f\n",sum);
        printf("difference:%.2f\n",difference);


	return 0;

}

