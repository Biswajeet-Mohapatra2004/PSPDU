#include<stdio.h>
#include<string.h>

int hydroxide(char str[]){
   char secondlast=str[strlen(str)-3];
   char last=str[strlen(str)-2];
   if(secondlast=='O' && last=='H'){
      return 1;
   }
   else{
      return 0;
   }

}


void main(){
   char str[100];
   printf("Enter a chemical equation: ");
   fgets(str,100,stdin);
   int res=hydroxide(str);
   printf("%d",res);
   
 
}

