#include <iostream>

struct product
{
    int id ;
    int price ;
    int stock ;
};

void show_product(product p)
{
    std::cout << "商品ID：　" << p.id << std::endl ;
    std::cout << "単価：　" << p.price << std::endl ;
    std::cout << "在庫数：　" << p.stock << std::endl ;
}

int main()
{
    /*product pen ;

    pen.id = 0 ;  pen.price = 100 ;  pen.stock = 200 ;
    */

    product pen =
    {
       0 ,
       100 ,
       200 ,
    };

    show_product(pen) ;

}