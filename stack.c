#include<stdio.h>
#include<stdlib.h>
#define Size n
int top=-1,inp_array[Size];
void Push();
void Pop();
void Show();
int main()
{
    int choice,n;
    printf("\nEnter the size of the stack:");
    scanf("%d",&n);
    while(1)
    {
      printf("\nOperation peformed in the stack");
      printf("\n1.Push\n2.Pop\n3.Show\n4.End");
      printf("\nEnter the choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:Push();
        break;
        case 2:Pop();
        break;
        case 3:Show();
        break;
        case 4:exit(0);
        default:
      }
    }
}
