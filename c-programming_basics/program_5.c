#include <stdio.h>
#include <stdbool.h>
int main()
{
    //arithmetic operators
    
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)
    
    int x = 5;
    int y = 2;
    
    int q = x + y;
    int w = x - y;
    int e = x * y;
    float r = x / (float) y;
    int t = x % y;
    int z = x++;
    int u = y--;
    
    
    printf("%d\n",q);
    printf("%d\n",w);
    printf("%d\n",e);
    printf("%f\n",r);
    printf("%d\n",t);
    printf("%d\n",z);
    printf("%d\n",u);
    return 0;
}
