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
		printf("★★★★★★★ 잭팟게임★ ★ ★ ★ ★ ★ ★ \n\n");
		for(i=0;i<3;i++)
		{
			a[i]=rand()%8 + 1;
			printf("	%3d",a[i]);
		}
		printf("\n얼마걸래요?? ");
		scanf("%d",&mo);
		for(i=0;i<30;i++)
		{
			system("cls");
			printf("★★★★★★★ 잭팟게임★ ★ ★ ★ ★ ★ ★ \n\n");
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
			printf("\n1000배!!!!!!!!!!축하드립니다");
			jack=1000;
		}
		else if(a[0]==a[1]&&a[2]==a[1])
		{
			printf("\n100배!!!!!!!!!!!짝짝짝");	
			jack=100;
		} 
		else if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0])
		{
			printf("\n10배입니다 !!!!!!!!!!!!");
			jack=10;
		}
		else
		{
			printf("\n꽝입니다ㅠㅠㅠㅠㅠㅠ");
			jack=0;	
		} 
		printf("남은돈은  %d원입니다!!!!!!!!!!!",mo*jack);
		printf("\n다시 하시겠습니까(Y/N)");
		fflush(stdin);
		scanf("%c",&re);
		system("cls");
		k=1;
	}
	printf("잘가시게");
	
	return 0;
}
