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
	printf("사과 몇개 살거?");
	scanf("%d",&ap_num);
	printf("\n바나나는?");
	scanf("%d",&ba_num);
    sum_price = ba*ba_num+ap*ap_num;
    printf("%d원입니다.\n얼마를 내시겠습니까?",sum_price);
    scanf("%d",&pay);  	
	while(choose == 'Y' || choose == 'y' && pay<sum_price)
    {
    	printf("돈이 부족합니다.\n구매 하시겠습니까(Y/N)?");
    	fflush(stdin);
    	scanf("%c",&choose);
    	if(choose == 'Y' || choose == 'y')
    	{
    		printf("얼마를 내시겠습니까?");
    		scanf("%d",&pay);
    	}
    }
    if(choose=='N'|| choose =='n')
    {
    	printf("감사합니다.");
    }
    else
    {
    	change = pay-sum_price; 
    printf("감사합니다.거스름돈은 %d원 입니다.",change);
    }

    
	return 0;	
}

