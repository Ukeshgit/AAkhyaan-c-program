// task : to write the program of Hello world

// link section
#include <stdio.h> //-> preprocessor directive will include header file

// global declaration
int a = 10;
int b = 20;
int c = 30;
int d = 40;

// main function
/*
we are going to write our full code in main function
every time,program starts,it executes from the main function
*/

// always remember function contains ()
int main()
{
    printf("Hello world\n"); // this library function will print hello world on the screen
    printf("The value of a is  %d",a);//The value of a is 10
    return 0;
}
