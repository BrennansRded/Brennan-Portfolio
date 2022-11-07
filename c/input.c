#include <stdio.h>

int main() {
	char name[30];
	printf("Enter the name of your character: ");
	scanf("%s", &name);
	printf("Your character's name is  %s\n", name);
	printf("Nice to meet you %s! Welcome to the world of C\n");
	return 0;
}
