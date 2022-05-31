#include <stdio.h>
int main(){
  // Initializing the Radius and valuse of PI.
  int radius;
  float pi = 3.14;
  // Initializing the variables for Area and Circumference.
  float area, circumference;
  
  //Accepting the value of radius.
  printf("Enter the radius of the circle : \n");
  scanf("%d", &radius);
  
  //Calculating the are and circumference of the circle usinf the formulas: area = 2*⨅*radius and circumference = ⨅*radius*radius.
  area = 2 * PI * radius;
  circumference = PI * radius * radius;
  
  //Printing the value of area and circumference.
  printf("Area of the circle is %d  and  Circumference of the circle is %d\n", area, circumference);
  return 0;
}
