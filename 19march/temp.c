#include <stdio.h>
int main(){
	float fahrenheit, celsius;
	printf("enter temparature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("temparature in celsius is %.2f\n", celsius);
	return 0;
}
