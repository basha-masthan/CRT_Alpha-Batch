
#include <stdio.h>
#include <ctype.h>
#define MAX 50

int satck[MAX];
int top =-1;

void push(int val){
   satck[++top]=val;
}

int pop(){
    return satck[top--];
}

void postfix(char post[]){
    int i,A,B,C;
    for(i=0;post[i] != '\0';i++){
        if(isdigit(post[i])){
            push(post[i] - '0');
        }
        else if(post[i] != ' ') {
            B=pop();
            A=pop();
            switch(post[i]){
                case '*' :C=A*B;    break;
                case '/' :C=A/B;    break;
                case '+' :C=A+B;    break;
                case '-' :C=A-B;    break;
            }
            push(C);
        }
    }
}

void main()
{
    char post[MAX];
    // printf("\n Enter Postfix Expression:");
    scanf("%s",post);
    postfix(post);
    printf("%d",satck[top]);
}