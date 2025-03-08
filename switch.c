#include <stdio.h>
int main() {
	int day;

	printf("Enter a number(1-7) to get the corresponding day of the week: ");
	scanf("%d",&day);

	switch(day) {
		case 1:
			printf("sunday\n");
			break;
