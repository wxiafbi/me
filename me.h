#ifndef WE_H
#define WE_H
#include <iostream>
class me
{
private:
    int _year;
    int _month;
    int _day;
    /* data */
public:
    me(int year, int month, int day);
    ~me();
    void show(void);
};

me::me(int year, int month, int day)
{
    _year = year;
    _month = month;
    _day = day;
}

me::~me()
{
}
void me::show(void)
{
    std::cout << _year << "-" << _month << "-" << _day << std::endl;
}

#endif // !WE_H
