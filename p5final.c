include<stdio.h>
 int input()
{
        int n;
        printf("enter a number \n");
        scanf("%d",&n);
        return n;
}
int hcf(int a, int b)
{
        int value;
        for(int i=1;i<=a && i<=b;i++){
                if(a%i==0 && b%i==0){
                        value=i;
                }
        }
        return value;
}
void output(int a, int b, int value){
        printf("hcf of %d and %d is %d",a,b,value);
}
int main()
{
        int a=input();
        int b=input();
        int value=hcf(a,b);
        output(a,b,value);
        return 0;
}
