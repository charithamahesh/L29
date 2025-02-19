#include <stdio.h>

int main() {
	float num1,num2,sum,difference,product;

	printf("Enter two numbers");
	scanf("%f %f",&num1,&num2);

	sum=num1+num2;
	difference=num1-num2;
        product=num1*num2

	printf("sum:%.2f\n",sum);
        printf("difference:%.2f\n",difference);
	printf("product:%.2f\n",product);


	return 0;

}

