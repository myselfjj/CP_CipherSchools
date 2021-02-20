#include<bits/stdc++.h> 
#include<stdbool.h> 
using namespace std; 
class Node 
{ 
    public: 
    int key; 
    Node *left, *right; 
      
    Node *newNode(char k) 
    { 
        Node *node = ( Node*)malloc(sizeof( Node)); 
        node->key = k; 
        node->right = node->left = NULL; 
        return node; 
    } 
      
}; 
unsigned int countNodes(Node* root) 
{ 
    if (root == NULL) 
        return (0); 
    return (1 + countNodes(root->left) +  
            countNodes(root->right)); 
} 
  
bool isComplete ( Node* root, unsigned int index,  
                    unsigned int number_nodes) 
{ 
    if (root == NULL) 
        return (true); 
    if (index >= number_nodes) 
        return (false); 
      return (isComplete(root->left, 2*index + 1, number_nodes) && 
            isComplete(root->right, 2*index + 2, number_nodes)); 
} 
  

int main() 
{ 
    Node n1; 
    Node* root = NULL; 
    root = n1.newNode(1); 
    root->left = n1.newNode(2); 
    root->right = n1.newNode(3); 
    root->left->left = n1.newNode(4); 
    root->left->right = n1.newNode(5); 
    root->right->right = n1.newNode(6); 
  
    unsigned int node_count = countNodes(root); 
    unsigned int index = 0; 
  
    if (isComplete(root, index, node_count)) 
        cout << "The Binary Tree is complete\n"; 
    else
        cout << "The Binary Tree is not complete\n"; 
    return (0); 
} 