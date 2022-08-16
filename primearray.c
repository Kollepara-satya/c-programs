#include <stdio.h>
void main()
{
    int i,j,a[100],n,flag=0;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter elements into array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The prime numbers of the array are:\n");
    for(i=n-1;i>=0;i--)
    {
    if(a[i]==1)
    {
        flag=1;
        break;
    }
    else
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            flag=1;
            break;
        }
    }
    
     if(flag==0)
     printf("%d\t",a[i]);
    }


}

