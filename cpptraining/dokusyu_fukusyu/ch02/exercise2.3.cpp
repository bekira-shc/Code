#include <iostream>

struct S
{
    int X ;
    int Y ;
};

union U
{
    S s ;
};



int main()
{
    U u = {} ;
    u.s.X = 10 ;
    u.s.Y = 20 ;

    std::cout << u.s.X << std::endl ;
}