//C Program to Print Floyd’s Triangle

#include <stdio.h>
 
int main() 
{
  int Rows, i,  j, Number = 1;
 
  printf(" Please Enter the Number of Rows:  ");
  scanf("%d", &Rows);
     
  printf(" \n Printing FLOYD'S Triangle \n \n");
  for ( i = 1 ; i <= Rows; i++ ) 
    {
    for ( j = 1 ; j <= i; j++ ) 
         {
       printf("%d ", Number);
       Number++;
     }
    printf("\n");
     }
  return 0;
}

