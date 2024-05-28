=============================================================DATA STRUCTURE===================================
-------------------------------------------------------------------LINKED LIST-----------------------------------------------------------------------------
---> A linked list is collection of nodes,where each node have similar  structure.
1)Single list list
2)double linked list
3)circular linked list.
-------------------------SINGLE LINKED LIST----------------------
*In single linked list every node contain 2 fields
--->Data filed  ====> it stores the value
---->Link filed=====> it stores address of next node
SYNTAX:
struct node
{
   int data;
   struct node *link;
};
typedef struct node NODE;
-----
==>head is node which always contains address of the 1st node.
===>tail is node which is always represents last node of a linked list and its link field contains null pointer
*A structure which contain a pointer variable, that pointer variable contains the same structure.
===============================================
\\creating memory using pointers.....//
int *ptr;
ptr=(int*)malloc(sizeof(int));
\\crating memory using node//
syntax:
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
example:
NODE *newnode
newnode=(NODE*)malloc(sizeof(NODE));
=======================================================
-----------------------------------NODE CREATION-----------------------------
1) newnode=(NODE*)malloc=(sizeof(NODE));
2) newnode->data=55
3) newnode->link=NULL
4) newnode=800
==========================================
===========>lLINKED LIST OPERATIONS:
STEP-1:[INITIALIZE]set TEMP=HEAD
STEP-2:Repeat steps 3 to 4
             while TEMP!=NULL
STEP-3: print TEMP->DATA
STEP-4:set TEMP=TEMP->LINK
[END OF LOOP]

STEP-5"EXIT
------------------------------------------
=========>INSERTING A NODE AT BEGIN==============>
ALGORITHM------------------>
insert_at_begin():
       STEP-1:Take input element
       STEP-2: create a new node with data.
       STEP-3:
                1) if head==NULL:      //if it is first node
                          head=newnode
                2)else:                        //other than first node
                         newnode->link=head
                        head=newnode
        STEP-4: exit
----------------------------------------------
=============>INSERTING A NODE AT LAST=================>
ALGORITHM------------------------>
insert_at_last():
       STEP-1:Take input element
       STEP-2: create a new node with data.
       STEP-3:
                1) if head==NULL:      //if it is first node
                          head=newnode
                2)else:                        //other than first node
                         temp=head
                         while(temp->link!-NULL)
                                         temp=temp->link;
                          temp->link=newnode;
        STEP-4: exit
--------------------------------------
===============>DELETE A NODE AT FIRST  ==================>
ALGORITHM------------->
STEP-1: Take a temp node to delete first node
                  temp=head
STEP-2:
                1) if head==NULL:      
                        printf("No linked list");
                        return
                2)else:                        
                         temp=head
                         head=head->link;
                        free(temp)
 STEP-3: exit

---------------------------------------------------
================>DELETE A NODE AT LAST===================>
ALGORITHM------------------->
STEP-1: Take a temp & preptr nodes to delete last node
                  temp=head,preptr=head
STEP-2:
                1) if head==NULL:      
                        printf("No linked list");
                        return
                2)else:                        
                         temp=head
                         preptr=head
                         while(temp->link!=NULL)
                                        preptr=temp
                                         temp=temp->link
                         preptr->link=NULL
                        free(temp)
 STEP-3: exit
---------------------------------------------------
//PROGRAM FOR CREATION
sample program:
void traversal()
{
NODE *temp;
if(head=NULL)
{
  printf("Linked list is empty");
return;
}
else{
  temp=head;
 while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->link;
}
printf("NULL");
}
}
-------------------------------------
//PROGRAM TO INSERT A NODE AT BEGIN
void insertBegin()
{
int ele;
NODE*newnode;
printf("Enter data to insert:");
scanf("%d",&ele);
newnode=(NODE *)malloc(sizeof(NODE));
newnode->data=ele;
newnode->link=NULL;
if(head==NULL)
{
           head=newnode;
}
else
{
newnode->link=head;
head=newnode;
}
}
--------------------------------------------
//PROGRAM TO INSERT A NODE AT LAST
void insertAtLast()
{
int ele;
NODE*newnode, *temp;
printf("Enter data to insert:");
scanf("%d",&ele);
newnode=(NODE *)malloc(sizeof(NODE));
newnode->data=ele;
newnode->link=NULL;
if(head==NULL)
{
           head=newnode;
}
else
{
   temp=head;
while(temp->link)
{
temp=temp->link
}
}
}
------------------------------------------------------
//PROGRAM TO DELETION:
void deletion()
{
NODE *temp,*prev=NULL;
if(head==NULL)
{
print
--------------------------------------------------------------
============DOUBLE LINKED LIST=================
1.NODE SYNTAX
Struct node
{
int data;
struct node *llink;
struct node *rlink;
};
typedef struct node NODE;
------
2.NODE CREATION 
NODE *newnode;
newnode=(NODE *)malloc(sizeof(NODE));
newnode->data=ele;
newnode->llink=NULL;
newnode->rlink=NULL;
------
3.ASSIGNING VALUES TO NODE
4.ACCESSING VALUES FROM NODE
----------------------------------------
INSERTION AT LAST ALGORITHM:
STEP-1:Take the element as input
STEP-2:Create a node and put the data
STEP-3:
            1) if head==NULL:
                            head=newnode
            2)else:
                   temp=head
                   while temp->rlink!=NULL:
                             temp=temp->rlink
                  temp->rlink=newnode
                  newnode->llink=temp
STEP-4: Stop
-----------------
INSERTION AT FIRST  ALGORITHM:
STEP-1:Take the element as input
STEP-2:Create a node and put the data
STEP-3:
            1) if head==NULL:
                            head=newnode
            2)else:
                   newnode->rlink=head
                   head->llink=newnode
                  head=newnode
STEP-4: Stop
--------------------
DELETION AT FIRST ALGORITHM:
STEP-1: Take the temp node to delete first node
STEP-2: 
       if head=NULL:
                    print "DLL is empty"
                    return
      else:
               head=head->rlink
               head->llink=NULL
STEP-3: exit
---------------------------
DELETION AT LAST ALGORITHM:
STEP-1: Take the temp node to delete first node
STEP-2: 
       if head=NULL:
                    print "DLL is empty"
                    return
      else:
               while temp->rlink!=NULL
               preptr=temp;
               temp=temp->rlink;
               preptr->rlink=NULL
              free(temp) 
STEP-3: exit




