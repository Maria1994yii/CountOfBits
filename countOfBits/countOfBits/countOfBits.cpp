// countOfBits.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int count_of_one(unsigned int num);
int count_of_zero(unsigned int num);

int main()
{
    unsigned int num;
    

    std::cin >> num;
    
    std::cout << "count of 1 equals "<< count_of_one(num)<<std::endl;
    std::cout << "count of 0 equals " << count_of_zero(num) << std::endl;
}

int count_of_one(unsigned int num)
{
    int count_of_bit_one = 0;
    int bit;

    while (num >= 1)
    {
        bit = num % 2;
        if (bit == 1)
        {
            count_of_bit_one++;
        }
        num /= 2;
    }

    return count_of_bit_one;
}



int count_of_zero(unsigned int num)
{
    int count_of_bit_zero = 0;
    int bit;

    while (num >= 1)
    {
        bit = num % 2;
        if (bit == 0)
        {
            count_of_bit_zero++;
        }
        num /= 2;
    }

    return count_of_bit_zero;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
