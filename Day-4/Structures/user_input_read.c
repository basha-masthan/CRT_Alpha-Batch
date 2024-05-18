#include <stdio.h>
void single_entry();
    typedef struct
    {
        char name[20];    
        int roll_num; 
        float gpa;    
    }std;

void test(int n){
    std s2[n];
    for(int i=0;i<n;i++){
        printf("\nEnter %d student Data:\n\n",i+1);
        printf("Enter Student name:");  scanf("%s",&s2[i].name);
        printf("Enter Student Roll_Number:");  scanf("%d",&s2[i].roll_num);
        printf("Enter Student GPA:");  scanf("%f",&s2[i].gpa);

    }
    printf("\n Name\t Roll Number \t GPA\n");
    for(int i=0;i<n;i++)
    {
        printf("%s \t\t %d \t %.2f",s2[i].name,s2[i].roll_num,s2[i].gpa);
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


void single_entry(){
    std s1;
    printf("Enter Student name:");  scanf("%[^\n]",s1.name);
    printf("Enter Student Roll_Number:");  scanf("%d",&s1.roll_num);
    printf("Enter Student GPA:");  scanf("%f",&s1.gpa);

    printf("Student Detailes...\n");
    printf("Name : %s\n",s1.name);
    printf("Roll Number : %d\n",s1.roll_num);
    printf("GPA: %.2f\n",s1.gpa);
}