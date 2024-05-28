======================================STACK============
*Stack is a linear data structure in which elements are inserted from one end and deleted from the same end.
*Stack follows LIFO(last in first out).
*Sttack uses a variable called a "top" Which always points top most element of the stack.
--------->Empty condition:= if top= -1 then we say stack is empty.
---------->full condition:= if top=max_size-1 then we say stack is full.
                                       -------------
                               4     |               |    ---------->           STACK
                               3     |               |
                               2     |    30      |<---------top
                               1     |     20     |
                               0     |    10      |
                                       -------------
   ================>STACK OPERATIONS:
------------------------------
.Is empty
.Is full
.push()
.pop()
.peek[top most element]
.Display 
-------------------------------
===========POP()ALGORITHM:
Step-1
     1) If top==-1
              printf("Stack is empty")
     2)else
              temp=stack->items[stack->top]
              stack->top=stack->top-1
              print (temp) [delete element]
STEP-2 exit
-----------------------
=============PUSH ALGORITHM:
STEP-1: Take the input element that you want to insert.
STEP-2: 
1) If stack->top==MAX_SIZE-1
             print 'Stack is full'
2)else
       stack->top=stack->top+1
      stack->items[stack->top]=element
STEP-3: exit
-----------------------------------
4th------Stack implementation using linked list
-----
void push(struct Stack*stack,int ele)
{
newnode=(N*)malloc(sizeof(N));
newnode->data=ele;
newnode->link==NULL;
if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
while(temp->link!NULL)
temp->link=newnode;
}
}
=============================================================
1st------------infix to postfix conversion
------------->Infix to postfix conversion
1)Read all the symbols one by one from left to right in the given infix expression.
2)If the reading symbol is operand,then directly print it to the result(output)
3)If the reading symbil is left parenthesis'(',then Push it on theb stack
4)If the reading symbol is right parenthesis')',then pop all the contents of stack until respective left paranthesis is popped and print each popped symbol to the result.
5)If the reading symbol is operator(+,-,*/...etc)then push it on to the stack.However,first pop the operators which are already on the stack that have higher or equal precedence than current operator and print them to the result.
------------------------------------------------------------
===========ARTHMETIC EXPRESSION=========
1) Prefix===>+ab
2)Infix=====>a+b                                  infix to postfix
3)postfix=====>ab+                           a+b==>ab+
---------------------
example:
--->A^B*C/(D*E-F)------>ANS: AB^
WORKING PROCESS:
Input: A^B*C/(D*E-F)     
--
SCANNED SYMBOL                               STACK                                     OUTPUT
------------------------------------------------------------------------------------------------------
          A                                                      -                                                   A   
          ^                                                      ^                                                   A
         B                                                      ^                                                  AB
         *                                                   POP A                                           ABA
         C                                                    *                                                  AB^C*
         /                                                   POP '*'                                         AB^C*
        /                                                          /                                              AB^C*
       C                                                          /C                                            AB^C*
------------------------------------------------------------------------------------------------------
==================POSTFIX EXPRESSION EVOLUTION==================
1.Read all the symbols one by one from left to right in the given postfix Expression.
2. If the reading symbol is operand, then push it on to the stack.
3. if the reading symbol is operator(+,-,*,/ etc..,).then perform TWO pop operations and store the two pop operands in two different variables(operand1 and operand2). the perform reading symbol operation using operand1  and operand2 and push result back on to the stack.
4.Finally perform a pop operation and display the popped value as final result.
EXAMPLES:
1)432*+5.......>ANS:5
2)53+62*/35*+.........>ANS:39
-----------------------------------------------------------------
Input:53+62*/35*+.........>ANS:39
------->WORKING PRINCIPLE
SCANNED SYMBOL                               STACK                                     OUTPUT
------------------------------------------------------------------------------------------------
            5                                                      5                                               ----
            3                                                   5,3                                             -----
            +                                                  pop3                                           3+5=8
                                                                pop5                                          push(8)
            6                                                8,6                                                 --------
           2                                                8,6,2                                              -----------
         /                                                 pop 2,6                                            6/2=3
          *                                               pop3,6                                                           
-------------------------------------------------------------------------------------------------