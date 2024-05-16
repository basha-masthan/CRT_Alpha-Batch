#include <stdio.h>

void main()
{
    int ch,n,type;
    float cost,gst,ic;
    printf("\t\t Select Bus Type\n 1.RTC Bus - 250/-\n 2.Sleeper - 350/-\n 3.AC Sleeper - 400/-\n 4.AC Super Delux - 650/- \n Select a Bus Type:");
    scanf("%d",&type);
    printf("Enter No of tickets:");
    scanf("%d",&n);
    printf("Enter Set preference (Lower:0/Upper:1):");
    scanf("%d",&ch);
    switch (type)
    {
    case 1: printf("You selected RTC Bus...\n");
            if(ch==1)
                cost=250*n+n*10;
            else
                cost=250*n+n*10;
            break;
    case 2: printf("You selected Sleeper Bus...\n");
            if(ch==1)
                cost=350*n+n*10;
            else
                cost=350*n+n*10;
            break;
    case 3: printf("You selected AC Sleeper Bus...\n");
            if(ch==1)
                cost=400*n+n*10;
            else
                cost=400*n+n*10;
            break;
    case 4: printf("You selected AC Super Delux Bus...\n3");
            if(ch==1)
                cost=650*n+n*10;
            else
                cost=650*n+n*10;
            break;
    default:printf("In corret selection");
        break;
    }
    gst = cost * 0.05;
    ic=cost*0.02;
    cost = cost+gst+ic;
    printf("GST Charges : %.2f \n",gst);
    printf("IC Cgarges : %.2f \n",ic);
    if (ch==0)
        printf("Total Cost :%.2f\t ('You spent %d for selecting lower seat') \n",cost,n*10);
    else
         if (ch==0)
        printf("Total Cost :%.2f\t ('You saved %d for selecting Upper seat') \n",cost,n*10);
}