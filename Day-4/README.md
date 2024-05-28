    ================================================== STRUCTURES==================================================================
 *Structure is a collection of elements of different data types.
Syntax:
          struct <tag-name>
          {
          datatype1      member1;
          datatype2      member2;
                    .
                    .
                    .
         };
Example:                                                                                       
struct student
  {
          char name[20];
          int roll number;
         float marks;
   };
-------------------------------------------------------------------------------------------------------------
Structure variable declaration:
method 1:                                                                            s1- name--------->20 bytes
struct student                                                                            roll no--------->4 bytes    
  {                                                                                                   marks---------->4 bytes
          char name[20];                                                                                       ------------------
          int roll number;                                                                                       28 bytes
          float marks;                                                                                              ------------------
   };
struct student s1={"Afreen",222U5A0511,8.0};
-----------------------
method 2: along with structure defination.
struct student
  {
          char name[20];
          int roll number;
         float marks;
   }s1={"Afreen",222U5A0511,8.0};
---------------------
method 3: defining structure without name.
struct 
  {
          char name[20];
          int roll number;
         float marks;
   };
struct student s1={"Afreen",222U5A0511,8.0};
-----------
method 4:
 typedef struct 
  {
          char name[20];
          int roll number;
         float marks;
   }student;
 student s1={"Afreen",222U5A0511,8.0};
--------------------------------------------------
method 1 example:
#include<stdio.h>
void main()
{
    struct student
    {
        char name[30];
        int rollno;
        float marks;
    };
    struct student s1={"Afreen",123456,80.00};
    printf("student details:\n");
    printf("Name: %s \n",s1.name);
    printf("rolno: %d \n",s1.rollno);
    printf("rollno: %2f \n",s1.marks);
}
-------------------------------------------------------------
method-2 Example:
#include<stdio.h>
void main()
{
    struct student
    {
        char name[30];
        int rollno;
        float marks;
    } s1={"Afreen",123456,80.00};
    printf("student details:\n");
    printf("Name: %s \n",s1.name);
    printf("rolno: %d \n",s1.rollno);
    printf("rollno: %2f \n",s1.marks);
}
---------------------------------------------------------------------
method -3 Example:
----------------------------------------------------------------
method-4 Example:
#include<stdio.h>
void main()
{
    typedef struct
    {
        char name[30];
        int rollno;
        float marks;
    }student;
    student s1={"Afreen",123456,80.00};
    printf("student details:\n");
    printf("Name: %s \n",s1.name);
    printf("rolno: %d \n",s1.rollno);
    printf("rollno: %2f \n",s1.marks);
}
-----------------------------------------------------------------------------------
//READING VALUES FROM USER INPUT
#include<stdio.h>
typedef struct
{
    char name[30];
    int rollno;
    float marks;
}student;
void main()
{
    student s1;
    printf("Enter student name:");
    scanf("%[^\n]",s1.name);
    printf("Enter student rollno:");
    scanf("%d",&s1.rollno);
    printf("Enter student marks:");
    scanf("%f",&s1.marks);
    
    printf("student details:\n");
    printf("Name: %s \n",s1.name);
    printf("rolno: %d \n",s1.rollno);
    printf("marks: %f \n",s1.marks);
}
------------------------------------------------------------------------------------------------------------------------------
=============================ARRAY OF STRUCTURES=========================
DEFININATION:  collections structure variables belongs to same structure.
  SYNTAX:
           struct student
           {
                  char name[20];
                  int rollno;
                  float marks;

          };
           struct student s[10];
---------------------------------------------------------
EXAMPLE  PROGRAM:
 
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
void main()
{
int n,i;
printf("Enter no of students:");
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
{
    printf("Enter student %d details:",i+1);
    scanf("%s %d %f",s[i].name,&s[i].rollno,&s[i].marks);
}
printf("\n college student details:\n");
for(i=0;i<n;i++)
{
    printf("Name:%s \t",s[i].name);
    printf("rollno:%d \t",s[i].rollno);
    printf("marks:%.2f \n",s[i].marks);
}
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
====================================NESTED STRUCTURE============================================
*Defining a structure within another structure.
Ex:
 typedef struct
{
int date;
int month;
int year;
}DOB;
typedef sruct
{
charname[20];
int rollno;
float marks;
DOB d;
}Student;
Student s1;                                                                                    *Note: accessing nested structure members....
s1.d.date ------------------------------------------------------------> *syntax  for this ----> outer_struct_var.inner_struct_var.inner_struct_member;

*we can't access a one typedef val into another typedef val.
---------------------------------------------
EXAMPLE PROGRAM
#include<stdio.h>
 typedef struct
{
  int date;
  int month;
  int year;
}DOB;
typedef struct
{
char name[20];
int rollno;
float marks;
 DOB d;
}student;
void main()
{
int n,i;
printf("Enter no of students:");
scanf("%d",&n);
student s[n];
for(i=0;i<n;i++)
{
    printf("Enter student %d details:",i+1);
    scanf("%s %d %f",s[i].name,&s[i].rollno,&s[i].marks);
    scanf("%d %d %d",&s[i].d.date,&s[i].d.month,&s[i].d.year);
}
printf("All student details are:\n");
for(i=0;i<n;i++)
{
    printf("%s \t",s[i].name);
    printf("%d \t",s[i].rollno);
    printf("%.2f \n",s[i].marks);
    printf("%d/ %d /%d \n",s[i].d.date,s[i].d.month,s[i].d.year);
}
}
-------------------------------------------------------------------------------------------------------------------------------
 =============================FUNCTIONS IN STRUCTURE=============================
//PARAMETER PASSING METHODS IN STRUCTURES USING FUNCTIONS
1)passing individual members of structures as parameters.
2)passing structure variable as a parameter.
3)passing address of a structure variable as parameter.
---------------------------------------------------------------------------------------------
//METHOD 1
#include<stdio.h>
typedef struct
{
    char name[20];
    int rollno;
    float marks;
}student;
void display(char n[],int r,float m);
void main()
{
    student s;
    printf("Enter student details:");
    scanf("%s%d%f",s.name,&s.rollno,&s.marks);
    display(s.name,s.rollno,s.marks);
}
void display(char n[],int r,float m)
{
    printf("Name:%s \n",n);
    printf("rollno:%d \n",r);
    printf("Marks:%.2f \n",m);
}
-----------------------------------------------------------------------------------------------------------
//PASSING VARIABLE STRUCTURE OF A PARAMETER
#include<stdio.h>
 struct student
{
    char name[20];
    int rollno;
    float marks;
};
void display(struct student std);
void main()
{
    struct student s1;
    printf("Enter student details:");
    scanf("%s%d%f",s1.name,&s1.rollno,&s1.marks);
    display(s1);
}
void display(struct student std)
{
    printf("Name:%s \n",std.name);
    printf("rollno:%d \n",std.rollno);
    printf("Marks:%.2f \n",std.marks);
}
------------------------------------------------------------------------------------------------------------------
//PASSING ADDRESS OF A STRUCTURE VARIABLE OF A PARAMETER
#include<stdio.h>
 struct student
{
    char name[20];
    int rollno;
    float marks;
};
void display(struct student *std);
void main()
{
    struct student s1;
    printf("Enter student details:");
    scanf("%s%d%f",s1.name,&s1.rollno,&s1.marks);
    display(&s1);
}
void display(struct student *std)
{
    printf("Name:%s \n",std->name);
    printf("rollno:%d \n",std->rollno);
    printf("Marks:%.2f \n",std->marks);
}
-------------------------------------------------------------------------------------------------------------------------------
=============================ENUMARATION=========================================
*serias of integer constants
enumarations:syntax------->
 'enum
  enum <tag_name>
  {
  var1,var2,var2,..........
  };
------------------------
EXAMPLE:-
enum today
{
sun,mon,tue,wed,thu,fri,sat
};
------------------------------
EXAMPLE PROGRAM
#include<stdio.h>
enum today
{
faziha,saniya,habeeba=20,shaista,najma=999,habibu,afreen
};
void main()
{
enum today frd1,frd2,frd3;
frd1=faziha;
frd2=shaista;
frd3=habibu;
printf("%d \n",frd1);
printf("%d \n",frd2);
printf("%d \n",frd3);
}
-------------------------------------------------------------------------------------------
==================UNIONS===============================
Unions: 
syntax:-
  union student
{
              char name[20];
               int rollno;
               float marks;
};
--------------------------------------
//Example program
#include<stdio.h>
#include<string.h>
union student
{
    char name[20];
    int rollno;
    float marks;
};
void main()
{
    union student s1;
    strcpy(s1.name,"Afreen");
    printf("Name: %s \n",s1.name);
    s1.rollno=25;
    printf("rollno: %d \n",s1.rollno);
    s1.marks=95;
    printf("marks:%.2f\n",s1.marks);
}

