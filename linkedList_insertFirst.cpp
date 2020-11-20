#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linkedTraverse(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = new Node();
    ptr->next = head;
    ptr->data = data;

    return ptr;
}

int main()
{
    struct Node *head;
    head = new Node();
    head->data = 20;
    head->next = NULL;

    head = insertAtFirst(head, 56);
    linkedTraverse(head);

    return 0;
}
