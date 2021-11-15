#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void del();
void display();

int queue_array[MAX];

int rear=-1;
int front=-1;

int main()
{

    int ch;
    while(1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter Your Choice :\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("\nInvalid choice\n");


        }
    }
}

void insert()
{
    int add_item;
    if(rear==MAX-1)
    {
        printf("\nQueue overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
            printf("\nInsert the element in the queue:\n");
            scanf("%d",&add_item);
            rear=rear+1;
            queue_array[rear]=add_item;

    }

}
void del()
{
    if(front==-1 || front>rear)
    {
        printf("\nQueue underflow\n");
    }
    else
    {
        printf("\nDeleted element is:%d\n",queue_array[front]);
        front=front+1;

    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nQueue is : \n");
        for(i=front; i<=rear; i++)
        {
            printf("%d\t",queue_array[i]);

        }
        printf("\n");
    }
}