#include <stdio.h>
int main()
{
	int height;
	int base;
	float s;
	int choose = 'y';
	while(choose == 'y' || choose == 'Y')
	{	
		printf("���̸� �Է��ϼ���.");
		scanf("%d",&height);
		printf("�غ��� ���̸� �Է��ϼ���");
		scanf("%d",&base);
		s = (float)(height*base)/2;
		printf("���̴� %.1f�Դϴ�. \n�� �ұ��...?",s);
		fflush(stdin);
		scanf("%c",&choose);
	}
	printf("�˰��� >.<");		 
	return 0;
} 
