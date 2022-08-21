# include<stdio.h>
# include<string.h>
int main()
{
	char name[10][20];
	int i,j,temp;
	for(i=0;i<9;i++)
	{
		gets(name[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=j+1;j<10;j++)
		{
			if(strcmp(name[i],name[j]>0))
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
				
			}
		}
	}
	for(i=0;i<10;i++)
	{
		puts(name[i])
	}
	return 0;
}

