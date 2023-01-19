#include <bits/stdc++.h>  
using namespace std; 
   
class node 
{ 
    public:
    int key; 
    node *left, *right; 
}; 

node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

node* insert(struct node* node, int key) 
{ 
    struct node *newNode(int );
    if (node == NULL) return newNode(key); 
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
    return node; 
} 
int minValue(struct node* node)  
{  
    struct node* current = node;  
    while (current->left != NULL)  
    {  
        current = current->left;  
    }  
    return(current->key);  
}  
int maxValue(struct node* node)  
{  
    struct node* current = node;  
    while (current->right != NULL)  
    {  
        current = current->right;  
    }  
    return(current->key);  
}  
int main() 
{ 
    int maxValue(struct node* );
    node* insert(struct node* , int );
    int minValue(struct node* ); 
    node *root = NULL; 
    root = insert(root, 8); 
    insert(root, 3); 
    insert(root, 10); 
    insert(root, 1); 
    insert(root, 6); 
    insert(root, 4); 
    insert(root, 7); 
    insert(root, 5);
    insert(root, 10);
    insert(root, 9);
    insert(root, 13);
    insert(root, 11);
    insert(root, 14);
    insert(root, 12);
    insert(root, 2);
    
    cout << "\n Minimum value in BST is " << minValue(root)<<endl;  
    cout << "\n Maximum value in BST is " << maxValue(root);  
    return 0; 
} 