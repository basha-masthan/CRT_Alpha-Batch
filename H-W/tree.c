#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left,*right;
};

struct Node *createNode(int data)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->right = newnode->left = NULL;
    return newnode; 
};

struct Node *insertNode(struct Node *root,int data){
    if(root == NULL)
        return createNode(data);
    if(data <= root->data){
        root->left = insertNode(root->left,data);
    }
    else if(data >= root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

void preOrder(struct Node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}


void postOrder(struct Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
    printf("Test Proo...\n\n");
    struct Node *root = NULL;
    int val;
    printf("Enter Values (End with -1):");
    while (1)
    {
        scanf("%d",&val);
        if(val == -1)
            break;
       if (val > 0 && val < 1000) 
        {
            root = insertNode(root, val);
        }
    }
    inOrder(root);printf("\n");
    preOrder(root);printf("\n");
    postOrder(root);printf("\n");

    return 0;
}
