#include<stdio.h>
int main()
{
    int n,i=1,j,k=1,m=0,u=0;
    scanf("%d",&n);
    while(1)
    {
        if(k%2==0||k%3==0||k%5==0)
        {
            u=i;
            i++;
            m=k;
            k++;
        }
        else if(k%2!=0&&k%3!=0&&k%5!=0)
        {
            i=i+0;
            k++;
        }
        printf("%d %d\n",u,m);
        if(n==u)
        {
            printf("\n%d",m);
            break;
        }
    }
    return 0;
}
