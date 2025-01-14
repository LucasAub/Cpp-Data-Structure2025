#ifndef BST_H
#define BST_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Node{
    int data;
    Node* left;
    Node* right;
}Node;

Node* ROOT = NULL;
class BST{
    
    void insert(int key);
    void inorder(Node* root);
};


#endif // BST_H