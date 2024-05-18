#include<stdio.h>
#define N 50
    struct std
    {
        char name[20];
        int roll_num;
        float gpa;
    };                                                                                                                                                                                                                         

// void remove(struct std);

// void remove1(struct std s,int n,int pos){
//     printf("\nTrying to remove %d position element\n");

// }

void main(){
    struct std s;
    
}


























// void main()
// {

//     int n,i;
//     printf("\n\tEnter no of students to enter:"); scanf("%d",&n);
//     struct std s[n];
//     // printf("Enter %d's Student detailes:",i+1);
//     for (i = 0; i < n; i++)  
//     {   printf("Enter %d details:\n",i+1);  scanf ("%s %d %f",&s[i].name,&s[i].roll_num,&s[i].gpa);   }          
//     while(1){
//         int pos,c;
//         printf("\n\tChoose operation to perfom....\n 1.update The value\n 2.delete  the value\n 3.Add new value\n 4.Add element at perticular position \n\t Select an option: ");
//         scanf("%d",&c);
//         switch(c){
//             case 1: printf("\n Enter Position of element to delete:");
//                     scanf("%d",&pos);
//                     // remove1(s,n,pos);
                    
//                     if(pos>=0 && pos<n){
//                         for(i=pos;i<n-1;i++){
//                             s[i].name<=s[i+1].name;
//                             s[i].roll_num<=s[i+1].roll_num;
//                             s[i].gpa<=s[i+1].gpa;
//                         }
//                     }
//                     else{
//                         printf("\nDeletion not possible at this Condition | Try again..\n");
//                     }


//                     break;
//             case 3: printf("Enter new Student details:\n");  
//                     scanf("%s %d %f",&s[n].name,&s[n].roll_num,&s[n].gpa);
//                     ++n;
//                     break;
//             case 9: printf("\n Name \t   Roll_Number \t Percentage\n");
//                     for(i=0;i<n;i++){
//                        printf("%s\t\t %d \t %.2f\n",s[i].name,s[i].roll_num,s[i].gpa);
//                     }     
//                     break;     


//             default: printf("\nEnter a valid option.....");
//         }
//     }
// }


