#include<stdio.h>

    // typedef struct
    // {
    //     char name[20];
    //     int roll_num;
    //     float gpa;
    // }std;

   struct std
    {
        char name[20];
        int roll_num;
        float gpa;
    };
// Passing individual members of a structure as perameters.

void display1(char n[],int r,float m){
    printf("Name : %s\n",n);
    printf("Roll Number : %d\n",r);
    printf("CGPA : %.2f\n",m);
}

// Passing structure Variable as a perameter

void display2(struct std s1){
    printf("Name : %s\n",s1.name);
    printf("Roll Number : %d\n",s1.roll_num);
    printf("CGPA : %.2f\n",s1.gpa);
}

// Passing addres of a strutuer as perameter.

void display3(struct std *s1){
    printf("Name : %s\n",s1->name);
    printf("Roll Number : %d\n",s1->roll_num);
    printf("CGPA : %.2f\n",s1->gpa);
}

void main(){
    struct std s;  
    printf("Enter student details:");   scanf("%s %d %f",&s.name,&s.roll_num,&s.gpa);
    // display1(s.name,s.roll_num,s.gpa);
    // display2(s);
    display3(&s);
}