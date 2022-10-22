#include <stdio.h>
#include <string.h>
struct me
{
    /* data */
    char name[20]; //姓名
    int num;       //学号
    float score;   //成绩
};

struct me wxi;

int main(int argc, char const *argv[])
{
    strcpy(wxi.name, "wx");
    wxi.num = 1;
    wxi.score = 99.99;
    printf("xiaojiu\r\n");
    printf("%s\r\n", wxi.name);
    printf("0x%x\r\n", &wxi.name);
    printf("0x%x\r\n", &wxi.name[0]);
    printf("0x%x\r\n", &wxi.name[1]);
    printf("0x%x\r\n", &wxi.name[2]);
    printf("0x%x\r\n", &wxi.name[3]);
    printf("0x%x\r\n", &wxi.num);
    getchar();
    return 0;
}
