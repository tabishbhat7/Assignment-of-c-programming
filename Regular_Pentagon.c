#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main() {

    float side, area, perimeter;
    printf("Enter side length: ");
    scanf("%f", &side);
    
    area = (5.0 / 4.0) * side * side / tan(PI / 5);
    perimeter = 5 * side;
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    
    return 0;
}