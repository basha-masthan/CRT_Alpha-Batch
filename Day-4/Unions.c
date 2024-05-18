#include <stdio.h>
#include <string.h>

union std
{
    char name[20];
    int roll;
    float gpa;
};

void main(){
    union std s1;
    strcpy(s1.name,"Basha");
    printf("Name:%s\n",s1.name);
    s1.roll=596;
    printf("Roll Number:%d\n",s1.roll);
    s1.gpa=75.165;
    printf("CGPA :%.2f",s1.gpa);
}