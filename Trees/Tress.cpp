#include <iostream>
using namespace std;
#include <queue>

// Tree is a non-linear data structure which is used to store the data elements in a heirarichal structure and we are learnig binary tree so binary tree is a data structure based on tree but in this nodes have atmost 2 element or nodes.....Implementation of the binary tree using the queue Method (1)

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{
    int x;
    cout << "Enter the root element";
    cin >> x;
    if (x == -1)
        return 0;

    Node *root = new Node(x);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int x;
        cout << "Enter the left element of the " << temp->data;
        cin >> x;

        if (x != -1)
        {
            temp->left = new Node(x);
            q.push(temp->left);
        }
        int xx;
        cout << "Enter the right element of the " << temp->data;
        cin >> xx;
        if (xx != -1)
        {
            temp->right = new Node(xx);
            q.push(temp->right);
        }
    }
}