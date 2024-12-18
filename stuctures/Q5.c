#include<stdio.h>

struct element_t{
   int atn;
   char name[20];
   char symbol[10];
   char class[20];
   float weight;
   int ar[7];
  
};
void print_element(struct element_t *element){
    printf("\n");
    printf("%d %s %s %s %f ",element->atn,element->name,element->symbol,element->class,element->weight);
    for(int i=0;i<7;i++){
      printf("%d ",element->ar[i]);
      
   }

}
void scan_element(struct element_t *element){
   printf("Enter the atomic number,name,symbol,classname,weight: ");
   scanf("%d %s %s %s %f",&element->atn,&element->name,&element->symbol,&element->class,&element->weight);
   
   for(int i=0;i<7;i++){
      printf("Enter the number of electrons in orbit: %d\n",i);
      scanf("%d",&element->ar[i]);
   }
   print_element(element);
   
}
int main(){
   struct element_t element;
   scan_element(&element);
}
