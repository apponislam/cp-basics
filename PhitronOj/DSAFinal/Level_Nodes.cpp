#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    if (root == NULL)
        return NULL;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }

    queue<Node *> q;
    q.push(root);

    int i = 0;

    while (!q.empty())
    {
        int n = q.size();

        if (i == level)
        {
            for (int j = 0; j < n; j++)
            {
                Node *p = q.front();
                q.pop();

                cout << p->val << " ";

                if (p->left)
                    q.push(p->left);

                if (p->right)
                    q.push(p->right);
            }

            return;
        }

        for (int j = 0; j < n; j++)
        {
            Node *p = q.front();
            q.pop();

            if (p->left)
                q.push(p->left);

            if (p->right)
                q.push(p->right);
        }

        i++;
    }

    cout << "Invalid";
}

int main()
{
    // hey appon start from here
    Node *root = input_tree();
    int n;
    cin >> n;
    level_order(root, n);

    return 0;
}
