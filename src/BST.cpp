#include "BST.h"
#include <iostream>

BST::BST() : root(nullptr) {}

TreeNode *BST::insert(TreeNode *node, int year, int index)
{
    if (!node)
        return new TreeNode(year, index);
    if (year < node->year_of_enrollment)
    {
        node->left = insert(node->left, year, index);
    }
    else if (year > node->year_of_enrollment)
    {
        node->right = insert(node->right, year, index);
    }
    return node;
}

void BST::insert(int year, int index)
{
    root = insert(root, year, index);
}

TreeNode *BST::search(TreeNode *node, int year)
{
    if (!node || node->year_of_enrollment == year)
        return node;
    if (year < node->year_of_enrollment)
        return search(node->left, year);
    return search(node->right, year);
}

TreeNode *BST::search(int year)
{
    return search(root, year);
}

TreeNode *BST::remove(TreeNode *node, int year)
{
    if (!node)
        return nullptr;

    if (year < node->year_of_enrollment)
    {
        node->left = remove(node->left, year);
    }
    else if (year > node->year_of_enrollment)
    {
        node->right = remove(node->right, year);
    }
    else
    {
        if (!node->left)
        {
            TreeNode *temp = node->right;
            delete node;
            return temp;
        }
        else if (!node->right)
        {
            TreeNode *temp = node->left;
            delete node;
            return temp;
        }
        else
        {
            TreeNode *temp = node->right;
            while (temp->left)
                temp = temp->left;
            node->year_of_enrollment = temp->year_of_enrollment;
            node->index = temp->index;
            node->right = remove(node->right, temp->year_of_enrollment);
        }
    }
    return node;
}

void BST::remove(int year)
{
    root = remove(root, year);
}

void BST::inOrder(TreeNode *node, const std::vector<Student> &students)
{
    if (!node)
        return;
    inOrder(node->left, students);
    const Student &student = students[node->index];
    std::cout << "Name: " << student.name << ", Year: " << student.year_of_enrollment << ", GPA: " << student.GPA << "\n";
    inOrder(node->right, students);
}

void BST::display(const std::vector<Student> &students)
{
    if (!root)
    {
        std::cout << "No students to display.\n";
        return;
    }
    inOrder(root, students);
}

const Student *BST::retrieve(const std::vector<Student> &students, int year)
{
    TreeNode *node = search(year);
    if (!node)
        return nullptr;
    return &students[node->index];
}
