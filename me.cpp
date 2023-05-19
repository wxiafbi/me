#include "me.h"
#include "data.h"
me wxi(1987, 9, 1);
data a;
// fbi = new me(1986, 11, 16);
float b = 3.14;
float *bb;
int main(int argc, char const *argv[])
{
    // wxi = new we (1988, 9, 1);
    wxi.show();
    me *fbi = new me(1986, 11, 16);
    fbi->show();
    bb = &b;
    std::cout << bb << std::endl;
    std::cout << *bb << std::endl;
    a.showp();
    for (size_t i = 0; i < 98; i++)
    {
        /* code */
        a.Autoincrement();
    }

    a.showp();
    // std::cout << "" << std::endl;
    getchar();
    return 0;
}
