#include <iostream>
#include "functions.hpp"

int main()
{
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите порядок матрицы: ";
    int n;
    int arr[100][100];
    el::Read(n, arr);
    if (el::ProverkaUsloviya(n, arr))
    {
        el::Sort(n, arr);
        el::Write(n, arr);
    }
    else
    {
        std::cout << "Не выполнено условие! ";
    }
    return 0;

}


