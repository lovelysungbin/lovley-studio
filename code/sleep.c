#include <stdio.h>
	
int main()
{
	int num[10] = {10,10,10,10,10,10,10,10,10,10};
	int a;
	int a2;
	int pie;
	int turn = 0;
	int leng = 1;
	int i;
	int k = 10;
	int j=0;
	int same = 0;
	int c;
	int b;
	int zero;
	scanf("%d",&a);
	while(num[9] == 10||j > 10)			
	{
		leng = 1;
		turn++;
		a2 = a*turn;
		while(a2%k != a2)
		{
			k = k*10;
			leng++;
		}
		k = k/10;
		for(i=0;i<leng;i++)
		{
			pie = a2/k;
			for(c=0;c<10;c++)
			{
				if(num[c]==pie) same = 1;
			}
			if(same == 0) 
			{
				num[j]=pie;
				if(pie == 0) num[j] = 0;
				j++;
			}
			a2 = a2-k*pie;
			k = k/10;
			same = 0;
		}
		k=10;
	}
	printf("됬다아아아아아아아아아아아ㅏ아아아아아아아아아아아ㅏ아아아ㅏㅇ\n\n\n결과는..........\n%d번째 %d",turn,a*turn);
		
	return 0;
}

