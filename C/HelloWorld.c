#include <stdio.h>
int main() 
{
  int a, b, diff, product,quotient,remainder;
  printf("Enter a: ");
  // &: scanf function to read the value from input, scanf store to the address value of a, then point to a address when receive the input and pass the value to a
  scanf("%d",&a);

  printf("Enter b: ");
  scanf("%d",&b);

// Pass operation as an argument
  printf("a+b = %d\n", a+b);

  diff = a-b;
  printf("a-b = %d\n", diff);

  product = a*b;
  printf("a*b = %d\n", product);

  quotient = a/b;
  printf("a/b= %d\n", quotient);

  remainder = a%b;
  printf("a%%b = %d", remainder);
  return 0;
}
