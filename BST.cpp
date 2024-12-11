//This code is the framework of a BST containing minimal required funcitons.
//This code can be further custmoized based on our needs.

#include <iostream>
#include <cstdlib>
using namespace std;

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

typedef struct tree TREE;

class BinarySearchTree
{
public:
    TREE *insert_into_bst(TREE *, int);
    void inorder(TREE *);
    TREE *delete_from_bst(TREE *, int);
    TREE *searchtree(TREE *, int);
};

TREE *BinarySearchTree::insert_into_bst(TREE *root, int data)
{
    TREE *newnode = (TREE *)malloc(sizeof(TREE));
    if (newnode == NULL)
    {
        cout << "memory allocation failed" << endl;
        return root;
    }
    // Manually initialize the node
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    // When the first insertion happens, which is the root node
    if (root == NULL)
    {
        root = newnode;
        cout << "Root node inserted into tree" << endl;
        return root;
    }

    // Traverse through the desired part of the tree
    TREE *currnode = root;
    TREE *parent = NULL;

    while (currnode != NULL)
    {
        parent = currnode;

        if (newnode->data < currnode->data)
            currnode = currnode->left;
        else
            currnode = currnode->right;
    }

    // Attach the node at appropriate place using parent
    if (newnode->data < parent->data)
        parent->left = newnode;
    else
        parent->right = newnode;

    cout << "Node inserted successfully into the tree" << endl;
    return root;
}

void BinarySearchTree::inorder(TREE *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << "\t";
        inorder(root->right);
    }
}

TREE *BinarySearchTree::delete_from_bst(TREE *root, int data)
{
    TREE *currnode = root;
    TREE *parent = NULL;
    TREE *successor = NULL;
    TREE *p = NULL;

    // check if tree is empty
    if (root == NULL)
    {
        cout << "tree is empty" << endl;
        return root;
    }

    // travers and reach the appropriate part of the tree
    while (currnode != NULL && currnode->data != data)
    {
        parent = currnode;
        if (data < currnode->data)
            currnode = currnode->left;
        else
            currnode = currnode->right;
    }

    // if data is not present in the tree
    if (currnode == NULL)
    {
        cout << "Item not found" << endl;
        return root;
    }

    // check and manipulate if either left subtree is absent, right subtree is absent
    // or both are present
    if (currnode->left == NULL)
        p = currnode->right;
    else if (currnode->right == NULL)
        p = currnode->left;
    else
    {
        // process of finding inorder successor
        successor = currnode->right;
        while (successor->left != NULL)
        {
            successor = successor->left;
        }
        successor->left = currnode->left;
        p = currnode->right;
    }
    // the case of root deletion
    if (parent == NULL)
    {
        free(currnode);
        return p;
    }
    if (currnode == parent->left)
        parent->left = p;
    else
        parent->right = p;
    free(currnode);
    return root;
}

TREE *BinarySearchTree::searchtree(TREE *root, int data)
{
    TREE *curr = root;
    if (curr == NULL || curr->data == data)
        return curr;
    if (data < curr->data)
        searchtree(curr->left, data);
    else
        searchtree(curr->right, data);
}
