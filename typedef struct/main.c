#include <stdio.h>
typedef struct arr_ptr {
    int *stu[4];
    int *teacher[5];
}arr_t;
/*typedef struct func_ptr {
    int *func(int,int);
}*/
typedef struct teacher {
    char name[15];
    int class_num;
    int salary;
    int age;
    char sex[10];
}teacher_t;
//這個資料夾裡面有這些項目(5個)，我們把這個資料夾稱為teacher_t

typedef struct stu {
    char name[15];
    int num;
    int score;
    int age;
    char sex[10];
}stu_t;
int main()
{
    teacher_t teach[4];
    //teacher_t是資料夾，teach[4]指的是裡面有4個老師
    stu_t stu[5];
    //stu_t是資料夾，stu[5]指的是裡面有5個學生
    snprintf(teach[0].name,sizeof(teach[0].name),"CCH");
    //把CCH個老師存進去把CCH個老師存進去teach[0].name，snprintf可以控制字串不要超過這個大小
    printf("%s\n",teach[0].name);
    for(int i=0;i<4;i++) {
        teach[i].class_num = 100+i;
        printf("教室分派: M%d\n",teach[i].class_num);
    }
    for(int i=0;i<5;i++) {
        stu[i].num = 1029001+i;
        printf("資工系學號 :%d\n",stu[i].num);
    }
   
    return 0;
}
