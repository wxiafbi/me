#include <stdio.h>
#include <stdlib.h>
//定义结构体
struct student
{
	int num;
	char name[20];
	char sex;
};

int main()
{
	//定义结构体数组
	struct student sarr[3] = { 1001,"wr1",'m',1003,"wr2",'m',1005,"wr3",'m' };
	struct student *p;//定义结构体指针
	char i;
	p = sarr;//数组本身就是地址，不用取地址
	int num;
	num = p->num++;//num=p->num;p->num=p->num+1,优先级->的优先级高于++
	printf("num=%d,p->num=%d\n",num,p->num);
    printf("0x%x\r\n",sarr);
    for(i=0;i<3;i++)
	{
        printf("0x%x\r\n",sarr[i]);
    }
	//p->num上一步已经加一
	num = p++->num;//num=p->num，p=p+1
	printf("num=%d,p->num=%d\n", num, p->num);
    getchar();
	return 0;
}