#include <stdio.h>

struct triangle{
        float base,height,area;
};
typedef struct triangle triangle;

triangle input(){
        triangle a;
        printf("enter the base and height of the triangle \n");
        scanf("%f %f", &a.base, &a.height);
        return a;
}
triangle area(triangle a)
{
        a.area=(a.base*a.height)/2;
        return a;
}
void output(triangle T){
        printf("area of triangle is %.1f",T.area);
}
int main()
{
        triangle x=input();
        x=area(x);
        output(x);
        return 0;
}
