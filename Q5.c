#include<stdio.h>
int compare(int checkDigit, int arLast){
      if(checkDigit==arLast){
          printf("UPC is correct!!");
      }
      else{
          printf("UPC Is invalid!!");
      }
}
int compute(int ar[],int res){
   for(int i=0;i<11;i++){
      if(ar[i]%2!=0){
           res+=ar[i]*3;    
      }
      if(ar[i]%2==0){
          res+=ar[i];
      }
   }
   return res;

}
void main(){
   int ar[12];
   int res=0;
   printf("Enter the 12 digit upc code: ");
   for(int i=0;i<12;i++){
       printf("Enter the %d digit: ",i+1);
       scanf("%d",&ar[i]);

   }
   int result=0;
   res=compute(ar,result);
   int checkDigit=res%10;
   int arLast=ar[11];
   if(checkDigit==0){
       compare(checkDigit,arLast);
   }
   else{
      int check=10-checkDigit;
      compare(check,arLast);
     
   }
}
