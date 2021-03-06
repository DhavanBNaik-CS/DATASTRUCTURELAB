#include <stdio.h>
#include <stdlib.h>
#define max 3
int front = 0, rear = 0;
int queue[max];

void insert()
{
    if (rear == max)
        printf("Queue is full\n");
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &queue[rear]);
        rear++;
    }
}

void delete ()
{
    if (front == rear)
        printf("Queue is empty\n");
    else
    {
        printf("The deleted element: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if (rear == 0 || front == rear)
        printf("Queue is empty\n");
    else
    {
        printf("The elements of queue are: ");
        for (i = front; i < rear; i++)
            printf("%d\t", queue[i]);
        printf("\n");
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            delete ();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid Input");
        }
    }
}
