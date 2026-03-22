#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double Volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf",&radius);

    area        = PI * pow(radius,2.0);
    surfaceArea = 4 * PI * pow(radius,2.0);
    Volume      = (4.0 / 3.0) * PI * pow(radius,3.0);

    printf("Area: %.2lf", area);
    printf("\nSurface Area: %.2lf", surfaceArea);
    printf("\nVolume: %.2lf",Volume);

    return 0;
}