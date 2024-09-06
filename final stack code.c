#include <stdio.h>
#define max 5
int stack[max];
int top = -1;
void push()
{
    int n;
    if (top == max - 1)
        printf("stack is full.\n");
    else
    {
        printf("enter element to the stack : \n");
        scanf("%d", &n);
        stack[++top] = n;
        printf("the %d is insert to the stack .\n", n);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("the stack is empty .\n");
    }
    else
    {
        int value;
        value = stack[top--];
        printf("the element %d is popped out from the stack.\n ", value);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("the stack is empty ");
    }
    else
    {
        printf("the peek value is ,%d\n", stack[top]);
    }
}
void display()
{if(top==-1)
{printf("the stack is empty .\n");}
   else
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}
void size()
{
    printf("the size of the stack is ,%d\n", top + 1);
}
void isFull()
{
    if (top >= max - 1)
        printf("the stack is not full.\n");
    else
    {
        printf("the stack is full.\n");
    }
}
void isEmpty()
{
    if (top == -1)
        printf("the stack is empty.\n");
    else
    {
        printf("the stack is not empty.\n ");
    }
}

int main()
{
    int n;
    printf("choice operation : \n");
    printf("1.push\n2.pop\n3.peek\n4.display\n5.size\n6.isFull\n7.isEmpty\n8.exit");

    while (n != 8)
    {
        printf("enter operation : \n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            size();
            break;
        case 6:
            isFull();
            break;
        case 7:
            isEmpty();
            break;
        case 8:
            break;
        default:
            printf("enter input is invalid ");
            break;
        }
        printf("\n");
    }

    return 0;
}