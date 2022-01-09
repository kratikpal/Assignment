#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int n;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void insert()
{
    struct Node *temp, *nNode;
    nNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the element\n");
    scanf("%d", &nNode->n);
    nNode->next = NULL;
    nNode->prev = NULL;
    if (head == NULL)
    {
        head = nNode;
        return;
    }
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = nNode;
    nNode->prev = temp;
}

void display()
{
    struct Node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->n);
        temp = temp->next;
    }
    printf("NULL\n");
}

void delete ()
{
    int p, count = 0;
    struct Node *temp, *toDelete;
    printf("Enter position\n");
    scanf("%d", &p);
    if (p == 0)
    {
        toDelete = head;
        head = head->next;
        head->prev = NULL;
        free(toDelete);
        printf("Element deleted\n");
        return;
    }
    temp = head;
    while (temp != NULL && count < p)
    {
        temp = temp->next;
        count++;
    }
    if (toDelete = NULL)
    {
        printf("Element not found\n");
        return;
    }
    toDelete = temp;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(toDelete);
    printf("Element deleted\n");
}

void main()
{
    int choice = 0;
    // clrscr();
    printf("1 Insert\n2 Display\n3 Delete\n4 Exit\n");
    while (choice != 4)
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        case 4:
            printf("Exiting\n");
            break;
        default:
            printf("Enter valid option\n");
            break;
        }
    }
}