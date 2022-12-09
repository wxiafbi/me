#include "me.h"

me wxi(1987, 9, 1);

// fbi = new me(1986, 11, 16);
int main(int argc, char const *argv[])
{
    // wxi = new we (1988, 9, 1);
    wxi.show();
    me *fbi = new me(1986, 11, 16);
    fbi->show();
    // std::cout << "" << std::endl;
    getchar();
    return 0;
}
