#include <stdio.h>
#include <string.h>
int main()
{

	int A[5]={0};
	int i;
	int a=0;
	char chan[20];
	int num;
	fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",&chan); 
		while(!((strcmp(chan,"gold")==0||strcmp(chan,"mana")==0||strcmp(chan,"light")==0||strcmp(chan,"nature")==0||strcmp(chan,"dark")==0)))
		{
			printf("´Ù½ÃÀÔ·Â"); 
			fflush(stdin); 
			scanf("%s",&chan); 
		}
			if(strcmp(chan,"gold")==0)
			{
				A[1]++;
			}
			else if(strcmp(chan,"mana")==0)
			{
				A[2]++;
			}
			else if(strcmp(chan,"light")==0)
			{
				A[3]++;
			}
			else if(strcmp(chan,"nature")==0)
			{
				A[4]++;
			}
			else if(strcmp(chan,"dark")==0)
			{
				A[5]++;
			}
		
		chan[20]= "¾Ó±â¸ð¶ì";
		
	}
	if(num>=1&&num<=12)
	{
		for(i=0;i<5;i++)
		{
			if(A[i]>0)
			{
				a++;
			}
		}
	}
	else
	{
		printf("invalid");
	}
	if(a>3)
	{
		printf("invalid");
	}
	else
	{
		printf("valid");
	}
	return 0;
}
