#include<stdio.h>
    
int main()
{
  int n,b;
  scanf("%d %d",&n,&b);
  int a[n],i=0,c=0;
   while(n>0)
    {
        a[i++]=n%10;
         n=n/10;
         c++;
    }
   for(int j=b-1;j>=0;j--)
     printf("%d",a[j]);
   
   for(int j=c-1;j>=b;j--)
      printf("%d",a[j]);
   
  return 0;
}
  