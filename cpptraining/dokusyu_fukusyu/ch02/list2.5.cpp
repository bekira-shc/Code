#include <iostream>
using namespace std ;

union U
{
    int a ;
    int b ;
    int c ;
};

int main()
{
    U u = {42} ;
    u.a = 1 ; 

    cout << "u.bの値は："<< u.b <<endl ;
    //cout << "u.cの値は：" << u.c <<endl ;

    u.c = 1024 ;

    cout << "u.aの値は：" << u.a <<endl ;
    //cout << "u.aの値は：" << u.c <<endl ;

}