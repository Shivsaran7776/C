#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#define size 10

struct node

{
  int data;
  struct node *next;

};

struct node *head[size]={NULL},*c;
void insertnode();
void find();
int display();

int main()

{
    int choice;

    while(1)

    {

printf("\n1.Insert the data\n2.Display \n3.find the position\n4.Exit\nEnter choice:");

scanf("%d",&choice);

switch(choice)

{

    case 1:

insertnode();

break;

    case 2:

display();

break;

    case 3:

find();

break;

    case 4:exit(0);

    default:

    printf("Not a valid input!!");

}

}

}

void insertnode()

{

    int i,key;

    printf("Enter a value to insert into hash table: ");

    scanf("%d",&key);
    i=key%size;                //calculate hash key


    struct node * newnode=malloc(sizeof(struct node));   //allocate memory for newnode


    newnode->data=key;

    newnode->next = NULL;

    if(head[i] == NULL)

    head[i] = newnode;

    else

    {

c=head[i];

while(c->next != NULL)

{

   c=c->next;     //traversal

}

c->next=newnode;   //add the node at the end

    }

}

void find()

{

    int val,j;

    printf("Enter the element to be searched:");

    scanf("%d",&val);

    j=val%size;

    if(head[j] == NULL)

    printf("Element not found!");

    else

    {

for(c=head[j];c!=NULL;c=c->next)        //range upto null

{

    if(c->data == val)

{

    printf("Search element found in position %d",j);

    break;

}
else {
    printf("\nElement not available");
}
}
}
}

int display()

{

    int k;

    for(k=0;k<size;k++)

  {

   printf("\nIndex of %d: ",k);

       if(head[k] == NULL)

       {

       printf("NULL\n");

       }

       else

       {

      for(c=head[k];c!=NULL;c=c->next)

      printf("%d  ",c->data);

       }
       printf("\n");
   }
   return 0;

}


