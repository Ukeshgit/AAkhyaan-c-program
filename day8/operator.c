#include <stdio.h>
int main()
{
    // // unary operator
    // int a = 5;
    // printf("%d\t", a++); // a=a+1

    // // binary operator
    // int a1 = 5;
    // int b = 5;
    // printf("%d\t", a1 + b);

    // // ternary operator
    // int a2 = 10;
    // int b2 = 6;
    // char c = a2 > b2 
    // ? 'a' : 'b';
    // printf("%c", c);
    int a=5;
    int b=2;
    float c=2.3;


    //arithmetic operator
    printf("%d\t",a+b);//10
    printf("%d\t",a-b);//0
    printf("%d\t",a*b);//25
    printf("%d\t",a/b);//1
    printf("%d\n",a%b);//0

    //Division rule in arithmetic operator
    printf("%d\n",a/b);
    printf("%f\n",a/c);

    //addition rule in arithmetic operator
    printf("%f\n",a+c);

    //Relational operator
     printf("%d\t",a>b);//5>2=1
    printf("%d\t",a<b);//0
    printf("%d\t",a>=b);//1
    printf("%d\t",a<=b);//0
    printf("%d\n",a==b);//0
    printf("%d\n",a!=b);//1

    //logical operator
    int l=10;
    int m=12;
    int n=12;
    int o=13;

    int p;
   p= (l<m)&&(n>o);//1 && 0
   int q=(l!=m)||(n==o);//1 || 0
   printf("%d",q);


}