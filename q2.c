#include <stdio.h>

void main(){
   
   // pointer initialization
   int a=511,b;
   char *p;
   p=&a;
   b=*p;
   printf("%d%d%d",a,b,&p);
}
