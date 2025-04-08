#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main() {

    float a, b, area, perimeter;
    printf("Enter semi-major (a) and semi-minor (b) axis: ");
    scanf("%f %f", &a, &b);

    area = PI * a * b;
    perimeter = 2 * PI * sqrt((a*a + b*b)/2); // Approx.
    printf("Area = %.2f\n", area);
    printf("Perimeter ≈ %.2f\n", perimeter);

    return 0;
}
