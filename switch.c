#include <stdio.h>
int main() {
	int day;

	printf("Enter a number(1-7) to get the corresponding day of the week: ");
	scanf("%d",&day);

	switch(day) {
		case 1:
			printf("sunday\n");
			break;
		case 2:
			printf("monday\n");
			break;
		case 3:
			printf("tuesday\n");
			break;
			
