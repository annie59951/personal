#include <stdio.h>
int Fibonacci(int n) {
    if(n==1)return 0;
    if(n==2)return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    int ans = Fibonacci(13);
    printf("%d",ans);
    return 0;
}
