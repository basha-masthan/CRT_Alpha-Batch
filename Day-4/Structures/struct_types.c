#include <stdio.h>


void m1(){
     struct std
    {
        char name[20];    
        int roll_num; 
        float gpa;    
    };
    struct std s1={"Basha",596,75.2};
    
    printf("Student Detailes...\n");
    printf("Name : %s\n",s1.name);
    printf("Roll Number : %d\n",s1.roll_num);
    printf("GPA: %.2f\n",s1.gpa);
}

void m2()
{
     struct std
    {
        char name[20];    
        int roll_num; 
        float gpa;    
    }s1={"Basha",596,75.2};
    
    printf("Student Detailes...\n");
    printf("Name : %s\n",s1.name);
    printf("Roll Number : %d\n",s1.roll_num);
    printf("GPA: %.2f\n",s1.gpa);
}

// void m3()
// {
//     struct
//     {
//         char name[20];    
//         int roll_num; 
//         float gpa;    
//     };
//     struct std s1={"Basha",596,75.2};
    
//     printf("Student Detailes...\n");
//     printf("Name : %s\n",s1.name);
//     printf("Roll Number : %d\n",s1.roll_num);
//     printf("GPA: %.2f\n",s1.gpa);
// }

 typedef struct
    {
        char name[20];    
        int roll_num; 
        float gpa;    
    }std;
void m4()
{
    std s1={"Basha",596,75.2};
   
    
    printf("Student Detailes...\n");
    printf("Name : %s\n",s1.name);
    printf("Roll Number : %d\n",s1.roll_num);
    printf("GPA: %.2f\n",s1.gpa);
}

void main()
{
    printf("\n\t Working on Structures in C .... \n\n");
    printf("\n\tMethod 1\n");
    m1();
    printf("\n\tMethod 2\n");
    m2();
    // printf("Method 3\n");
    // m3();
    printf("\n\tMethod 4\n");
    m4();
    printf("\n\n");

}


