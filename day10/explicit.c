//program to find ratio of two numbers taken in int and convert it to float
// #include<stdio.h>
// int main(){
//     int a,b;
//    float c;
//     printf("Enter any two numbers\n");
//     scanf("%d%d",&a,&b);
//     c=(float) a/b;
//     printf("The explicit type conversion of c is %f",c);

// }
// #include <stdio.h>

// int main() {
//     int num;          // for %3d (field width)
//     char symbol;      // for %c
//     char word[10];    // for %5s (field width)

//     printf("Enter input in this format: 123 - A Hello\n");
//     printf("Note:\n");
//     printf("123 = 3-digit number\n");
//     printf("-   = ordinary character\n");
//     printf("A   = single character\n");
//     printf("Hello = word (max 5 letters)\n\n");

//     printf("Enter your input: ");

//     scanf("%3d - %c %5s", &num, &symbol, word);

//     printf("\n--- OUTPUT ---\n");
//     printf("Number (%%3d)      = %d\n", num);
//     printf("Character (%%c)    = %c\n", symbol);
//     printf("Word (%%5s)        = %s\n", word);

//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>

// int main() {
//     char a, b, c,d;

//     printf("Press a key for getchar: ");
//     a = getchar();  // requires Enter
//     getchar();      // consumes Enter

//     printf("\nPress a key for getch: ");
//     b = getch();    // no echo

//     printf("\nPress a key for getche: ");
//     c = getche();   // echoes
//     gets(d);
//     puts(d);

//     printf("\n\na = %c\nb = %c\nc = %c", a, b, c);
    

//     return 0;
// }
// getchar() → standard, needs Enter, shows character

// getch() → no Enter, does NOT show

// getche() → no Enter, shows character
#include <stdio.h>

int main() {
    char name[5];

    printf("Enter your name: ");
    gets(name);      // takes input including spaces

    printf("You entered: ");
    puts(name);

    return 0;
}
