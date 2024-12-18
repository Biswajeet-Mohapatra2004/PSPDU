#include<stdio.h>
#include<math.h>
void main(){
   int ar1[20]={0};
   int ar2[20]={0};
   int ar3[20]={0};
   int sv=-1;
   for(int i=0;i<20;i++){
      printf("Enter value for %d element of ar1:",i+1);
      int num=0;
      scanf("%d",&num);
      if(num==sv){
         break;
      }
      ar1[i]=num;
   }
   for(int i=0;i<20;i++){
      printf("Enter value for %d element of ar2:",i+1);
      int num=0;
      scanf("%d",&num);
      if(num==sv){
         break;
      }
      ar2[i]=num;
   }
   for(int i=0;i<20;i++){
      ar3[i]=ar1[i]*ar2[i];
   }
   printf("x y z");
   for(int i=0;i<20;i++){
     printf("\n%d %d %d",ar1[i],ar2[i],ar3[i]);
   }
   double sum=0;
   int i=0;
   while(ar3[i]!=0){
       sum+=ar3[i];
       i+=1;
   }
   double sq=sqrt(sum);
   printf("\nThe square root of the sum of elements in z is %lf",sq);
  
}
