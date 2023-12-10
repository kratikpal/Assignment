#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function to traverse the linked list
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// function to insert node at the head
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

// function to insert node at the tail
void insertAtTail(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}

// function to insert node int he middle or given position
void insertAtPosition(Node *&head, int d, int pos)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    temp->next = curr->next;
    curr->next = temp;
}

// function to delete node at the head
void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

// function to delete node at the tail
void deleteAtTail(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = NULL;
    delete temp;
}

// function to delete node at the given position
void deleteAtPosition(Node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL || curr->next == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

// function to sort the linked list
void sortList(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *counterNode = head;
    Node *temp = head;
    while (counterNode != NULL)
    {
        while (head->next != NULL)
        {
            if (head->data > head->next->data)
            {
                swap(head->data, head->next->data);
            }
            head = head->next;
        }
        head = temp;
        counterNode = counterNode->next;
    }
}

// function to reverse the linked list
Node *rev(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *curPtr = head;
    Node *prevPtr = NULL;
    Node *nextPtr;

    while (curPtr != NULL)
    {
        nextPtr = curPtr->next;
        curPtr->next = prevPtr;
        prevPtr = curPtr;
        curPtr = nextPtr;
    }
    return prevPtr;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 7);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtPosition(head, 5, 3);
    traverse(head);
    sortList(head);
    traverse(head);
    return 0;
}