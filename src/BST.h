#ifndef BST_H
#define BST_H

#include <vector>
#include "Student.h"

struct TreeNode {
    int year_of_enrollment;
    int index; // Index in the vector
    TreeNode* left;
    TreeNode* right;

    TreeNode(int year, int idx) : year_of_enrollment(year), index(idx), left(nullptr), right(nullptr) {}
};

class BST {
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* node, int year, int index);
    TreeNode* search(TreeNode* node, int year);
    TreeNode* remove(TreeNode* node, int year); // New private function
    void inOrder(TreeNode* node, const std::vector<Student>& students);

public:
    BST();
    void insert(int year, int index);
    TreeNode* search(int year);
    void remove(int year); // New public function
    void display(const std::vector<Student>& students);
    const Student* retrieve(const std::vector<Student>& students, int year);
};

#endif // BST_H
