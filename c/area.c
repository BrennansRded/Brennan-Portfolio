#include <stdio.h>

int main() {
	int x, y;
	printf("Enter length for rectangle: ");
	scanf("%i", &x);
	printf("Enter width for rectangle: ");
	scanf("%i", &y);
	printf("The area of your rectangle is %i\n", x * y);
	return 0;
}
