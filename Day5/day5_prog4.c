// to find the area of two numbers
// step->int main
// step2-> user should input data
// step3->calculate
// step4-> display

#include <stdio.h>
int main()
{
    // variable declare
    int length;
    int breadth;
    int area;

    // step 2
    printf("Enter two dimensions(length and breadth)");
    scanf("%d%d", &length, &breadth);

    // calculate

    area = length * breadth;

    // display
    printf("The area is %d", area);
    return 0;
}

//Task is 
/*
1. to find the area of square
2.to find the perimeter of rectangle
3. to find the perimeter of square
*/