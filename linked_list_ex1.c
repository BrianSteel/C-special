#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
    int number;
    struct linked_list *next;
};

typedef struct linked_list node;
node *head=NULL, *last=NULL;

void create_linked_list();
void print_linked_list();
void insert_at_end(int value);
void delete_item(int value);


int main()
{
    int value;

    //Create a linked list
    print_linked_list();
    printf("\nInsert or delete item from menu\nPress 1 for insert\nPress 2 for delete\nINPUT -101 to exit!!!\n");
    scanf("%d", &value);

    while (1)
    {   switch(value)
        {
                case 1:
                    create_linked_list();
                    print_linked_list();
                    printf("\nInsert or delete item from menu\nPress 1 for insert\nPress 2 for delete\nINPUT -101 to exit!!!\n");
                    scanf("%d", &value);
                    break;
                case 2:
                    delete_item(value);
                    print_linked_list();
                    printf("\nInsert or delete item from menu\nPress 1 for insert\nPress 2 for delete\nINPUT -101 to exit!!!\n");
                    scanf("%d", &value);
                    break;
                default:
                    printf("\nInsert or delete item from menu\nPress 1 for insert\nPress 2 for delete\nINPUT -101 to exit!!!\n");
                    scanf("%d", &value);

        }
            if (value==-101)
            {
                break;
            }
    }
    return 0;
}


/*
     FUNCTIONS/ METHODS USED FOR THE PROGRAM
*/

//Creates a linked list
void create_linked_list()
{
    int val;
    printf("Input a number to linked list/menu. \n");
    scanf("%d", &val);
    insert_at_end(val);
}

//Insertion operation in menu
void insert_at_end(int value)
{
    node *temp_node;
    temp_node = (node *) malloc(sizeof(node));

    temp_node->number=value;
    temp_node->next=NULL;

    //For the 1st element
    if(head==NULL)
    {
        head=temp_node;
        last=temp_node;
    }
    else
    {
        last->next=temp_node;
        last=temp_node;
    }

}

//deletion operation!
void delete_item(int value)
{
    node *myNode = head, *previous=NULL;
    int flag = 0;

    printf("Delete a number from linked list/menu. \n");

    scanf("%d", &value);

    while(myNode!=NULL)
    {
        if(myNode->number==value)
        {
            if(previous==NULL)
                head = myNode->next;
            else
                previous->next = myNode->next;

            printf("%d is deleted from list\n", value);

            flag = 1;
            break;
        }
        previous = myNode;
        myNode = myNode->next;
    }
    if(flag==0)
        printf("Key not found!\n");
}

//Prints the menu or linked list.
void print_linked_list()
{
    printf("\nYour full linked list is...\n");

    node *myList;
    myList = head;

    while(myList!=NULL)
    {
        printf(" %d  ", myList->number);

        myList = myList->next;
    }
    puts("");
}




