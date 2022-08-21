#include <stdio.h>

// functions declaration
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);

// main function
int main()
{
	int num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("%d + %d = %d\n", num1, num2, add(num1, num2));
	printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
	printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
	printf("%d / %d = %d\n", num1, num2, divide(num1, num2));
	return 0;
}
// function to add two integer numbers
int add(int n1, int n2)
{
	int result;
	result = n1 + n2;
	return result;
}
// function to subtract two integers
int subtract(int n1, int n2)
{
	int result;
	result = n1 - n2;
	return result;	
}
// function to multiply two integers
int multiply(int n1, int n2)
{
	int result;
	result = n1 * n2;
	return result;
}
// function to divide two integers
int divide(int n1, int n2)
{
	int result;
	result = n1 / n2;
	return result;
}
