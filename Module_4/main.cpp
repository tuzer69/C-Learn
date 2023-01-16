
#include <iostream>
#include "calculate.h"
#include <stdlib.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	std::cout << "********** »Ќ“≈–ј “»¬Ќџ…  јЋ№ ”Ћя“ќ– v2.0 **********" << std::endl;

    char op = ' ';
    long long a, b;

    while (op != 'q' && op != 'Q')
    {
        std::cout << "¬ведите желаемую операцию (q - выход): ";
        std::cin >> op;

        switch (op)
		
        {
        case '+':
        {
            std::cout << "¬ведите два целых числа: ";
            std::cin >> a >> b;
            std::cout << a << " + " << b << " = " << Add(a, b) << std::endl;
            break;

        }

        case '-':
        {
            std::cout << "¬ведите два целых числа: ";
            std::cin >> a >> b;
            std::cout << a << " - " << b << " = " << Sub(a, b) << std::endl;
            break;

        }

        case '*':
        {
            std::cout << "¬ведите два целых числа: ";
            std::cin >> a >> b;
            std::cout << a << " * " << b << " = " << Mul(a, b) << std::endl;
            break;

        }

        case '/':
        {
            std::cout << "¬ведите два целых числа: ";
            std::cin >> a >> b;
            if (b == 0)
            {
                std::cout << "Ќа ноль делить нельз€!" << std::endl;
                break;
            }
            else {
                std::cout << a << " / " << b << " = " << Div(a, b) << std::endl;
                break;
            }

        }

        case '^':
        {
            std::cout << "¬ведите два целых числа: ";
            std::cin >> a >> b;
            std::cout << a << " ^ " << b << " = " << Pow(a, b) << std::endl;
            break;

        }

        case '!':
        {
            std::cout << "¬ведите целое число: ";
            std::cin >> a;
            std::cout << "!" << a << " = " << Fac(a) << std::endl;
            break;

        }
        }

    }


	return 0;
}