#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE  100

struct Stack
{
    int val[MAX_SIZE];
    int top;
};


void isEmpty(struct Stack *stack){
    if(stack->top == -1)
        printf("Stack is Empty\n");
    else    
        printf("Stack is Not Empty\n");
}
void isFull(struct Stack *stack){
    if(stack->top==MAX_SIZE-1)
        printf("Stack is Full\n");
    else
        printf("Stack is Not Full\n");
}
void initializationStack(struct Stack *stack){
    stack->top = -1;
}

void Push(struct Stack *stack){

    int val;
    // printf("Enter a Value");
    scanf("%d",&val);
    if(stack->top == MAX_SIZE-1)
        printf("Stack is Full\n");
    else{
        stack->top++;
        stack->val[stack->top]=val;
    }

}
void Pop(struct Stack *stack){
    int temp;
    if(stack->top==-1){
        printf("Stack is Empty...\n");
        return;
    }
    else{
        temp = stack->val[stack->top];
        stack->top--;
        printf("%d\n",temp);

    }
}


void peek(struct Stack *stack){
    if(stack->top==-1)
        printf("Stack is Empty..\n");
    else{
        printf("%d\n",stack->val[stack->top]);
    }
}

void display(struct Stack *stack)
{
    int i;
    if(stack->top==-1)
        printf("Stack is Empty..\n");
    else{
        for(i=stack->top;i>=0;i--){
            printf("%d\n",stack->val[i]);
        }
    }
}


void main(){


    int c;
    struct Stack stack;
      initializationStack(&stack);
    printf("Enter Your choice \n 1.Push \n 2.POP \n 3.Peek \n 4.Display \n 7.Exit \n");
    while(1){
        scanf("%d",&c);
        switch(c){
            case 1:Push(&stack); break;
            case 2:Pop(&stack); break;
            case 3:peek(&stack); break;
            case 4:display(&stack); break;
            case 5:isEmpty(&stack);break;
            case 6:isFull(&stack); break;
            case 7: exit(0);

            default : printf("Enter valid option");
        }
    }
}
