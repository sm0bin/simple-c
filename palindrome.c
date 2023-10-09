// Write a program to show weather a string is
// palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter a string: ");
    scanf("%s", a);
    strcpy(b,a); //copying a to b
    strrev(b); //reversing the string b
    if(strcmp(a,b)==0){ //comparing the strings
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }

}