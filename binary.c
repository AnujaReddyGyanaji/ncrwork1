#include<stdio.h>
void binary(int n)
{
   
   int b[100],i=0;
   while(n>0)
    {
      b[i]=n%2;
      n=n/2;
      i++;
     }
    for(int j=i-1;j>=0;j--)
     printf("%d",b[j]);
   printf("\n");
}

int main()
{ 
  int n;
  scanf("%d",&n);
  printf("binary value is ");
   binary(n);
  printf("hex value is %X",n);
  return 0;
   
}
  
  