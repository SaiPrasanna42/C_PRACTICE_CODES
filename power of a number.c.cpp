//Program to calculate power of a number using loop

#include <math.h>
#include <stdio.h>

int main() {
  int number, exp, result;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("Enter exponent: ");
  scanf("%d", &exp);

  // Calculating power using pow() function
  result = pow(number, exp);

  //displaying result
  printf("%d to the power %d is: %d", number, exp, result);
  return 0;
}
