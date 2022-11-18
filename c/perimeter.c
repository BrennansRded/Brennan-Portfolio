#include <stdio.h>

int main() {
	int x, y;
	printf("Enter length for perimeter: ");
	scanf("%i", &x);
	printf("Enter width for perimeter: ");
	scanf("%i", &y);
	printf("The perimeter of your rectangle is %i\n", x + y + x + y);
	return 0;
}
