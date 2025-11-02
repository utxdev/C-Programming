#include<stdio.h>
int main()
{
    int a,b,c,d;
    a = 34;
    b = 34;
    c = 24;
    d = 24;
   printf("a==b: %d\n", a&&b);
    printf("a==d: %d\n", c&&d);
    printf("a || d: %d\n", a||d);
    printf("c || b: %d\n", c||b);


return 0;

    }
