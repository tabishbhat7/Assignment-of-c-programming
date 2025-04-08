#include <stdio.h>

int main() {

    float base, height, side, area, perimeter;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    printf("Enter side length: ");
    scanf("%f", &side);

    area = base * height;
    perimeter = 2 * (base + side);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
