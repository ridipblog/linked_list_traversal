#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *thrid;
    //allocate memory for nodes in the linked list in heap
    head=(struct Node *)malloc(sizeof (struct Node));
    second=(struct Node *)malloc(sizeof (struct Node));
    thrid=(struct Node *)malloc(sizeof (struct Node));
    //link frist and second nodes;
    head->data=7;
    head->next=second;
    //link second and thrid nodes;
    second->data=11;
    second->next=thrid;
    //terminate list at the thried node;
    thrid->data=66;
    thrid->next=NULL;
    linkedlisttraversal(thrid);
    return 0;
}
