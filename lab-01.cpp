// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>


int main()
{
    // Task#1
    std::cout << 1 << " " << 13 << " " << 49 << std::endl;


    // Task#2
    char sym;
    std::cin >> sym;
    std::cout << 1 << sym << 13 << sym << 49 << std::endl;


    // Task#3
    int int1, int2, int3;
    std::cin >> int1 >> int2 >> int3;
    std::cout << int1 << "  " << int2 << "  " << int3 << std::endl;


    // Task#4
    double a, x, y;
    std::cin >> a;
    x = 12*a*a + 7*a - 12;
    std::cout << "x=" << x << std::endl;
    std::cin >> x;
    y = 3*x*x*x + 4*x*x - 11*x + 1;
    std::cout << "y=" << y << std::endl;


    // Task#5
    double V, m, p;
    std::cin >> V >> m;
    p = m/V;
    std::cout << "p=" << p << std::endl;


    // Task#6
    double b;
    std::cin >> a >> b;
    x = -b/a;
    std::cout << "x=" << x;


    // Task#7
    double x1, y1, x2, y2, d;
    std::cout << "A(x1, y1)";
    std::cin >> x1 >> y1;
    std::cout << "A(x2, y2)";
    std::cin >> x2 >> y2;
    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))

    return 0;
}
