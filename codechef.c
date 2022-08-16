#include <stdio.h>

int main(void) 
{
    int w[4],i,count=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=0;i<4;i++)
    {
        if(w[i]>=10)
        count++;
    }
    printf("%d",count);
   
	return 0;
}

