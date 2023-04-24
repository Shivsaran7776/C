#include<stdio.h>
#include<conio.h>
void main()
{
    int **a,i,j,n,temp;
    int rowlower=0,collower=0,rowupper,colupper;
    printf("\n Enter the sq matrix no: ");
    scanf("%d",&n);
    a=(int**)malloc(n*n*sizeof(int*));
    printf("\n Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        a[i]=(int*)malloc(n*sizeof(int));

        for(j=0;j<n;j++)
        {
            scanf("%d",&(*(*(a+i)+j)));
        }
    }
    printf("\n The matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(*(a+i)+j));
        } printf("\n");
    }
    //transpose of matrix
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   if(i!=j)
            {
            temp=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(a+j)+i);
            *(*(a+j)+i)=temp;
            }
        }
    }
    //anti clockwise rotating by 90 degree
    for(j=0;j<n;j++)
    {
        for(i=0;i<n/2;i++)
        {
            temp=*(*(a+i)+j);
            *(*(a+i)+j)=a[n-i-1][j];
            a[n-i-1][j]=temp;
        }
    }
    printf("\n Matrix rotated by 90 Degree anticlockwise: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(*(a+i)+j));
        } printf("\n");
    }
}
