#include <iostream>
using namespace std;

int main()｛

    int a = 3, b = 4, c = 5；



    int Num_1 = ++a >= b ？ 3 ： 4；

    int Num_2 = b >= c-- ？ 4 ： 5；
    int Num_3 = Num_1 == Num_2 ？ 1 ： 0；

    int Num_4 = Num_2%3；

    printf("%d\n", Num_1);
    return 0；

}