// to find sum of two numbers but input should be taken from the users

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter two numbers that you want to add");

    scanf("%d%d", &a,&b); // ampersand
    
    // calculate

    c = a + b;
    printf("The sum of two numbers is %d", c);
    return 0;
}
