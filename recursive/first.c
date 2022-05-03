#include <stdio.h>

//1+2+3+4+5+...+n
int sigma(int n) {
    if(n==1)return 1;
    return n+sigma(n-1);
}
int main()
{
    int ans = sigma(5);
    printf("%d",ans);
    return 0;
}
