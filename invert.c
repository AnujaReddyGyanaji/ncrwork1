#include<stdio.h>
int main()
{
  int n,x=8;
  scanf("%d",&n);
  int b,p;
  scanf("%d %d",&b,&p);
  int arr[8]={0};
   int i=0;
  while(n>0)
  {
    arr[--x]=n%2;
    n=n/2;
    
  }
  for(int i=((b+p)-1);i>=b;i--)
    { 
         
      if(arr[i]==0)
         arr[i]=1;
      else
        arr[i]=0;
  }
 for(int j=0;j<8;j++)
   printf("%d",arr[j]);
}

   