#include<stdio.h>
#include<stdlib.h>
struct chad
{
    char sname[30];
    int num;
    float decimal;
    struct chad *next;
};
struct chad *head=NULL;
struct chad *ptr;
struct chad *temp;
void display(struct chad *head);
int count(struct chad *head);
struct chad*insert_front(struct chad *head);
struct chad*insert_end(struct chad *head);
struct chad*insert_any(struct chad *head);
struct chad*delete_front(struct chad *head);
struct chad*delete_end(struct chad *head);
struct chad*delete_any(struct chad *head);
main()
{
    int ch,n;
    while(1)
    {
        printf("enter function to be performed:\n");
        printf("1-display\n");
        printf("2-number of nodes\n");
        printf("3-insert at the front\n");
        printf("4-insert at the end\n");
        printf("5-insert at any position\n");
        printf("6-delete at the front\n");
        printf("7-delete at the end\n");
        printf("8-delete at any position\n");
        printf("9-exit\n");
        scanf("%d",&ch);
        if(ch==1)
            display(head);
        else if(ch==2)
        {
            n=count(head);
            if(n==0)
                printf("count=0\n");
            else
                printf("count=%d\n",n);
        }
        else if(ch==3)
            head=insert_front(head);
        else if(ch==4)
            head=insert_end(head);
        else if(ch==5)
            head=insert_any(head);
        else if(ch==6)
            head=delete_front(head);
        else if(ch==7)
            head=delete_end(head);
        else if(ch==8)
            head=delete_any(head);
        else
            exit(0);

    }
}
void display(struct chad *head)
{
    if(head==NULL)
    {
        printf("linked list is empty\n");
    }
    else
    {
        printf("\n\nthe details are:\n");
         struct chad *temp;
         temp=head;
         while(temp!=NULL)
         {
            printf("---------------\n");
            printf("%s\n%d\n%0.2f\n",temp->sname,temp->num,temp->decimal);
            temp=temp->next;
         }
         printf("---------------\n\n\n");
    }
}
int count(struct chad *head)
{
    if(head==NULL)
        return(0);
    else
    {
        struct chad *temp;
        temp=head;
        int i=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            i++;
        }
        return(i);
    }
}
struct chad* insert_front(struct chad *head)
{
    struct chad *ptr;
    ptr=(struct chad*)malloc(sizeof(struct chad));
    printf("enter name:\n");
    fflush(stdin);
    gets(ptr->sname);
    printf("\nenter number:\n");
    scanf("%d",&(ptr->num));
    printf("\nenter float:\n");
    scanf("%f",&(ptr->decimal));
    printf("\n");
    if(head==NULL)
    {
        head=ptr;
        head->next=NULL;
    }
    else
    {
        ptr->next=head;
        head=ptr;
    }
    return(head);
}
struct chad* insert_end(struct chad *head)
{
    struct chad *ptr;
    ptr=(struct chad*)malloc(sizeof(struct chad));
     printf("enter name:\n");
    fflush(stdin);
    gets(ptr->sname);
    printf("\nenter number:\n");
    scanf("%d",&(ptr->num));
    printf("\nenter float:\n");
    scanf("%f",&(ptr->decimal));
    printf("\n");
    if(head==NULL)
    {
        head=ptr;
        head->next=NULL;
    }
    else
    {
        struct chad *temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
    }
    return(head);
}
struct chad* insert_any(struct chad *head)
{
    printf("enter the position to be added to:\n");
    int n;
    scanf("%d",&n);
    if(n<1)
    {
        printf("invalid input\n");
        exit(0);
    }
    int i=1;
    if(head!=NULL)
    {
        i=count(head);
    }
    if(head==NULL)
    {
        head=insert_front(head);
        printf("the node has been added at the front\n");
    }
    else if(i<n)
    {
        head=insert_end(head);
        printf("the node has been added at the end\n");
    }
    else if(i>=n)
    {
        struct chad *ptr;
        ptr=(struct chad*)malloc(sizeof(struct chad));
        struct chad *temp;
        printf("enter name:\n");
        fflush(stdin);
        gets(ptr->sname);
        printf("\nenter number:\n");
        scanf("%d",&(ptr->num));
        printf("\nenter float:\n");
        scanf("%f",&(ptr->decimal));
        printf("\n");
        struct chad *temp1;
        struct chad *temp2;
        int j;
        temp=head;
        for(j=1;j<n;j++)
        {
            temp2=temp;
            temp1=temp->next;
            temp=temp->next;
        }
        temp2->next=ptr;
        ptr->next=temp1;
        printf("the node has been added to position %d\n",n);
    }
    return(head);
}
struct chad* delete_front(struct chad *head)
{
    if(head==NULL)
        printf("No nodes available  to delete\n");
    else if(head->next==NULL)
    {
        printf("node deleted is:\n----------\n");
        printf("%s\n%d\n%f\n----------\n",head->sname,head->num,head->decimal);
        free(head);
        head=NULL;
    }
    else
    {
        struct chad *temp;
        printf("node deleted is:\n----------\n");
        printf("%s\n%d\n%f\n----------\n",head->sname,head->num,head->decimal);
        temp=head;
        head=head->next;
        free(temp);
    }
    return(head);
}
struct chad* delete_end(struct chad *head)
{
    if(head==NULL)
        printf("No nodes available  to delete\n");
    else if(head->next==NULL)
    {
        printf("node deleted is:\n----------\n");
        printf("%s\n%d\n%f\n----------\n",head->sname,head->num,head->decimal);
        free(head);
        head=NULL;
    }
    else
    {
        struct chad *temp;
        struct chad *temp2;
        temp=head;
        while(temp->next!=NULL)
        {
            temp2=temp;
            temp=temp->next;
        }
        printf("node deleted is:\n----------\n");
        printf("%s\n%d\n%f\n----------\n",temp->sname,temp->num,temp->decimal);
        free(temp);
        temp2->next=NULL;
    }
    return(head);
}
struct chad* delete_any(struct chad* head)
{
    printf("enter the node to be deleted:\n");
    int n;
    struct chad *temp,*temp1,*temp2;
    temp=head;
    scanf("%d",&n);
    int j;
    j=count(head);
    if(n<1)
    {
        printf("invalid input\n");
        exit(0);
    }
    if(head==NULL)
        printf("No nodes available to delete\n");
    else if(n==1)
        head=delete_front(head);
    else if(n>j)
        head=delete_end(head);
    else if(n<=j)
    {
        int k;
        for(k=1;k<n;k++)
        {
            temp2=temp;
            temp1=temp->next;
            temp=temp->next;
        }
        temp2->next=temp1->next;
        free(temp1);
    }
    return(head);
}
