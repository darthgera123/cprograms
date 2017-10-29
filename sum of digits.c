#include<stdio.h>
int main()
{
        int n,a[1000];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            int rem,sum=0;
            for(int j=a[i];a[i]>0;a[i]=a[i]%10)
            {
                rem=a[i]%10;
                sum+=rem;
            }
                printf("%d\n",sum);
        }
        return 0;
}
