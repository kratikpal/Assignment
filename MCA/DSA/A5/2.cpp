#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// function to check if list is empty
bool isEmpty(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

// function to count the no. of nodes
int countNodes(Node *head)
{
    if (isEmpty(head))
    {
        return 0;
    }
    if (head->next == head)
    {
        return 1;
    }
    Node *temp = head;
    int count = 1;
    while (temp->next != head)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// function to traverse each node
void traverse(Node *head)
{
    cout << "List is: ";
    if (isEmpty(head))
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == head)
    {
        cout << head->data << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

// function to insert at head
void insertAtHead(Node *&head, int d)
{
    if (isEmpty(head))
    {
        head = new Node(d);
        head->next = head;
        cout << d << " inserted at head" << endl;
        return;
    }
    Node *n = new Node(d);
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    cout << d << " inserted at head" << endl;
}

// function to delete at tail
void deleteAtTail(Node *&head)
{
    if (isEmpty(head))
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = head;
    cout << "Node deleted from tail" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    cout << "No. of nodes = " << countNodes(head) << endl;
    traverse(head);
    deleteAtTail(head);
    traverse(head);
    return 0;
}