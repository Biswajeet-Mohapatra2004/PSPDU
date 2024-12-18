#include<stdio.h>
struct rectangle{
   float length;
   float width;
};
void find_area(struct rectangle *r){
   
  float area=r->length*(r->width); 
  float perimeter=2.0*(r->length+r->width);
   
  printf("Length: %f\n",r->length);
  printf("Width: %f\n",r->width);
  printf("Area: %.2f\n",area);
  printf("Perimeter: %.2f\n",perimeter);
   
}
void initialise_rectangle(struct rectangle *r){
    printf("Enter the length of the rectangle: ");
    scanf("%f",&r->length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f",&r->width);
}

int main(){
   struct rectangle r;
   initialise_rectangle(&r);
    find_area(&r);
   return 0;
}
