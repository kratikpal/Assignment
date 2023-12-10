#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

// function to insert at head
void insertAtHead(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);
        return;
    }
    Node *n = new Node(d);
    n->next = head;
    head->prev = n;
    head = n;
}

// function to insert at tail
void insertAtTail(Node *&head, int d)
{
    if (head == NULL)
    {
        insertAtHead(head, d);
        return;
    }
    Node *n = new Node(d);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

// function to insert ater k position
void insertAfterK(Node *head, int k, int d)
{
    if (head == NULL)
    {
        insertAtHead(head, d);
        return;
    }
    Node *n = new Node(d);
    Node *temp = head;
    while (k-- && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    n->next = temp->next;
    temp->next->prev = n;
    temp->next = n;
    n->prev = temp;
}

// function to traverse forward
void traverseForward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);  
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    traverseForward(head);
    return 0;
}