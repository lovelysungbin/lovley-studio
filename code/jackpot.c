#include <stdio.h>
#include <windows.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int a[3];
	int mo;
	int i;
	int j;
	int k = 1;
	int jack;
	char re = 'Y';
	while(re=='Y'||re=='y')
	{
		printf("【【【【【【【 先凸惟績【 【 【 【 【 【 【 \n\n");
		for(i=0;i<3;i++)
		{
			a[i]=rand()%8 + 1;
			printf("	%3d",a[i]);
		}
		printf("\n杖原杏掘推?? ");
		scanf("%d",&mo);
		for(i=0;i<30;i++)
		{
			system("cls");
			printf("【【【【【【【 先凸惟績【 【 【 【 【 【 【 \n\n");
			for(j=0;j<3;j++)
			{
				a[j]=rand()%8 + 1;
				printf("	%3d",a[j]);
			}
			Sleep(10+k);
			k=k+i;
		}
		if(a[1]==7&&a[2]==7&&a[0]==7)
		{
			printf("\n1000壕!!!!!!!!!!逐馬球験艦陥");
			jack=1000;
		}
		else if(a[0]==a[1]&&a[2]==a[1])
		{
			printf("\n100壕!!!!!!!!!!!側側側");	
			jack=100;
		} 
		else if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0])
		{
			printf("\n10壕脊艦陥 !!!!!!!!!!!!");
			jack=10;
		}
		else
		{
			printf("\n歌脊艦陥ばばばばばば");
			jack=0;	
		} 
		printf("害精儀精  %d据脊艦陥!!!!!!!!!!!",mo*jack);
		printf("\n陥獣 馬獣畏柔艦猿(Y/N)");
		fflush(stdin);
		scanf("%c",&re);
		system("cls");
		k=1;
	}
	printf("設亜獣惟");
	
	return 0;
}
