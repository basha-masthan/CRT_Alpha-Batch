//Train Tickets

#include<stdio.h>

void main(){
	int ch,n;
	float cost,gst,ic;
	printf("choose Train tickets...\n");
	printf("1. Sleeper - 300\n2. 3 - tier AC -500\n3. 2 - tier AC - 750\n4. 1 - tier AC - 1000\n Enter Your choice:");
	scanf("%d",&ch);
	printf("Enter No of Seets:");
	scanf("%d",&n);
	switch(ch){
		case 1: printf("You selected Sleeper class Ticket's:");
				cost = n * 300;
				break;
		case 2: printf("You selected 3-Tier AC Ticket's:");
				cost = n * 500;
				break;
		case 3: printf("You selected 2-Tier AC Ticket's:");
				cost = n * 750;
				break;
		case 4: printf("You selected 1-Tier Ac Ticket's:");
				cost = n * 1000;
				break;
		default:printf("Select a valid chooice.....");
	}

	gst = cost*0.08;
	ic = cost*0.02;
	cost = cost+gst+ic;
	printf("GST Charges:%.2f\n",gst);
	printf("Internet Charges Charges:%.2f\n",ic);
	printf("Total Cost:%.2f",cost);
}