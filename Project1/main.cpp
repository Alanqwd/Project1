#include <iostream>
int main()





//Задание 1
{
    setlocale(LC_ALL, "ru");
    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds == tens || hundreds == units || tens == units)
        {
            count++;
        }
    }

    std::cout << "Количество чисел с двумя одинаковыми цифрами: " << count;


    return 0;
}





//Задание 2
{
    setlocale(LC_ALL, "ru");
    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        int hundreds = i / 100;
        int tens = (i / 100) % 10;
        int units = i % 10;

        if (hundreds != tens || hundreds != units || tens != units)
        {
            count++;
        }
    }

    std::cout << "Количество чисел с разными цифрами: " << count;

    return 0;
}




//Задание 3

{
    std::string number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] != '3' && number[i] != '6')
        {
            std::cout << number[i];
        }
    }

    return 0;
}





//Задание 4 
{
    int A;
    for (int B = 1; B <= A; B++)
    {
        if (A % (B * B) == 0 && A % (B * B * B) != 0)
        {
            std::cout << B;
        }
    }
    return 0;
}





//Задание 5
{
    setlocale(LC_ALL, "ru");
    int a;
    std::cout << "Введите число: ";
    std::cin >> a;
    int sum = 0;
    int temp = A;

    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (pow(sum, 3) == A * A)
    {
        std::cout << "Куб суммы цифр числа равен квадрату числа! ";
    }
    else
    {
        std::cout << "Куб суммы цифр числа не равен квадрату числа! ";
    }

    return 0;
}




//Задание 6
{
    setlocale(LC_ALL, "ru");
    int num;
    std::cout << "Введите целое число: ";
    std::cin >> num;

    std::cout << "Число " << num << " делится без остатка на: ";
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;

}



//Задание 7
{
    setlocale(LC_ALL, "ru");
    int num1, num2;
    std::cout << "Введите два целых числа: ";
    std::cin >> num1 >> num2;

    std::cout << "Оба числа делятся без остатка на: ";
    for (int i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            std::cout << i << " ";
        }
    }

    return 0;

}


