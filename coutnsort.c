#include<stdio.h>

int main()
{ 
  int count[1000000],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  { 
      count[a[i]]++;
  }
  int j=0,b[100000];
  for(i=0;i<1000000;i++)
  {
        if(count[i]!=0)
        {
            while(count[i]--)
            {
                b[j++]=i;
            }
         }
 }
 for(i=0;i<j;i++)
    printf("%d",count[i]);
 return 0;
 }
 
