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
        cout << "k is greater than length of linked list" << endl;
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

// function to traverse backward
void traverseBackward(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// function to delete a node at head
void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

// function to delete a node at tail
void deleteAtTail(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

// function to delete a node with a key value
void deleteNode(Node *&head, int key)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL && head->data == key)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete temp->next->prev;
    temp->next->prev = temp;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 0);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAfterK(head, 2, 10);
    traverseForward(head);
    deleteAtHead(head);
    deleteAtTail(head);
    deleteNode(head, 10);
    traverseForward(head);
    traverseBackward(head);
    return 0;
}