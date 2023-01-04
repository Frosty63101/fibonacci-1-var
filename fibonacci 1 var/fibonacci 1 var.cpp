#include <iostream>
#include<cmath>

int fibonacci(float n) {
    if (n == 1) {
        n = 2;
    }
    else if(n != 1) {
        n = n + (n / ((1 + sqrt(5)) / 2));
        n = round(n);
    }
    return n;
}

int main()
{
    float n{ 1 };
    std::cout << "0\n" << n << "\n" << n << "\n";
    while (n < 63245986) {
        n = fibonacci(n);
        std::cout << n << "\n";
    }
}

