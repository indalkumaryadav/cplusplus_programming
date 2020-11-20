#include "bits/stdc++.h"
using namespace std;
struct Node
{
    int data;
    Node *next;
};

struct Node *deleteLinkedListFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

void linkedListTraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head = new Node();
    struct Node *first = new Node();

    cout << "Before Deletion" << endl;
    head->data = 10;
    head->next = first;

    first->data = 2;
    first->next = NULL;

    linkedListTraverse(head);
    head = deleteLinkedListFirst(head);
    cout << "After Deletion" << endl;
    linkedListTraverse(head);

    return 0;
}
