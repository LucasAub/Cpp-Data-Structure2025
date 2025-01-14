#include <iostream>
#include <vector>
#include <algorithm>
#include "BST.h"

void insert(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    if(ROOT == NULL){
        ROOT = newNode;
    }else{
        Node* temp = ROOT;
        while(true){
            if(data < temp->data){
                if(temp->left == NULL){
                    temp->left = newNode;
                    break;
                }else{
                    temp = temp->left;
                }
            }else{
                if(temp->right == NULL){
                    temp->right = newNode;
                    break;
                }else{
                    temp = temp->right;
                }
            }
        }
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    std::cout << root->data << " \n";
    inorder(root->right);
}

