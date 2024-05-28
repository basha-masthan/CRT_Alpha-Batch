#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree node
struct Node 
{
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the binary tree
struct Node* insert(struct Node* root, int data) 
{
    if (root == NULL) 
        return createNode(data);
    
    if (data <= root->data) 
        root->left = insert(root->left, data);
    else if (data >= root->data) 
        root->right = insert(root->right, data);
    
    return root;
}

// Preorder traversal
void preorderTraversal(struct Node* root) 
{
    if (root != NULL) 
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Inorder traversal
void inorderTraversal(struct Node* root) 
{
    if (root != NULL) 
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Postorder traversal
void postorderTraversal(struct Node* root) 
{
    if (root != NULL) 
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}
struct Node* minValueNode(struct Node* node) 
{
    struct Node* temp = node;
    while (temp && temp->left != NULL) 
    {
        temp = temp->left;
    }
    return temp;
}


struct Node* deleteNode(struct Node* root, int data) 
{
    if (root == NULL) 
    {
        return root;
    }
    if (data < root->data) 
        root->left = deleteNode(root->left, data);
    else if (data > root->data) 
        root->right = deleteNode(root->right, data);
    else 
    {
        // Node with only one child or no child
        if (root->left == NULL) 
        {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } 
        else if (root->right == NULL) 
        {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        // Node with two children
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() 
{
    struct Node* root = NULL;
    int value,c;
    switch(c){
    // Reading input values and inserting into the binary tree
    //printf("Enter integers to insert into the binary tree (enter -1 to stop):\n");
       case 1: while (1) 
        {
            scanf("%d", &value);
            if (value == -1) 
                break;
            
            if (value > 0 && value < 1000) 
            {
                root = insert(root, value);
            }
        }
         case 2:
                if (root == NULL)
                    printf("BST is empty.\n");
                else 
                {
                    //printf("Enter integer to insert into the BST: ");
                    scanf("%d", &value);
                    if (value == -1) 
                        exit(0);
                    if (value > 0 || value <= 1000)
                        insert(root, value); // Inserting value into the BST
                        //printf("Value inserted into BST.\n");
                    else 
                        printf("Invalid value!.\n");
                }
                break;
            case 3:
               // printf("Enter integer to delete from the BST: ");
                scanf("%d", &value);
                if (value == -1) 
                    exit(0);
                root = deleteNode(root, value);
                printf("Value deleted from BST.\n");
                break;
            case 4:
               // printf("BST elements: ");
                inorderTraversal(root);
                printf("\n");
                break;

    }

    // Printing all traversal orders simultaneously
    //printf("Preorder Traversal:\n");
    preorderTraversal(root);
    printf("\n");

    //printf("Inorder Traversal:\n");
    inorderTraversal(root);
    printf("\n");

    //printf("Postorder Traversal:\n");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
