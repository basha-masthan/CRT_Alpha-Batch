#include<stdio.h>

void main()
{
	int amount,f,t,h;
	printf("Enter amount to Withdraw:");
	scanf("%d",&amount);
	if (amount%100 == 0){
		if(amount >=500){
			f=amount/500;
			amount=amount%500;
			printf("500 notes are:%d",f);
		}
		if(amount >=200){
			t=amount/200;
			amount=amount%200;
			printf("200 notes are:%d",t);
		}
		if(amount >=100){
			h=amount/100;
			amount=amount%100;
			printf("100 notes are:%d",h);
		}
	}
	else
		printf("Enter Multiples of 100's only...");
}