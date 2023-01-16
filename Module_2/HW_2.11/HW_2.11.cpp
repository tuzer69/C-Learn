#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "********** ������������� ����������� v1.0 **********" << std::endl;
    char op = ' ';
    long long a, b;

    while (op != 'q' && op != 'Q')
    {
        std::cout << "������� �������� �������� (q - �����): ";
        std::cin >> op;

        switch (op)

        {
	        case '+':
	        	{
					std::cout << "������� ��� ����� �����: ";
                    std::cin >> a >> b;
                    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
                    break;

		        }

            case '-':
            {
                std::cout << "������� ��� ����� �����: ";
                std::cin >> a >> b;
                std::cout << a << " - " << b << " = " << (a - b) << std::endl;
                break;

            }

            case '*':
            {
                std::cout << "������� ��� ����� �����: ";
                std::cin >> a >> b;
                std::cout << a << " * " << b << " = " << (a * b) << std::endl;
                break;

            }

            case '/':
            {
                std::cout << "������� ��� ����� �����: ";
                std::cin >> a >> b;
                if (b == 0)
                {
                    std::cout << "�� ���� ������ ������!" << std::endl;
                    break;
                }
                else {
                    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
                    break;
                }

            }

            case '^':
            {
                std::cout << "������� ��� ����� �����: ";
                std::cin >> a >> b;
                int result = a;
                for (int i = 1; i < b; i++)
                {
                    result *= a;
                }
                std::cout << a << " ^ " << b << " = " << result << std::endl;
                break;

            }

            case '!':
            {
                std::cout << "������� ����� �����: ";
                std::cin >> a;
                long long result = a;
                for (int i = 1; i < a; i++) {
                    result = result * i;
                }
                std::cout <<  "!" << a << " = " << result << std::endl;
                break;

            }
        }

    }

    return 0;
}
