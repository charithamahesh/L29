#include <stdio.h>
int main () {
	int choice;

	printf("select a B.tech branch:\n");
	printf("1.Computer science and Engineering\n");
        printf("2.Artificial Intelligance\n");
	printf("3.Electronics and Communication Engineering\n");

	scanf("%d",&choice);

	switch {
case1:
		printf("you selected Computer Science and Engineering.\n");
		break;
case2:
		printf("you selected Artificial Intelligance.\n");
		break;
case3:
		printf("you selected Electronics and Communication engineering.\n");
		break;
		default:
		printf("invalid choice! please select a number between 1 and 4.\n");
	}

	return 0;
}
