#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *link;
};

void linkedListTraverse(struct Node *ptr)
{

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}

int main()
{

    struct Node *head = new Node();
    struct Node *first = new Node();
    head->data = 2;
    head->link = first;
    first->data = 5;
    first->link = NULL;

    linkedListTraverse(head);

    return 0;
}
