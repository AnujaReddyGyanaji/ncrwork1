#include<stdio.h>
#include<math.h>
int main()
{
   float si,ca,sa,q,m,x,x1,x2,x3,x4;
   float r;
   scanf("%f",&r);
   int t=10;int p=500000;
   si=(p*t*r)/100;
   printf("simple interest is %0.4lf\n",si);
   x=(1+r/100);
   x1=pow(x,t);
   ca=p*x1;
   printf("compound interest anually %f\n",ca);
   x2=pow(x,t/2);
   sa=p*x2;
   printf("compound interest semianually %f\n",sa);
   x3=pow(x,t/4);
   q=p*x3;
   printf("compound interest quarterly %f\n",q);
    x4=pow(x,t/12);
    m=p*x4;
   printf("compound interest monthly %f\n",m);
   
   
}

   