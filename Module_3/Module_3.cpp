#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int op = 0;

    std::cout << "********** Шифровальфик v1.0 **********" << std::endl;
    std::cout << std::endl;
      
    while (op != 3)
    {
        std::cout << "Выберите операцию: \n1 - Шифрование\n2 - Дешифрование\n3 - Выход" << std::endl;
        
        std::cin >> op;

        switch (op)

        {

        case 1: {

            char str[255]{};
            char crypt_str[255]{};
            int shift_str = 0;

            std::cout << "Введите сроку для шифрования: ";
            std::cin >> str;
            std::cout << "Введите сдвиг шрифта (положительное число): ";
            std::cin >> shift_str;

            if (shift_str > 25)

            {
                shift_str %= 25;
            }

            int str_len = strlen(str);

       		for (int i = 0; i < str_len; ++i)
                {
                   if (str[i] >= 65 && str[i] <= 90)
                    {						
                       crypt_str[i] = str[i] - shift_str > 90 ? 
                           ((str[i] + shift_str) - 90) + 65 : str[i] + shift_str;
                    }
                    else if (str[i] >= 97 && str[i] <= 122)
                    {
                       crypt_str[i] = str[i] + shift_str > 122 ? 
                           ((str[i] + shift_str) - 122) + 97 : str[i] + shift_str;
                    }
                    else
                    {
	                    continue;
                    }
                    
                }

                crypt_str[str_len] = '\0';
                std::cout << "Шифрование выполнено: " << crypt_str << std::endl;

        		break;

				}

        case 2: {

            char str[255]{};
            char crypt_str[255]{};
            int shift_str = 0;

            std::cout << "Введите сроку для расшифровки: ";
            std::cin >> crypt_str;
            std::cout << "Введите сдвиг шрифта (положительное число): ";
            std::cin >> shift_str;

            int str_len = strlen(crypt_str);

            if (shift_str > 25)
            {
                shift_str %= 25;
            }

            for (int i = 0; i < str_len; ++i)
            {
                if (crypt_str[i] >= 65 && crypt_str[i] <= 90)

                {
                    str[i] = crypt_str[i] - shift_str < 65 ?
                        90 - (65 - (crypt_str[i] - shift_str)) : crypt_str[i] - shift_str;
                }

                else if (crypt_str[i] >= 97 && crypt_str[i] <= 122)

                {
                	str[i] = crypt_str[i] - shift_str < 97 ?
                            122 - (97 - (crypt_str[i] - shift_str)) : crypt_str[i] - shift_str;
                }

                else

                {
                    continue;
                }

            }
            str[str_len] = '\0';
            std::cout << "Расшифровка выполнена: " << str << std::endl;

            break;

	        }
        }
    }


    std::cout << std::endl;
    std::cout << "********** Хорошего дня! **********" << std::endl;
}
