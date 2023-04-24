
// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char roman[80];
    int i,j,a[80];
    printf("Enter your roman numerals:");
    scanf("%s",&roman);
    int n=strlen(roman);
    for(i=0;i<n;i++)
    {
        switch(roman[i])
        {
            case 'V':
                a[i]=5;
                //return 5;
                break;
            case 'I':
                a[i]=1;
                //return 1;
                break;
            case 'X':
                a[i]=10;
                //return 10;
                break;
            case 'D':
                a[i]=500;
                //return 500;
                break;
            case 'C':
                a[i]=100;
                //return 100;
                break;
            case 'L':
                a[i]=50;
                //return 50;
                break;
            case 'M':
                a[i]=1000;
                //return 1000;
                break;
            default:
                a[i]=0;
                //return 0;
                break;
        }
    }
    int sum1=0;

    for(i=0;i<n;i++)
    {
        if(a[i]>=a[i+1])
        {
           sum1=sum1+a[i];
        }
        else
        {
            sum1=sum1+(a[i+1]-a[i]);
            i++;
        }
       // printf("%d",sum1);
    }
    printf("%d",sum1);

}
