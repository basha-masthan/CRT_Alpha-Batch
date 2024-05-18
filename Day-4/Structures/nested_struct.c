#include <stdio.h>
void single_entry();
    typedef struct
    {
        int day;int month;int year;
    }dob;
    typedef struct
    {
        char name[20];    
        int roll_num; 
        dob d;    
    }std;

void test(int n){
    std s2[n];
    for(int i=0;i<n;i++){
        printf("\nEnter %d student Data:\n\n",i+1);
        printf("Enter Student name:");  scanf("%s",&s2[i].name);
        printf("Enter Student Roll_Number:");  scanf("%d",&s2[i].roll_num);
        printf("Enter Student DOB(dd/mm/yy):");  scanf("%d %d %d",&s2[i].d.day,&s2[i].d.month,&s2[i].d.year);
    }
    printf("\n Name\t  Roll Number \t DOB\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t\t%d \t %d/%d/%d",s2[i].name,s2[i].roll_num,s2[i].d.day,s2[i].d.month,s2[i].d.year);
        // printf("%d's Student Detailes...\n",i+1);
        // printf("Name : %s\n",s2[i].name);
        // printf("Roll Number : %d\n",s2[i].roll_num);
        // printf("GPA: %.2f\n",s2[i].gpa);
        printf("\n");
    }

}


void main()
{   int n;
    printf("\n\tEnter no of students to enter:"); scanf("%d",&n);
    test(n);
}
