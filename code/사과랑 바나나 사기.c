#include <stdio.h>

int main()
{
	int ba = 1000;
	int ap = 500;
	int ba_num;
	int ap_num;
	int change;
	int pay;
	int sum_price;
	int check;	
	char choose = 'Y';
	printf("��� � ���?");
	scanf("%d",&ap_num);
	printf("\n�ٳ�����?");
	scanf("%d",&ba_num);
    sum_price = ba*ba_num+ap*ap_num;
    printf("%d���Դϴ�.\n�󸶸� ���ðڽ��ϱ�?",sum_price);
    scanf("%d",&pay);  	
	while(choose == 'Y' || choose == 'y' && pay<sum_price)
    {
    	printf("���� �����մϴ�.\n���� �Ͻðڽ��ϱ�(Y/N)?");
    	fflush(stdin);
    	scanf("%c",&choose);
    	if(choose == 'Y' || choose == 'y')
    	{
    		printf("�󸶸� ���ðڽ��ϱ�?");
    		scanf("%d",&pay);
    	}
    }
    if(choose=='N'|| choose =='n')
    {
    	printf("�����մϴ�.");
    }
    else
    {
    	change = pay-sum_price; 
    printf("�����մϴ�.�Ž������� %d�� �Դϴ�.",change);
    }

    
	return 0;	
}

