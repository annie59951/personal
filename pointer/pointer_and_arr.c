#include <stdio.h>

int main()
{
    int m = 15,n = 30,q = 45,z = 60; 
    int a[4] = {1,2,3,4};
    int* ope[4];
    ope[0] = &m;
    ope[1] = &n;
    ope[2] = &q;
    ope[3] = &z;
    for(int i=0;i<4;i++) {
        printf("ope[%d] = %d(int* ope[4]=>ope陣列裡面存4個*int)\n",i,*ope[i]);
    }
    printf("a = %p\t&a = %p\ta+1 = %p\t",a,&a,a+1);
    return 0;
}
