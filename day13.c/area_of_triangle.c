#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c;
    float semi,area;
    printf("Enter the three sides of traingle\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c &&(b+c)>a && (a+c)>b ){
        //body
             semi=(a+b+c)/2;
             area= sqrt(semi*(semi-a)*(semi-b)*(semi-c));
             printf("The area of %f,%f and %f is %.2f",a,b,c,area);

    }else{
        printf("Triangle cannot be formed\n");
    }
}