//using pointer to int arr
#include <stdio.h>
int main()
{   int var[5] = {1,10,100,1000,10000};
    int *ip = var;
    printf("ip = %p\n",ip);
    //ip是指標，指到位置
    printf("&var = %p\tvar = %p\n",&var,var);
    //陣列本身就是一個位置，所以它的位置跟他的值是一樣的
    printf("*ip = %d\n",*ip);
    //ip標指到的值是1(var[0])
    printf("*var = %d\n",*var);
    //陣列var的值是1
    printf("var[0] = %d\n",var[0]);
    printf("----------------\n");
    //但這樣寫的話就是要陣列var[0]的值
    for(int i=0;i<5;i++) {
    printf("var[%d] = %d, *(var+%d) = %d\n",i,var[i],i,*(var+i));
    //var[i] = *(var+i)  把存與位置a+i的整數取出
    //使用*(var+i)要注意，var是指標常數，所以他的值不能被改變，不可以寫成*(var++)((var++的意思為把var+1後存給var))
    //sum = *(var++);會錯喔
    }
    printf("----------------\n");
    ip = var;
    printf("value of *ip: %d\n",*ip);
    printf("value of *ip: %d\n",*ip++);
    printf("value of *ip: %d\n",++*ip);
    printf("value of *ip: %d\n",++*ip++);
    printf("value of *ip: %d\n",++*++ip);
    //這個好難嗚嗚嗚嗚 
    
    return 0;
}
