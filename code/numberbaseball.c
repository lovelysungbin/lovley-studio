#include <stdio,h>
#include <time.h>

int main()
{
	int i;
	int k;
	int num[3];
	int in[3];
	int turn = 1;
	int ball=0;
	int st=0;
	int out=3;
	srand((unsigned)time(NULL));
	while(num[0]==num[1]||num[0]==num[3]||num[2]==num[3])
	{	
		for(i=0;i<3;i++)
		{
		num[i]=rand() % 10;
		}
	}
	printf("½ÃÀÛ!!!!!");
	while()
	{
		scanf("%d %d %d",&in[1],&in[2],&in[3]);
		for(i=0;i<3;i++)
		{
			for(k=0;k<3;k++)
			{
				if(in[i]==num[k])
				{
					if(in[i]==num[i])
					{
						st++;
					}
					else
					{
						ball++
					}
				}
			}
		}
		printf("turn%d st:")
	} 
	
	return 0;
}
