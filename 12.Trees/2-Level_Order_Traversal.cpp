#include <iostream>
#include <queue>
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
void levelOrderTraversal(Node *root) {
    queue<Node*> q;

    //intially
    q.push(root);

    while(!q.empty()) {
        //A get the front element from the queue
        Node* temp = q.front();
        //B remove the element from the front of the queue
        q.pop();
        //C print the data
        cout << temp->data << " ";
        //D Check left and right child and push them in queue
        if(temp -> left) {  // agar left child exist karta hai toh queue me push karo
            q.push(temp -> left);
        }
        if(temp -> right) { // agar right child exist karta hai toh queue me push karo
            q.push(temp -> right);
        }
    }

}

int main()
{
    Node *root = NULL;

    root = buildTree();

    levelOrderTraversal(root);

    return 0;
}
