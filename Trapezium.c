#include <stdio.h>

int main() {
    
    float a, b, h, s1, s2, area, perimeter;
    printf("Enter parallel sides (a and b) and height: ");
    scanf("%f %f %f", &a, &b, &h);
    printf("Enter other two sides: ");
    scanf("%f %f", &s1, &s2);

    area = 0.5 * (a + b) * h;
    perimeter = a + b + s1 + s2;
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
