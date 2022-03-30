#include <stdio.h>

int size()
{
        int n;
        printf("how many numbers to add \n");
        scanf("%d", &n);
        return n;
}
void check_composite(int n, int a[n]){
        int i;
        printf("enter the numbers \n");
        for(i=0;i<n;i++){
                if(n%a[i]){
                        scanf("%d",&a[i]);
                }
        }
}
int composite(int n, int a[n]){
        int i,sum=0;
        for(i=0;i<n;i++)
        {       
                if(a[i]==2){
                        continue;
                }       
                else if(a[i]%2==0){
                        sum+=a[i];
                }
        }       
        return sum;
}       
void output(int value){
        printf("sum = %d",value);
}       
int main(){
        int n=size();
        int a[n];
        check_composite(n,a);
        int value=composite(n,a); 
        output(value);
        return 0;
} 