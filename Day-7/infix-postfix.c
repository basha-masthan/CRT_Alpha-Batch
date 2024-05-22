
#include <stdio.h>
#include <ctype.h>
#define MAX 50

int top =-1;
char stack[MAX];

void push(char ch){
    stack[++top]=ch;
}
int pop(){
    return stack[top--];
}

int precedence(char ch){
    if(ch=='('){
        return 0;
    }
    else if(ch=='+' || ch == '-')
        return 1;
    else if(ch=='*' || ch == '/' || ch == '%')
        return 2;
    else if(ch=='^')
        return 3;
    
}
void convertion(char *infix,char *post){
    int i,j=0;
    char ch;
    for(int i=0;infix[i]!= '\0';i++){
        ch  =infix[i];
        if(isalpha(ch) || isdigit(ch)){
            post[j]=ch;
            j++;
        }
        else if(ch == '(')
            push(ch);
        else if(ch==')'){
            while(stack[top]!='(' && top!=-1){
                post[j]=pop();
                j++;
            }
            pop();
        }
        else{
            while(precedence(ch)<=precedence(stack[top]) && top!= -1)
            {
                post[j]=pop();
                j++;
            }
            push(ch);
        }
    }
    while(top != -1){
        post[j]=pop();
        j++;
    }
    post[j]='\0';
}

void main(){
    char infix[MAX],post[MAX],ch;
    int i,j=0;
    printf("\n Enter infix Expression:");
    scanf("%s",&infix);
    convertion(infix,post);
    printf(" result =%s",post);
}