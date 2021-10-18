#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 100

void push(int);
void pop();
void display();

int stack[SIZE],top = -1;

void main ()
{
    int value, choice;
    clrscr;
    while(1){
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("enter Your Choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter the value to be inserted: ");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            
            defualt : printf("\nWrong selection!!! Try again!!!");
        }
    }
}

void push (int value){
    if(top == SIZE-1)
        printf("\nStack is Full!!! Instertion is not possible!!!");
    else{
        top++;
        stack[top]=value;
        printf("\nInsertion Success!!!");
    }
}

void pop(){
    if(top==-1)
        printf("\nStack is empty!!! Deletion is not possible!!");
    else{
        printf("\nDeleted : %d",stack[top]);
        top--;
    }
}

void display(){
    if(top == -1)
        printf("\nStack is Empty!!!");
    else{
        int i;
        printf("\nStack elements are : \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
    }
}