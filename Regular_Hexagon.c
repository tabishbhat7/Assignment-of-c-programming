#include <stdio.h>
#include <math.h>

int main() {

    float side, area, perimeter;
    printf("Enter side length: ");
    scanf("%f", &side);
    
    area = (3 * sqrt(3) / 2) * side * side;
    perimeter = 6 * side;
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    
    return 0;
}
