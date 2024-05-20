#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

typedef struct node NODE;
NODE *head=NULL;
void Creation(){
    int i,n,val;
    NODE *newnode,*temp;
    newnode = (NODE *)malloc(sizeof(NODE));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&val);
        newnode->data=val;
        newnode->link = NULL;
        if(head == NULL)
        {   head=newnode; }
        else{
            temp = head;
            while(temp->link != NULL){
                temp=temp->link;
            }
            temp->link=newnode;
        }
    }
}

void Traversal()
{
    NODE *temp;

    if(head==NULL)
    {     printf("List is empty"); return; }
    else
    {
       temp=head;
       while(temp!=NULL)
       {
        printf("%d",temp->data);
        temp=temp->link;
       }
       printf("NULL");
    }
}

void insert_at_begin(){
    NODE *newnode,*temp;
    newnode = (NODE *)malloc(sizeof(NODE));

    printf("Enter data:");
    scanf("%d",newnode->data);
    newnode->link = NULL;
    if(head == NULL)
        head = newnode;

    else{
        newnode->link=head;
        head=newnode;
    }   
    temp->link=newnode;
}

void Insertion(){
    NODE *newnode,*temp;
    newnode = (NODE *)malloc(sizeof(NODE));

    // printf("");
    scanf("%d",newnode->data);
    newnode->link = NULL;
    if(head == NULL)
        head = newnode;

    else{
        temp = head;
        while(temp->link!=NULL){
            temp = temp->link;
        }   
    temp->link=newnode;
    }
}

// void delete_at_first(int head){
//     NODE *temp;
    
//     if(head==NULL){
//         printf("LIst is empty.");
//     }
//     else{
//         temp = head;
//         head=head->link;
//         free(temp);
//     }
// }

void Deletion(){
    NODE *temp,*pre;
    
    if(head==NULL){
        printf("LIst is empty");
    }
    else{
        temp = head;
        pre = head;
        while(temp->link!=NULL){
            pre = temp;
            temp = temp->link;
        }
        pre->link = NULL;
    }
}


void mian(){
    int c,n;
    while(1){
        printf("\n\n\t Main Menu \n 0.Creation \n 1.Insertion \n 2.Deletion \n 3.Display \n 4.exit\n");
        scanf("%d",&c);
        switch(c){
            case 0: printf("\n Creation of Node ");
                    Creation(); break;
            case 1: Insertion(); break;
            case 2: Deletion(); break;
            case 3: Traversal(); break;
            // case 4: exit(0);
            default: printf("Enter valid option");
        }
    }
}