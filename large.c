#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Largest value is: ");
    if(a>b && a>c){
        printf("%d\n", a);
    }else if(b>c){
        printf("%d\n", b);
    }else{
        printf("%d\n", c);
    }
    return 0;
}