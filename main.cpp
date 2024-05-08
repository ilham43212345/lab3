#include <iostream>
int main()
{
    int num;
    int n = 6;
    int k = n;
    int* mas = new int[n];//создаем массив
    std::cout << "Введите 6 чисел:" << "\n";
    for (int i = 0;i < n;i++)
    {
        std::cin >> mas[i];//заполняем массив
    }
    std::cout << "\n";
    std::cout << "Введите число:" << "\n";
    std::cin >> num;
    int* new_mas = new int[n + 1];//создаем новый массив 
    for (int i = 0; i < n; ++i)
    {
        if (mas[i] >= num) { k = i; break; }//ищем позицию числа 
    }
    for (int i = 0; i < k; ++i)
    {
        new_mas[i] = mas[i];//заполняем новый массив элементами которые меньше данного числа
    }
    new_mas[k] = num;//вставляем число
    for (int i = k + 1; i < n + 1; ++i) {
        new_mas[i] = mas[i - 1];//заполняем новый массив элементами которые больше данного числа
    }
    for (int i = 0; i < n + 1; ++i)
    {
        std::cout << new_mas[i] << " ";
    }
    //удаляем массивы
    delete[] new_mas;
    delete[] mas;
}