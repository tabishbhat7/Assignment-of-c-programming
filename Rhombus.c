#include <stdio.h>

int main() {

    float d1, d2, side, area, perimeter;
    printf("Enter diagonals (d1 and d2): ");
    scanf("%f %f", &d1, &d2);
    printf("Enter side: ");
    scanf("%f", &side);

    area = (d1 * d2) / 2;
    perimeter = 4 * side;
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    
    return 0;
}
