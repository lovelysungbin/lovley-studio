#include <stdio.h>

int main()
{
	int a[9];
	int j;
	int i;
	int k;
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(k=0;k<9;k++)
	{
		for(i=0;i<9;i++)
		{
			if(a[i]>a[i+1])
			{
				j=a[i];
				a[i]=a[i+1];
				a[i+1]=j;	
			}
		}
		i--;
	}
	for(i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
	
	return 0;
}
