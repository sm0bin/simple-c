#include<stdio.h>
#include<math.h>

int main()
{
    float a, b,c,d, x1,x2;
    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;

    if(d<0){
        printf("Roots are imaginary\n");
    }
    else{
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are: %.2f and %.2f\n", x1, x2);
    }
    return 0;
}