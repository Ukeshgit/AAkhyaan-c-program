// program find ratio of two numbers taken in int and convert it to float
#include<stdio.h>
int main(){
    int a,b;
   float c;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    c=(float) a/b;
    printf("The explicit type conversion of c is %f",c);

}

