#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void insertbeginning();
void insertlast();
void insert_specified();
void beginning_delete();
void last_delete();
void delete_specified();
int  display();
void main()
{
    int ch;
    int data;
    while(1)
    {
        printf("choose the option\n");
        printf("\n 1.insert_beginning \n 2.insert_last \n 3.insert position \n 4.beginning_delete \n 5.last_delete \n 6.delete_specified \n 7.display");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the item to insert\n");
                    scanf("%d",&data);
                    insertbeginning(data);
                    break;
            case 2: printf("Enter the item to insert at last\n");
                    scanf("%d",&data);
                    insertlast(data);
                    break;
            case 3: printf("Enter the item to specified position\n");
                    scanf("%d",&data);
                    insert_specified(data);
                    break;
            case 4: beginning_delete();
                    break;
            case 5: last_delete();
                    break;
            case 6: delete_specified();
                    break;
            case 7: display();
                    break;
        }
    }
}

void insertbeginning(int item)

{

struct node *ptr = (struct node *)malloc(sizeof(struct node));

if(head==NULL)

{

ptr->next = NULL;

ptr->prev=NULL;

ptr->data=item;

head=ptr;

}

else

{

ptr->data=item;

ptr->prev=NULL;

ptr->next = head;

head->prev=ptr;

head=ptr;

}

}
void insertlast(int item)

{

struct node *ptr = (struct node *) malloc(sizeof(struct node));

struct node *temp;

ptr->data=item;

if(head == NULL)

{

ptr->next = NULL;

ptr->prev = NULL;

head = ptr;

}

else

{

temp = head;

while(temp->next!=NULL)

{

temp = temp->next;

}

temp->next = ptr;

ptr ->prev=temp;

ptr->next = NULL;

}

printf("\nNode Inserted\n");

}

void insert_specified(int item)

{

struct node *ptr = (struct node *)malloc(sizeof(struct node));

struct node *temp;

int i, loc;

printf("\nEnter the location\n");

scanf("%d",&loc);

temp=head;

for(i=0;i<loc;i++)

{

temp = temp->next;

if(temp == NULL)

{

printf("\ncan't insert\n");

return;

}

}

ptr->data = item;

ptr->next = temp->next;

ptr -> prev = temp;

temp->next = ptr;

temp->next->prev=ptr;

printf("Node Inserted\n");

}
void beginning_delete()

{

struct node *ptr;
if(head == NULL)

{

printf("\n UNDERFLOW\n");

}

else if(head->next == NULL)

{

head = NULL;

free(head);

printf("\nNode Deleted\n");

}

else

{

ptr = head;

head = head -> next;

head -> prev = NULL;

free(ptr);

printf("\nNode Deleted\n");

}

}

void last_delete()

{

struct node *ptr;

if(head == NULL)

{

printf("\n UNDERFLOW\n");

}

else if(head->next == NULL)

{

head = NULL;

free(head);

printf("\nNode Deleted\n");

}

else

{

ptr = head;

if(ptr->next != NULL)

{

ptr = ptr -> next;

}

ptr -> prev -> next = NULL;

free(ptr);

printf("\nNode Deleted\n");

}

}

void delete_specified( )

{

struct node *ptr, *temp;

int val;

printf("Enter the value");

scanf("%d",&val);

temp = head;

while(temp -> data != val)

temp = temp -> next;

if(temp -> next == NULL)

{

printf("\nCan't delete\n");

}

else if(temp -> next -> next == NULL)

{

temp ->next = NULL;

printf("\nNode Deleted\n");

}

else

{

ptr = temp -> next;

temp -> next = ptr -> next;

ptr -> next -> prev = temp;

free(ptr);

printf("\nNode Deleted\n");

}

}
int display()

{

struct node *ptr;

if(head == NULL)

{

printf("\nEmpty List\n");

}

else

{

ptr = head;

while(ptr != NULL)

{

printf("%d\n",ptr->data);

ptr=ptr->next;

}

}

}


