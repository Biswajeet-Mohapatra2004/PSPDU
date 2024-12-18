#include<stdio.h>
#include<string.h>
int div(int a,int b){
    static int count=0;
    if(a==0){
       return count;
    }
    else{
       count+=1;
       div(a-b,b);
    }
}
int func(int n){
   printf("%d\n",n);
   if(n==0){
     return 1;
   }
   else{
     int d= 4*func(n-2);
     printf("%d\n",n);
     return d;
   }
}

// write a c program to print a word in reverse order
void printword(char ch[],int size){
   if(size<0){
     return;
   }
   else{
     printf("%c",ch[size]);
     printword(ch,size-1);
   }
}
// wap that takes n words as input and reverses them
void reverse_array(char ch[],int size){
   if(size<0){
     return;
   }
   else{
     printf("%s",ch[size][]);
     printword(ch,size-1);
   }
}

int main(){
  printf("Enter n value: ");
  int n=0;
  scanf("%d",&n);
  char ch[n][100];
  for(int i=0;i<n;i++){
     printf("Enter a word: ");
     fgets(ch[i],sizeof(ch[i][100]),stdin);
  }
  
  int size=strlen(ch)-1;
  reverse_array(ch,size);
  

}


