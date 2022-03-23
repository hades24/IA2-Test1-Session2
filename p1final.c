#include <stdio.h>
 int input()
{
  int n;
  printf("enter sides of triangle \n");
  scanf("%d", &n);
  return n;
}
int sides(int a, int b, int c){
  if(a==b || b==c || a==c){ 
    return 1;
  }
  else{
    return 0;
  }
}
void output(int value)
{
  if(value==1){
    printf("given triangle is scalene");
  }
  else{
    printf("given triangle is not scanlene");
  }
}
int main()
{
  int a=input();
  int b=input();
  int c=input();
  int value=sides(a,b,c);
  output(value);
  return 0;
}