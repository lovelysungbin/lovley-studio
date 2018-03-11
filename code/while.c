#include <stdio.h>
int main()
{
	int height;
	int base;
	float s;
	int choose = 'y';
	while(choose == 'y' || choose == 'Y')
	{	
		printf("높이를 입력하세요.");
		scanf("%d",&height);
		printf("밑변의 길이를 입력하세요");
		scanf("%d",&base);
		s = (float)(height*base)/2;
		printf("넓이는 %.1f입니다. \n또 할까용...?",s);
		fflush(stdin);
		scanf("%c",&choose);
	}
	printf("알겠쭁 >.<");		 
	return 0;
} 
