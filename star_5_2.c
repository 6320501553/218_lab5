#include<stdio.h>
int main()
{
    int n,i,j,m,li,k=0;
    scanf("%d",&n);
    if(n%2==1)
        m=n;
    else
        m=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            li=m/2;
            if(i==0||i==(n-1)) //บรรทัดที่แรกและสุดท้าย
            {
                if(j==li++)
                    printf("*");
                else
                    printf("_");
            }
            else if((i==(li+1)&&(n%2==0))||i==li) //บรรทัดตรงกลาง
            {
                if(j==0||j==(m-1))
                    printf("*");
                else
                    printf("_");
            }
            else if(i<=li) //บรรทัดที่สองและรองสุดท้าย
            {
                if(j==(li-k)||j==(li+k))
                    printf("*");
                else
                    printf("_");
            }
            /*else
            {
                if(i<(li+1)||i>li)
                {
                    if(j==(n)||j==(n-2))
                        printf("*");
                    else
                        printf("_");
                }
            }*/
        }
        printf("\n");
        k++;
    }
    return 0;
}
