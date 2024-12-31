#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

        // Constructor
        Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    // Step A, B and C
    Node *root = new Node(data); // Step A: Create a new node

    cout << "Enter data for left part of " << data << endl;
    root->left = buildTree(); // Step B: root->left = buildTree() (Recursion)

    cout << "Enter data for right part of " << data << endl;
    root->right = buildTree(); // Step C: root->right = buildTree() (Recursion)

    return root;
}

int main()
{
    Node *root = NULL;

    root = buildTree();

    return 0;
}
