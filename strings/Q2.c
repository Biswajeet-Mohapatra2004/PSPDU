#include<stdio.h>
#include<string.h>

void main(){
  
   char str[100];
   printf("Enter a string: ");
   fgets(str,100,stdin);
   char* token = strtok(str, " ");
   int max=0;
   int wordno=0;
   int length=0;
   while (token != NULL) {
        length=strlen(token);
        if(length>max){
           max=length;
           break;
        }
       
        wordno+=1;
        token = strtok(NULL, " ");
   }
   int i=0;
   printf("largest word: ");
   while(token !=NULL){
       if(i==wordno){
          printf("%s", token);
          break;
       }
       i++;
      printf("%s", token);
      token = strtok(NULL, " ");
   }
   
 
  
}
