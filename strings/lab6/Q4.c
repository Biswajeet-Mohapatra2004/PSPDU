#include<stdio.h>
#include<string.h>

void plural(char str[],char str2[],int n){
   if(str[n-1]=='y'){
      int i=0;
      for(i=0;i<strlen(str)-2;i++){
         str2[i]=str[i];
      }
      str2[i]='i';
      str2[i+1]='e';
      str2[i+2]='s';
   }
   else if((str[n-2]=='s') || (str[n-3]=='c' && str[n-2]=='h') ||  (str[n-3]=='s' && str[n-2]=='h')){
       strcpy(str2,str);
       char es[]="es";
       if(str2[n]=='\n'){
          str2[n]='\0';
       }
       strcat(str2,es);
       printf("%s",str2);
   }
   else{
      char s[]="s";
      strcpy(str2,str);
      strcat(str2,s);
   }
}

void main(){
   char str[100];
   char str2[100];
   printf("Enter a String: ");
   fgets(str,100,stdin);
   plural(str,str2,strlen(str)-1);
 
}

