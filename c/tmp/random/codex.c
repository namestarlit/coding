#include <stdio.h>
#include <math.h>

int main(void) {
    // Read in the coefficients of the quadratic equation
    double a, b, c;
    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    // Calculate the discriminant
    double discriminant = b*b - 4*a*c;

    // Check if the equation has real roots
    if (discriminant < 0) {
        printf("The equation has no real roots.\n");
    } else {
        // Calculate the roots of the equation
        double x1 = (-b + sqrt(discriminant)) / (2*a);
        double x2 = (-b - sqrt(discriminant)) / (2*a);

        // Print the roots of the equation
        printf("The roots of the equation are:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }

    return 0;
}

