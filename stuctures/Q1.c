#include<stdio.h>
#include<math.h>
struct Point{
    float x,y;
};
void calculateDistance(struct Point p1, struct Point p2){
   float d=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
   printf("The distance between the two points is: %f",d);

}

int main(){

     struct Point p1,p2;
     printf("Enter the value of x for point 1: ");
     scanf("%f",&p1.x);
     printf("Enter the value of y for point 1: ");
     scanf("%f",&p1.y);
     
     printf("Enter the value of x for point 2: ");
     scanf("%f",&p2.x);
     printf("Enter the value of y for point 2: ");
     scanf("%f",&p2.y);
     
     calculateDistance(p1,p2);
}
