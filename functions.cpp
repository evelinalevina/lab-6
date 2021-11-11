#include "functions.hpp"
#include <math.h>
#include <fstream>
#include <iostream>

namespace el
{
   

    void Read(int& n, int arr[100][100])
    {
        std::cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                std::cin >> arr[i][j];
    }

   

    void Write(int n, int arr[100][100])
    {
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << arr[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    

    

    void Sort(int n, int arr[100][100])
    {
        int sum[100];
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; ++k)
            {
                for (int i = 0; i < n-1; i++)
                {
                    sum[j] += arr[i][j];                   
                }
                if (sum[j] > sum[k])
                {
                    for (int i = 0; i < n; i++)
                        std::swap(arr[i][j], arr[i][k]);
                }
            }           
        }

       
    }

    bool ProverkaUsloviya(int n, int arr[100][100]) {
        if (Equal(n, arr) && Sum(n, arr)) {
            return true;
        }
        else
            return false;
    }

    bool Sum(int n, int arr[100][100]) {
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum = sum + arr[i][j];
            }

            if (sum == 0) {
                return true;
            }
        }
        return false;


    }

    bool Equal(int n, int arr[100][100]) {
        for (int i = 0; i < n; i++) {
            int flag_a = 0;
            for (int j = 0; j < n; j++)
            {
                int flag_b = 1;
                if (arr[i][j] < 2)
                    flag_b = 0;
                for (int d = 2; d <= sqrt(arr[i][j]); d++)
                    if (arr[i][j] % d == 0)
                        flag_b = 0;
                if (flag_b == 1)
                    flag_a = 1;
                if (flag_a == 1) {
                    return true;
                }
            }
            return false;

        }
    }

    

}
