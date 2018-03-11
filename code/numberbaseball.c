#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int in1;
	int in2;
	int in3;
	int st = 0;
	int ball = 0;
	
	printf("숫자를 입력하세요:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	while(st< 3)
	{
		st = 0;
		fflush(stdin);
		printf("맞추세요!!!");
		scanf("%d %d %d",&in1,&in2,&in3);	
		if(num1==in1)
		{
			st++;
		}
		else if(in1==num2||in1==num3)
		{
			ball++;
		}
		if(num2==in2)
		{
			st++;
		}
		else if(in2==num1||in2==num3)
		{
			ball++;
		}
		if(num3==in3)
		{
			st++;
		}
		else if(in3==num1||in3==num2)
		{	
			ball++;
		}
		printf("strike:%d,ball:%d\n",st,ball);
		ball = 0;
		in1 = 0;
		in2 = 0;
		in3 = 0;
	}
	printf("GREAT!");
	
	return 0;
}
