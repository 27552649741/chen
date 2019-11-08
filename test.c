#include <stdio.h>
#define N 5
int main()
{
    int i,j,k;
    int a[N];
    printf("输入插入的数%d;\n",N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&k);{
            for ( j = i; j>=0; j--)
            {
                if (a[j-1]>k)
                a[j]=a[j-1];
                else break;
            }
            a[j]=k;
                    
                
            }
       for ( i = 0; i < N; i++)
       
           printf("%d",a[i]);
           return 0;
       
            
       
    

}