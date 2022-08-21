#include <stdio.h>
int main()
{
	//input 7---> prime number
	int n,count=0,i;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	printf("Prime Number");
	else
	printf("Not a Prime Number");
	
	return 0;
}
