#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // 标准库中定义了一个数据的最大，最小值
    cout << "int" << endl;
    cout << "Max int value " << numeric_limits<int>::max() << endl;
    cout << "Min int value " << numeric_limits<int>::min() << endl;
    cout << "Lowest int value " << numeric_limits<int>::lowest() << endl;

    cout << "\ndouble " << endl;
    cout << "Max double value " << numeric_limits<double>::max() << endl;
    cout << "Min double value " << numeric_limits<double>::min() << endl;
    cout << "Lowest double value " << numeric_limits<double>::lowest() << endl;

    // 可以手动声明一个无穷，并且用函数去检验它是否是无穷
    double n = numeric_limits<double>::infinity();
    
    cout << "\nThe infinity is " << n << endl;
    cout << std::isinf(n) << endl;
    cout << std::isnan(n) << endl;
    return 0;
}
