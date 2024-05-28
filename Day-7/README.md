------------------ALGORITHM-------------------------
postfixEvaluation(post):
for each character c in post:
if c is a digit:
push(c-'0')onto the stack
else if c is not a space:
B = pop()
A =pop()
switch on c:
case'*';
C=A*B
break
case '/':
C=A/B
break
case '+';
C=A+B
break
case '-':
C=A-B
break
default:
 print "Invalid operator encountered: C"
push(c): //push the result onto the stack
--------------------------------------------------------------
-----------------------------------------PROGRAM-------------------------------
#include<stdio.h>
#include<conio.h>
#define MAX 50
int stack[MAX];
int top=-1;
void pust(int val)
{
 return stack[++top]=val;
}
int pop()
{
return stack[top--];
}
}
void postfixEvaluation(char post[])
{
 int i,A,B,C;
for(i=0;post[i]!='\0';i++)
{
if(isdigit(post[i]))
{
push(post[i]-'0'); //push(post[i]-48).....convert char to int
}
else if(post[i]!=' ')
{ //post[i]!=32----Ignore spaces(space ASCII value is 32)
B=pop();
A=pop();
switch(post[i])
{
case '*':
C=A*B;
break;
case '/':
C=A/B;
break;
case '+':
C=A+B;
break;
case '-':
C=A-B;
break;
default:
 printf("Invalid operator encountered:%c\n",post[i]);
}
push(C);
}
}
}
void main()
{
    char post[MAX];
    printf("\n Enter postfix expression:");
scanf("%s",post);
postfixEvaluation(post);
printf("\nResult=%d\n",stack[top]);
}

--------------------------------------------------------
---------------------------ALGORITHIM--------------------------
function conversion(infix,postfix):
initialize j to 0
for each character ch in infix:
if ch is an operand (alphabet or digit);
postfix[j]=ch
increment j
else if ch is '(':
push(ch onto stack)
else if ch is')':
while top of stack is not'('and  stack is not empty:
postfix[j]=pop from stack:
increment j
pop from stack //discard '('
else://ch is an operator
while stack is not empty and presence of ch is less than or equal to precedence of top of stack:
postfix[j]=pop from stack
increment j
push(ch onto stack)
while stack is not empty:
postfix[j]=pop from stack 
increment j
postfix[j]='\0'
--------------------------------------------------------------------
//infix to profix expresstion conversion
#include<stdio.h>
#include<ctype.h>
#define MAX 30
void push(char);
int pop();
int precedence(char ch);
void conversion(char infix[],char postfix[]);
int top=-1;
char stack[MAX];
void main()
{
    char infix[MAX],postfix[MAX],ch;
    printf("\n Enter infix expression:");
    scanf("%s",infix);
    conversion(infix,postfix);
    printf("\nResult:%s",postfix);
}
void conversion(char *infix,char *postfix)
{
    int i,j=0;
    char ch;
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(isalpha(ch)|| isdigit(ch))
        {
            postfix[j]=ch;
            j++;
        }
        else if(ch=='(')
        push(ch);
    else if(ch==')')
    {
        while(stack[top]!='(' && top!=-1)
        {
            postfix[j]=pop();
            j++;
        }
        pop();
    }
    else{
        while(precedence(ch)<=precedence(stack[top]) && top!=-1)
        {
            postfix[j]=pop();
            j++;
        }
        push(ch);
    }
    }
    while(top!=-1)
    {
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
}
void push(char x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];
}
int precedence(char ch)
{
    if(ch=='(')
    return 0;
else if(ch=='+'|| ch=='-')
return 1;
else if(ch=='*' || ch=='/' || ch=='%')
return 2;
else if(ch=='^')
return 3;
}
-------------------------------------------------------------------
----------BALANCING SYMBOLS OR DELIMITER MATCHING--------------------------------
The objective of this application is to check the symbols such as paranthesis(),braces{},brackets[]are matched or  not
  Thus every left parenthesis,brace and bracket must have its right counterpart

--->ALGORITHM:
1.Make an empty stack
2.Read an expression from left to right
3.If the reading character is closing symbol and if the stack is empty,the report as unbalanced expression.
4. if the reading character is closing symbol and if the stack is  empty,then report as unbalanced expression.
5. if the reading character is closing symbol and if the stack is not empty,then pop the stack.
6. if the symbol is popped is not the corresspondingopening symbol,the report as unbalanced expression.
7. After processing the entire expression and if the stack is not empty then report as unbalanced expression.
8. After processing the entire expression and if the stack is  empty then report as balanced expression.
-----------------------------
------>
balanceExpression(expr):
for each character c in expr:
if c is '('
push '(' onto the stack
else if c is ')':
if the stack is empty or the top element of the stack is not '(':
return 0 //unbalanced expression
else:
pop() //pop'(' from th stack
return whether the stack is empty // Balanced if stack is empty
----------------------------------------------------------------------------------------------
========================QUEUE=============================
* A queue is a linear data structure in which elements inserted from one end and deleted from other end.
*queue follows FIFO principle.
*the end which is used for inserting elements into the queue  is called rear end.
*the end which is used from deleting elements from the queue is called front end.
--------------------------------------------------------------
------>EMPTY CONDITION
front=-1 is a empty condtion
-------->FULL CONDITION
rare=MAX_SIZE-1 is a full condition
---------------------------------------------------
============QUEUE OPERATION===========
*n queue(inserting elemenets in the queue)
*d queue(deleting elementes from the queue)
*display(display the elemenets)
---------------------------------------------------
===============EQUEUE ALOGARITHM==================
enqueue();
STEP-1: Take the element as input.
STEP-2:
              1) if rear==MAX_SIZE-1:
                              print 'queue is full'
              2)else:
                    rear=rear+1
                    Queue[rear]=element
STEP-3:  if front==rear==-1:
                          rear=front=0
STEP-4: stop
-------------------------------------------------
===============ENQUEUE PROGRAM=====================
#include<stdio.h>
#include<conio.h>
#define MAX 50
int stack[MAX];
int top=-1;
void pust(int val)
{
 return queue[++top]=val;
}
---------------------------------------
===========DEQUEUE ALGORITHM==============
step-1:
1) if front==-1;
        print 'queue is empty'
 2)else: 
         temp=queue[front]
         front=rear-1
STEP-3:print temp
STEP-4:Exit
---------------------------------------------
=========DISPLAY ALGORITHM======
--------------------------------------------------------
======QUEUE IMPLEMENTING USING ARRAY=========
/*queue implementing using array.*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int  Q[MAX],front=-1,rear=-1,i;
void enqueue();
void dequeue();
void display();
void main()
{
    int ch;
    while(1)
    {
        printf("\n**QUEUE**");
        printf("\n 1.Enqueue");
        printf("\n 2.Dequeue");
        printf("\n 3.Display");
        printf("\n 4.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
             break;
             case 2: dequeue();
             break;
             case 3: display();
             break;
             case 4: exit(0);
        }
    }
}
void enqueue()
{
    int ele;
    printf("Enter element:");
    scanf("%d",&ele);
    if(rear==MAX-1)
    {
        printf("Queue is full.\n");
        return;
    }
    rear++;
    Q[rear]=ele;
    if(front==-1)
    {
        front=rear=0;
    }
}
void dequeue()
{
    int temp;
    if(front==-1)
    {
        printf("Queue is empty.\n");
        return;
    }
    temp=Q[front];
    front++;
    if(front==rear)
    {
        front=rear=1;
    }
    printf("Deleted element :%d\n",temp);
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements are:");
    for(i=front;i<rear;i++)
    {
        printf("%d",Q[i]);
    }
}
------------------------------------------------------------------------------
//QUEUE USING LINKED LIST
#include<stdio.h>
#include<stdlib.h







