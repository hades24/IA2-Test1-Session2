#include<stdio.h>
#include <math.h>
 int input(){
   int n;
   printf("enter the base and height for triange \n");
   scanf("%d", &n);
   return n;
 }
int area(int a, int b){ 
  float value=a*b/2;
  return value;
}
void output(float value) 
{
  printf("area of the triangle is %f",value);
}
int main()
{
  int a=input();
  int b=input();
  float value=area(a,b);
  output(value);
  return 0;
}