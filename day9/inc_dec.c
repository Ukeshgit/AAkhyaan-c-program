#include<stdio.h>
int main(){
    int a=1,b;
    b=++a + a++ + ++a;
    printf("The vallue of a is %d\n",a);
    printf("The vallue of b is %d\n",b);

    int x=2;
    printf("++x + x++=%d\n",++x +x++);
    printf("%d",x);

}