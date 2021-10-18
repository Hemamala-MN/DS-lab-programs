#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int stack[100];
int top=-1;
void push(int);
int pop();
void display();
int main()
{
    int choice;
    int num1=0,num2=0;
    while(1)
    {
        printf("select the choice given below\n");
        printf("\n Enter 1 to push the elements into stack");
        printf("\n Enter 2 to pop the elements from stack");
        printf("\n Enter 3 to display the elements of stack");
        printf("\n Enter 4 to exit from stack");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("Enter the  element to be pushed\n");
                scanf("%d",&num1);
                push(num1);
                break;
            }
        case 2:
            {
                num2=pop();
                printf("%d is the popped element\n",num2);
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                exit(1);
                break;
            }
        default:
            {
                printf("The choices are invalid\n");
                break;

            }

        }
    }



}
void push(int element)
{
    if(top==99)
    {
        printf("The stack is full\n");
        exit(1);
    }
    top=top+1;
    stack[top]=element;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    return (stack[top--]);
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
