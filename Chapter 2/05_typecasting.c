#include <stdio.h>

int main(){
    int n = 45;
    float m = 32.23;
    m = (float)n;
    n = (int) m; // convert the data type to int
    printf("%d\n", n);
    printf("%f",m);
    return 0;
}