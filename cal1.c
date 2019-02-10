#include <stdio.h>
#include "function.h"
int main()
{
	int x,y,a,b;
       printf("enter a and b:");
         scanf("%d %d",&a,&b);
     printf("enter x:");
       scanf("%d",&x);
	switch(x)
    {
     case 0: y=add(a,b);
              break;

      case 1: y=a-b;
                break;
      case 2: y=a*b;
                break;
      case 3: y=a/b;
                 break;
      default: break;
   }
      return 0;
}