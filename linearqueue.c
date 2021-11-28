#include<stdio.h>
#define QZ 5
int item;
int q[QZ];
int rear=-1;
int front=-1;
int  main()
{
    int choice;
    while(1)
    {
        printf("1. Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the element to be inserted \n");
                   scanf("%d",&item);
                   insert(item);
                   break;

            case 2: del();
                    break;

            case 3:dis();
                   break;


            case 4:exit(1);
                   break;


            default:printf("Enter the valid choice\n");
        }
    }
}
void insert(int data)
{
    if(rear==QZ-1)
    {
        printf("overflow\n");
        return;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        q[rear]=data;
    }
}
void del()
{
    if(front==-1&& rear==-1)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        printf("deleted item is %d\n",q[front]);
        front=front+1;
    }
    if(front>rear)
    {
        front=rear=-1;
    }
}
void dis()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("queue elements are\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d",q[i]);
        }
        printf("\n");
    }
}
