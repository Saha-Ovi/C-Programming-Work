#include<stdio.h>
int main()
{ 

    int i,sum=0,n;
    scanf("%d",&n);
    for (i=1;i<=n;i+=1)
    {
        sum+=i;
        
    }
    printf("%d\n",sum);




    return 0;
}