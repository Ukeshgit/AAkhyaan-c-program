#include <stdio.h>
#include <conio.h>
int main()
{
    char ch1, ch2, ch3;
    char name;
    // printf("Enter any character\n");
    // // getchar
    // ch2 = getch(); // unformatted->enter hannu pardaina/echo pani hudaina
    // printf("Enter next character\n");

    // ch3 = getche(); // unformatted->enter hannu pardaina/echo hunxa
    // printf("Enter next character");
    // ch1 = getchar(); // unformatted->enter pani hannu parx ra echo pani hunxa

    // ch3=getchar();//unformatted
    printf("please enter your name");
    gets(name);

    printf("The character is  %s",name);
}