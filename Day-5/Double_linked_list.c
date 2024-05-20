#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *llink;
    struct node *rlink;
};
typedef struct node NODE;
NODE *head=NULL;

void Creation(){
    int i,n,val;
    NODE *newnode,*temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode = (NODE *)malloc(sizeof(NODE));
        scanf("%d",&val);
        newnode->data=val;
        newnode->rlink = NULL;
        newnode->llink = NULL;
        if(head == NULL)
        {   
            head=newnode;
        }
        else{
            temp = head;
            while(temp->rlink != NULL){
                temp=temp->rlink;
            }
                // newnode->link=temp;
            temp->rlink = newnode;
            newnode->llink=temp;
        }
    }
}

void Insertion(){
    int val;
    NODE *newnode,*temp;
    scanf("%d",&val);
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data=val;
    newnode->llink=NULL;
    newnode->rlink=NULL;
    if(head==NULL)
    {   head=newnode;   return; }  
    else
    {
        temp = head;
        while (temp->rlink!=NULL)
        {
            temp=temp->rlink;
        }
        temp->rlink= newnode;
        newnode->llink=temp;
    }
}

void insertion_at_begin(){
    int val;
    NODE *newnode,*temp;
    scanf("%d",&val);
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data=val;
    newnode->llink=NULL;
    newnode->rlink=NULL;
    if(head==NULL)
    {   head=newnode;   return; }  
    else
    {
        newnode->rlink=head;
        head->llink=newnode;
        head=newnode;
    }
}

void Deletion_at_Begining(){
    if(head == NULL)
        printf("List is Empty");
    else
    {
        head = head->rlink;
        head->llink = NULL;
    }
}   

void Deletion(){
    NODE *temp,*pre;
    if(head == NULL)
        printf("List is Empty");
    else if(temp->rlink==NULL){
        free(head);
    }
    else{
        temp=head;
        pre=head;
        while(temp->rlink!=NULL){
            pre=temp;
            temp=temp->rlink;
        }
        pre->rlink=NULL;
        free(temp);
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
        printf("%d ",temp->data);
        temp=temp->rlink;
       }
    //    printf("NULL");
    }
}

void main(){
    int c,n;
    while(1){
        printf("\n\n\t Main Menu \n 0.Creation \n 1.Insertion \n 2.Deletion \n 3.Display \n 4.exit\n");
        scanf("%d",&c);
        switch(c){
            case 0: printf("\n Creation of Node ");
            if (head==NULL)
                    Creation();
            else{
                printf("LIst Already exists...");
            }
                    break;
            case 1: Insertion(); break;
            case 2: Deletion(); break;
            case 3: Traversal(); break;
            // case 4: exit(0);
            default: printf("Enter valid option");
        }
    }
}