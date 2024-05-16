// palindrome or not 
#include <stdio.h>
void main() 
{
  int n, a = 0, b, c;
    printf("Enter an integer: ");
    scanf("%d", &n);
    c= n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        b = n % 10;
        a = a * 10 + b;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (c == a)
        printf("%d is a palindrome.", c);
    else
        printf("%d is not a palindrome.", c);
}