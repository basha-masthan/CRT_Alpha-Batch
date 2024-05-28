===TREES===
-------------
.In data structures, a tree is a hierarchical data structure composed of nodes
.Each node has a value and a list of reference to its child nodes, which are also trees.
.The topmost node of a tree is called the root and nodes with no children are called leaves.
............................
---->Tree Terminologies:
.NODE:The basic unit of tree,containing data and references to other nodes.
.ROOT:The top node of tree,which has no parent.
.EDGE/BRANCH:the connection between two nodes in a tree.
.LEAF(OR EXTERNAL NODE): A node that has no children .
.INTERNAL NODE: A node that has atleast one child.
.CHILD: A node directly connected to another node when moving away from the root.
.PARENT:The node directly connected to another node when moving towards the root.
.SIBLING:Nodes that share the same parent.
.HEIGHT:The length of the longest path from the node to a leaf.
.DEPTH:The length of the path from the root to a node.
.LEVEL:The number of the edges on the path from the root to the node.
.DEGREE OF NODE:The number of sub-trees(children)a node has.
.DEGREE OF TREE:The maximum degree of any node in the tree.
.PATH: A sequence of a nodes connected by edges. It starts from a node and ends at another node.
.PATH LENGTH: The number of the edges of the path.
.ANCESTOR:A node that lies on the path between the root node and another node.
.Descendant:A node reachable by following edges from another node.
.HEIGHT OF THE TREE: The height of the root node, i.e, the maximum height of any node in the tree.
...................................
TREE:
			A
		
                 B		C
	  
            D    E   F          G   H   
	      
                 I            J    K     

Root:A
Leaf nodes:D,I,J,F,K,H
Internal Nodes:B,C,E,G
Child nodes:
	child nodes of A:B,C
	child nodes of C:G,H
Parent node:	
	parent node of E,D,F:B
	parent node of I:E
Sibling nodes:
	D,E,F are siblings with parentB
	B,C re siblings with parent A
Height of a tree:3
A-B-E-I==>3
A-C-G-J==>3
A-C-G-K==>3
A-C-J-K==>3
Level of a node:
	level of G:2
	level of A:0
	level of J:3
Degree of a node:
	degree of A:2
	degree of B:3
	degree of D:0
	degree of E:1
Degree of Tree:3
..............................
====BINARY TREE====
-------------------
.A binary tree is a hierarchial data structure in which each node has "at most two children".
.Each node  contain thre components:
    -->ponter to left sub-tree
    -->ponter to right sub-tree
    -->Data element
.The topmost node in the tree is called the root.An empty is represented by NULL pointer.
------------------
---->Types Of Binary tree:
                      A
  node with         /   \
 2 children  ---  B       C->Node with only one child
                /   \    /
               D     E  F-<Node with 0 children
              /
             G
1)Roooted binary tree
2)Full binary tree
3)Complete binary tree
4)Almost complete binary tree
5)Skewed binary tree
....................
1)Rooted binary tree:
	binary tree has a root node and every node has at most two children

                      A->Root node

                    /   \
                  B       C
                /   \    /
               D     E  F
2)Full binary tree:
 	A binary tree,in which every node has either 0 or 2 children
           
                      A                                             
                    /   \
                  B       C
                /   \    /
               D     E  H
              /  \
             F    G
3)Complete binary tree:
	A binary tree in which all interior nodes have 2 children and all levels must end at same level.
      
           A            [WRONG]                  
         /   \
        B      C
      /   \
    D       E           

            A                              
         /     \         [RIGHT]
        B        C
      /   \   /   \
    D       E F    G      
 
4(Almost complete binary tree:
	A binary tree in which entry level,ecpect possibly the last,is completely filled,and all nodes are as far left as possible
 
           A                              
         /   \             [WRONG]
        B      C
      /   \      \
    D       E      F          



           A              [RIGHT]                
         /   \
        B      C
      /   \    /  
    D       E F               

5)Skewed binary tree:
	A binary tree in that every node except the leaf has only one child

			A
		      /
		     B
		   /
		  C
		 /
		D

   A
     \
       B
         \
          C
            \
              D

.........................
---->REPRESENTATION OF BINARY TREES
.Array representation
.Linked list representation
1)Array representation:
	                                                           root=index
	                                                           left child=2*i+1
	 A   --->LEVEL 0                                             right child=2*i+2
      /     \
    B         C--->LEVEL 1
  /     \    /   \
D        E   F     G--->LEVEL 2

Disadvantage:
 
           A                             
         /   \             
        B      C
      /   \    / \
    D       E F    G   
           / \ 
          H   I       
NOTE: The incomplete binary tree and the natural mapping of its nodes into an array which leaves some gaps.
............................
---->LINKED REPRESENTATION:
struct tnode
{
inr data;
struct tnode left;
struct tnode right;
};
 	data
       /    \
     left     right
...........................
====>BINARY TREE TRAVERSAL ALGORITHMS:
.Level order traversal
.Pre-order traversal
.In-order traversal
.post-order traversal

1)level order traversal:
	level order traversal visits nodes in a tree level by level
STEPS:
----->enqueue the root node
----->while the queue is not empty 
	-Dequeue a node
	-Process the  node(eg.prints its value)
	-Enqueue the node's  children(left and right)if they exist
2)Pre-order traversal:
To traverse a nonempty binary tree:
1.Visit the root
2.If the left sub-tree is nonempty,do a preorder traversal on it
3.If the right sub-tree is nomempty,do a preorder traversal on it

               
           A                             
         /   \             
        B      C                           A-B-D-E-C-F-G
      /   \    / \
    D       E F    G   
              
void preorder(struct tnode root)
{
if(root!=NULL)
{
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
}

3)In-order traversal:
To traverse a non-empty binary tree:
.If the left sub-tree is nonempty,do a inorder graversal on it
.Visit the root
.If the right sub=tree is nonempty,do a in-order traversal on it
void inorder(struct *tnode root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
}

.................
4)Post-order traversal
To traverse a non empty binary tree:
.If the left sub-tree is not empty,do a post-order traversal on it
.If the right sub-tree is not empty,do a post-order traversal on it
.Visit the node
void postorder(struct tnode root)
{
if(root!=NULL)
{
postorder(root->left)
postorder("%d",root->right);
printf("%d",root->data);
}
}

         
           A                             
         /   \             
        B      C                           B-C-A-D-E-B-F-G-C
      /   \    / \
    D       E F    G   
              
============================================
====BINARY SEARCH TREE====
--------------------------
.A binary search tree(BST) is a tree in which all the nodes follow the below mentioned properties:
	*The value of the key of the left sub-tree is less than the value of its parent (root)node's key.
	*The value of the key of the right sub-tree is greater than  or equal to the value of its parent(root)node's key.
                     25
                   /    \
                  20    36
                 / \  /   \
                10 22 30   40
               /  \   /   /  \
              5   12 28  38  48
----------------------
ALGORITHM FOR NODE CREATION IN TREE:
--------------------------------------
CreateNode(value):
1.Allocation memory for a new node.
2.Set the value of the new node to the provided value.
3.Set the left child pointer of the new node to NULL
4.Set the right child pointer of the new node to NULL
5.Return a pointer to the newly created node

struct TNode* createNode(int value)
{
  struct TNode*newnode=
    (struct TNode*)malloc(sizeof(struct TNode));
  newNode->value=value;
  newNode->left=NULL;
  newNode->right=NULL;
  return newnode;
}

---->Algorithm for inserting a node:
---------------------------------
inserNode(root,value):
	1.If root is NULL:
		retutn createNode(value)
	2.If value<=root.value:
		set root.left=insertNode(root.left,value)
	3.Else if value>=root.value:
		set root.right=insertNode(root.right,value)
	4.return root

     			10
		        / \
                       5    12
                     /   \    \
                    4     8     20
                          /     /
                          7     15
                                /
                                13

struct TNode* insertNode(struct TNode* root,int value)
{
if (root==NULL)
   return createNode(value);
if(value<=root->value)
   root->left=insertNode(root->left,value);
else if(value>=root->value)
   root->right=insertNode(root-<right,value);
return root;
}


#include<stdio.h>
#include<stdlib.h>
struct TNode
{
int value;
struct TNode *left;
struct TNode *right;
};
struct TNode* createnode(int value)
{
  struct TNode* newNode;
  newNode=(struct tNode*)malloc(sizeof(struct TNode)
  newNode->value=value;
  newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct TNode* insertNode(struct TNode* root,int value)
{
if (root==NULL)
   return createNode(value);
if(value<=root->value)
   root->left=insertNode(root->left,value);
else if(value>=root->value)
   root->right=insertNode(root-<right,value);
return root;
}
void inorderTraversal(struct TNode root)
{
if(root!=NULL)
{
inorderTraversal(root->left);
printf("%d",root->data);
inorder(root->right);
}
}
int main()
{
struct TNode root=NULL;
int value;
printf("Enter integers to insert (end with -1):\n");
while(1)
{
scanf("%d",&value);
switch(value)
{
case 1:
printf("Binary tree elements:");
inorderTraversal(root);
printf("\n");
return 0;
default: if(value>0 && value<1000)
		root=insertNode(root,value);
    	 else:
		printf("Value out of range(0<value<1000.\n"));
	 break;
}
}
return 0;
}