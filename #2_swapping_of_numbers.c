#include <stdio.h>
int swap (int*, int*);
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping, First number = %d \t Second number = %d \n",x,y);
    swap(&x,&y);
    printf("After swapping, First number = %d \t Second number = %d \n",x,y);
    return 0;
}

int swap (int *a,int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
    return 0;
    
}