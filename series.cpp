#include <iostream>
#include <ctime>
#include <cmath>
#include <vector>
#include <algorithm>

void fill_array(double* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 901 + 100) / 100.0;
    }
}

void bubble_sort(double* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void create_2d_arr(double **arr, int rows, int columns) {
    for (int i = 0; i < rows; ++i)
    {
        arr[i] = new double[columns];
    }
}

void fill_2d_arr(double** arr, int rows, int columns) {
    srand(time(0));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 901 / 100;
        }
    }
}

void print_2d_arr(double** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        std::cout << "[";
        for (int j = 0; j < columns; j++)
        {
            std::cout << arr[i][j];
            if (j != columns - 1)
                std::cout << ", ";
        }
        std::cout << "]\n";
    }   
}

void print_array(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

double sum_double(double *arr, int size, double res){
    for (int i = 0; i < size; i++)
        res += arr[i];
    return res;}

double mul_double(double* arr, int size, double res) {
    for (int i = 0; i < size; i++)
        res *= arr[i];
    return res;
}

double double_average(double* arr, int size, double res) {
    for (int i = 0; i < size; i++)
        res += arr[i];
    return res/size;
}

void sum_mul_double(double* arr, int size) {
    std::pair<double, double> mypair;
    mypair.first = 0;
    mypair.second = 1;
    for (int i = 0; i < size; i++){
        mypair.first += arr[i];
    mypair.second *= arr[i];}
    std::cout << mypair.first << " " << mypair.second;
}

void frac_parts(double* arr, int size, double& res) {
    for (int i = 0; i < size; i++) {
        double temp = *(arr + i) - int(*(arr + i));
        std::cout << temp << " ";
        res += std::floor(*(arr + i));
    }
    std::cout << "\n" << res;
}

void printFracParts(const std::vector<double>& numbers) {
    double result = 1.0;
    for (const auto& num : numbers) {
        double fracPart = num - static_cast<int>(num);
        std::cout << fracPart << " ";
        result *= fracPart;
    }
    std::cout << "\n" << result;
}

template<class T>
int series_7(T arr, int size) {
    double result = 0;
    double mul_res = 1;
    for (int i = 0; i < size; ++i)
    {
        int a = arr[i];
        result = arr[i] - a;
        mul_res *= result;
        std::cout << result << " ";
    }
    std::cout << std::endl;
    return mul_res;
}

template<class T>
int series_8(T arr, int size) {
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 == 0) {
            std::cout << arr[i] << " ";
            result++;
        }
    }
    std::cout << std::endl;
    return result;
}

template<class T>
double series_9(T arr, int size) {
    double result = 0;
    double mul_res = 1;
    for (int i = 0; i < size; ++i)
    {
        int a = arr[i];
        result = arr[i] - a;
        mul_res *= result;
        std::cout << result << " ";
    }
    std::cout << std::endl;
    return mul_res;
}

template<class T>
bool series_10(T arr, int size) {
    double result = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 > 0) {
            return true;
        }
    }
    return false;
}

template<class T>
int series_12(T arr, int size) {
    int res = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == 0) {
            return 0;
        }
        res++;
    }
    return res;
}

template<class T>
int series_14(T arr, int size, int k) {
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == 0) {
            return 0;
        }
        if (arr[i] < k) {
            result++;
        }
    }
    return result;
}

template<class T>
int series_16(T arr, int size, int k) {
    for (int i = size; i; --i)
    {
        if (arr[i] > k) {
            return i;
        }
    }
    return 0;
}


void series_17(double* arr, int size, double b) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
            if (b > arr[i] and b < arr[i + 1]) {
                std::cout << b << " ";
            }
    }
}

void series_18(double* arr, int size) {
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] != arr[i + 1]) {
            std::cout << arr[i] << " ";
        }
    }
}

void series_19(double* arr, int size) {
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < arr[i -1]) {
            std::cout << arr[i] << " ";
        }
    }
}

void series_20(double* arr, int size) {
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < arr[i + 1]) {
            std::cout << arr[i] << " ";
        }
    }
}

int series_21(double* arr, int size) {
    for (int i = 0; i < size - 1; ++i)
    {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

double series_22(double* arr, int size) {
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < arr[i + 1]) {
            return arr[i];
        }
    }
    return 0;
}

double series_23(double* arr, int size) {
    for (int i = 1; i < size - 1; ++i)
    {
        if (!((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ||
            (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))) {
            return i;
        }
    }
    return 0;
}

double series_24(int* arr, int size) {
    double result = 0;
    for (int j = size - 1; j >= 0; --j)
    {
        if (arr[j] == 0) {
            {
                for (int i = j - 1; i; --i)
                {
                    result += arr[i];
                    if (arr[i] == 0) {
                        return result;
                    }
                }
            }
        }
    }

}

double series_25(int* arr, int size) {
    double result = 0;
    int fzero;
    int lzero;
    for (int j = size - 1; j >= 0; --j)
    {
        if (arr[j] == 0) {
            lzero = j;
            break;
        }
    }
    for (int j = 0; j < size; ++j)
        {
        if (arr[j] == 0) {
            fzero = j;
            break;
        }
        }
    for (; fzero != lzero; fzero++)
        result += arr[fzero];
    return result;
}

void series_26(double* arr, int size, int k) {
    double result = 0;
    for (int i = 0; i < size; i++)
    {
        std::cout << pow(arr[i], k) << " ";
    }
}

void series_27(double* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        std::cout << pow(arr[i], i + 1) << " ";
    }
}

void series_28(double* arr, int size) {
    int j = size;
    for (int i = 0; i < size; ++i, --j)
    {
        std::cout << pow(arr[i], j) << " ";
    }
}

void series_29(double* arr, int size) {
    double result = 0;
    for (int i = 0; i < size; i++)
    {
        std::cout << pow(arr[i], i + 1) << " ";
    }
}

void series_30(double** arr, int rows, int columns) {
    double result = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result += arr[i][j];
        }
        std::cout << result << std::endl;
        result = 0;
    }
}

void series_31(double** arr, int rows, int columns) {
    double result = 0;
    for (int i = 0; i < rows; i++)
    {
        bool found = false;
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == 2) {
                found = true;
                result++;
                break;
            }
        }
        if (!found)
            std::cout << 0 << std::endl;
    }
    std::cout << result;
}

void series_32(double** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++)
    {
        bool found = false;
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == 2) {
                found = true;
                std::cout << "[" << i << "][" << j << "] = 2" << std::endl;
                break;
            }
        }
        if (!found)
            std::cout << 0 << std::endl;
    }
}

void series_33(double** arr, int rows, int columns) {
    for (int i = 0; i < rows; ++i)
    {
        bool found = false;
        for (int j = columns - 1; j >= 0; --j)
        {
            if (arr[i][j] == 2) {
                found = true;
                std::cout << "[" << i << "][" << j << "] = 2" << std::endl;
                break;
            }
        }
        if (!found)
            std::cout << 0 << std::endl;
    }
}

void series_34(double** arr, int rows, int columns) {
    double result = 0;
    for (int i = 0; i < rows; ++i)
    {
        bool found = false;
        for (int j = 0; j < columns; ++j)
        {
            if (arr[i][j] == 2) {
                found = true;
                for (int k = 0; k < columns; ++k)
                {
                    result += arr[i][k];
                }
                std::cout << result << std::endl;
                break;
            }
        }
        if (!found)
            std::cout << 0 << std::endl;
    }
}

void series_35(double** arr, int rows, int columns) {
    int avg_counter = 0;
    for (int i = 0; i < rows; ++i)
    {
        int counter = 0;
        for (int j = 0; j < columns; ++j)
        {
            avg_counter++;
            counter++;
            if (arr[i][j] == 0) {
                break;
            }
        }
        std::cout << "В [" << i << "] наборе элементов: " << counter << std::endl;
    }
    std::cout << "Всего эл-ов: " << avg_counter;
}

void series_36(double** arr, int rows, int columns) {
    int counter = 0;
    for (int i = 0; i < rows; ++i){
        bool isIncr = true;
        for (int j = 0; j < columns - 1; ++j)
        {
            if (arr[i][j] < arr[i][j + 1])
                isIncr = false;
        }
        if (isIncr == true)
            counter++;
    }
    std::cout << counter;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int rows = 5;
    int columns = 5;
    const int size = 10;
    int* arr = new int[size] {1, 0, 0, 4, 2, 1, 8, 6, 3, 5};
    double* arr2 = new double[size];
    double **arr_2d = new double* [rows];
    //fill_array(arr2, size);
    //bubble_sort(arr, size);
    //print_array(arr2, size);
    //std::cout << std::endl << series_34(arr_2d, rows, columns);
    create_2d_arr(arr_2d, rows, columns);
    fill_2d_arr(arr_2d, rows, columns);
    print_2d_arr(arr_2d, rows, columns);
    std::cout << std::endl;
    series_36(arr_2d, rows, columns);
}
