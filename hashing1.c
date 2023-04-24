#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
//#define TABLE_SIZE 10

struct node
{
int data;
struct node *next;
};
void insert(int s);
int display(int m);


int main()

{
   int opt,n;
   printf("Enter the limits of array:");
   scanf("%d",&n);

    while(1)

    {

printf("\n1.Insert\n2.Display\n3.Exit\nEnter choice:");

scanf("%d",&opt);

switch(opt)

{

    case 1:

insert(n);

break;

    case 2:

display(n);

break;

    case 3:exit(0);

    default:

    printf("Enter Valid Choice!");

}

}

}
struct node *head[]={NULL},*c;
void insert(int s)

{

    int i,key;

    printf("Enter a value to insert into hash table: ");

    scanf("%d",&key);

    i=key%s;

   struct node *newnode=malloc(sizeof(struct node));

    newnode->data=key;

    newnode->next = NULL;

    if(head[i] == NULL)

     head[i] = newnode;

    else

    {

      c=head[i];

  while(c->next != NULL)

{

   c=c->next;

}

c->next=newnode;

    }

}

int display(int m)

{

    int j;

    for(j=0;j<m;j++)

  {

   printf("\nEntries at index %d: ",j);

       if(head[j] == NULL)

       {

       printf(" ");

       }

       else

       {

      for(c=head[j];c!=NULL;c=c->next)

      printf("%d->",c->data);
       }
      printf("NULL \n");
  }

}
