#ifndef DATA_H
#define DATA_H
#include <iostream>
class data
{
private:
    int jiu;

public:
    data(/* args */);
    ~data();
    int Autoincrement(void);
    int Self_decrement(void);
    int showp(void);
};

data::data()
{
    std::cout << "/* message */" << std::endl;
    jiu = 1;
}

data::~data()
{
}
int data::Autoincrement(void)
{
    jiu++;
    return jiu;
}
int data::Self_decrement(void)
{
    jiu--;
    return jiu;
}
int data::showp(void)
{
    std::cout << jiu << std::endl;
    return jiu;
}


#endif // !1