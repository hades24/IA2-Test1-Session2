#include <stdio.h>

int input()
{
  int n;
  printf("enter a number \n");
  scanf("%d",&n);
  return n;
}
int comp(int n)
{
  if(n==0 || n==1){
    return 1;
  }
  else{
    for(int i=2;i<=n/2;++i){
      if(n%i==0){
        return 2;
      }
      else{
        return 2;
      }
    }
  }
}
void output(int n, int value){
  if(value==1){
    printf("0 and 1 are not considered as prime or composite");
  }
  else if(value==2){
    printf("%d is a prime number",n);
  }
  else{
    printf("%d is a composite number",n);
  }
}
int main()
{
  int n=input();
  int x=comp(n);
  output(n,x);
  return 0;
}