#include <stdio.h>

int main() {

	float a, b, c, height, area, perimeter;
	printf("Enter base and height: ");
	scanf("%f %f", &a, &height);
	printf("Enter other two sides: ");
	scanf("%f %f", &b, &c);

	area = 0.5 * a * height;
	perimeter = a + b + c;

	printf("Area = %.2f\n", area);
	printf("Perimeter = %.2f\n", perimeter);

	return 0;
}
