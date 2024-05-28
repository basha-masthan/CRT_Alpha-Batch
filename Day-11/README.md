===TREE CONSTRUCTION===
*20,23,13,9,14,19,21,27,24
             
                     20
                /           \
             13              23
            /   \           /      \
         9       14     21     27
                       \              /
                       19        24
PRE-ORDER: 20,13,9,14,19,23,21,27,24.
IN-ORDER: 9,13,14,19,20,21,23,24,27.
POST-ORDER: 9,19,14,13,21,24,27,23,20.
================================================
----------DELETING A NODE FROM BST:
a) Node with zero children(leaf node)
b) Node with one child
c)Node with two children.
-----------------------------------------------
a) Node with zero children
delete 19 
               original tree    
                    20
                /           \
             13              23
            /   \           /      \                          
         9       14     21     27
                       \              /
                       19        24
                             |
                             |
                     Deleted tree 
                      20
                /           \
             13              23
            /   \           /      \                          
         9       14     21     27
                                     /
                                  24
b)Delete a node with one child 
Delete 27
                     original tree
              
                      20
                /           \
             13              23
            /   \           /      \                          
         9       14     21     27
                       \              /
                       19        24
                        |
                        |
             Deleted tree
                      20
                /           \
             13              23
            /   \           /      \                          
         9       14     21     24
                       \              
                       19       
c)Delete a node with two children:
Delete 23:
                original tree
                    20
                /           \
             13              23
            /   \           /      \                          
         9       14     21     27
                       \              /
                       19        24
                               |
                               |
             deleted tree
                  
                    20
                /           \
             13              24 
            /   \           /      \                          
         9       14     21     27
                       \              
                       19  
Delete 20
              original tree
                     
                  20
                /           \
             13              23
            /   \           /      \                          
         9       14     21     27
                       \              /
                       19        24         
                Deleted tree      
                     21
                /           \
             13              23
            /   \                 \                          
         9       14             27
                       \              /
                       19        24
--------------------------------------------------------------------------
ALGORITHM FOR DELETING NODE:
DeleteNode(root,data)
     if root is NULL
             return root
    if data<root,data:
         set root.left to DeleteNode(root,left,data)
   else if data>root.data:
        set root.right to DeleteNode(root.right,data)
  else:
        if root.left is NULL:
                set temp to root.right
               free root
              return temp
      else if root.right is NULL:
      set temp to root.left
       free root
       return temp
 else:
      set temp to MinvalueNode(root.right)
     set root.data to temp.data.
     set root.right to DeleteNode(root.right,temp.data).
     return root
minvalueNode(node)
       set temp to node
       while temp.left is not NULL:
                  set temp to temp.left
 return temp
----------------------------------------------------------------------
//BINARY SEARCH TREE IMPLEMENTATION
#include<stdio.h>
#include<conio.h>
//Structure for a node in BST
struct Node
{
int data;
struct Node*left;
struct Node*right;
};
//Function to create a new node
struct Node*createNode(int data)
{
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
//Function to insert a node into BST
Struct Node* insert(struct Node* root,int data)
{
if(root==NULL)
   return createNode(data);
if(data<root->data);
  root->left=insert(root->left,data);
else if(data>root->data)
   root->right=insert(root->right,data);]
return root.;
}
//Function to final minimum value node in BST
struct Node*minvalueNode(struct Node*node)
{
struct Node*temp=node;
while(temp&&temp->left!=NULL)
{
temp=temp->left;
}
return temp;
}
//Function to delete a node from BST
struct Node*deleteNode(struct Node*root,int data)
-----------------------------------------






  

                    

                      













