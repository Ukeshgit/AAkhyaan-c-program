// #include <stdio.h>
// void main()
// {
//     int a, b, c;
//     printf("Enter any three number\n");
//     scanf("%d%d%d", &a, &b, &c);

//     if (a > b)
//     {
//         if (a > c)
//         {
//             printf("%d is the largest\n", a);
//         }
//         else
//         {
//             printf("%d is the largest\n", c);
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             printf("%d is the largest\n", b);
//         }
//         else
//         {
//             printf("%d is the largest\n", c);
//         }
//     }
    
// }
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    printf("Discriminant = %.2f\n", discriminant);

    if (discriminant > 0) {
        // two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // real and equal roots
        root1 = -b / (2*a);

        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        // imaginary roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);

        printf("Roots are imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
