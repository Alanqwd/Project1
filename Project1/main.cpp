#include <iostream>
int main()





//������� 1
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

    std::cout << "���������� ����� � ����� ����������� �������: " << count;


    return 0;
}





//������� 2
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

    std::cout << "���������� ����� � ������� �������: " << count;

    return 0;
}




//������� 3

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





//������� 4 
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





//������� 5
{
    setlocale(LC_ALL, "ru");
    int a;
    std::cout << "������� �����: ";
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
        std::cout << "��� ����� ���� ����� ����� �������� �����! ";
    }
    else
    {
        std::cout << "��� ����� ���� ����� �� ����� �������� �����! ";
    }

    return 0;
}




//������� 6
{
    setlocale(LC_ALL, "ru");
    int num;
    std::cout << "������� ����� �����: ";
    std::cin >> num;

    std::cout << "����� " << num << " ������� ��� ������� ��: ";
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;

}



//������� 7
{
    setlocale(LC_ALL, "ru");
    int num1, num2;
    std::cout << "������� ��� ����� �����: ";
    std::cin >> num1 >> num2;

    std::cout << "��� ����� ������� ��� ������� ��: ";
    for (int i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            std::cout << i << " ";
        }
    }

    return 0;

}


