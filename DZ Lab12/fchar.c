#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    printf("Домашнее задание по Lab12.\n");
    printf("Напишите программу, которая вычисляет\nразмер основных типов данных в байтах.\n\n");
    printf("Размеры типов данных в байтах:\n");

    char char_arr[2];
    printf("1) char: %zu\n", (char*)(&char_arr[1]) - (char*)(&char_arr[0]));

    short int short_arr[2];
    printf("2) short int: %zu\n", (char*)(&short_arr[1]) - (char*)(&short_arr[0]));

    unsigned short int unsingnedshort_arr[2];
    printf("3) unsigned short int: %zu\n", (char*)(&unsingnedshort_arr[1]) - (char*)(&unsingnedshort_arr[0]));

    int int_arr[2];
    printf("4) int: %zu\n", (char*)(&int_arr[1]) - (char*)(&int_arr[0]));

    unsigned char unsignedchar_arr[2];
    printf("5) unsigned char: %zu\n", (char*)(&unsignedchar_arr[1]) - (char*)(&unsignedchar_arr[0]));

    wchar_t wchar_arr[2];
    printf("6) wchar_t: %zu\n", (char*)(&wchar_arr[1]) - (char*)(&wchar_arr[0]));

    long long int longlong_arr[2];
    printf("7) long long int: %zu\n", (char*)(&longlong_arr[1]) - (char*)(&longlong_arr[0]));

    size_t size_t_arr[2];
    printf("8) size_t: %zu\n", (char*)(&size_t_arr[1]) - (char*)(&size_t_arr[0]));

    float float_arr[2];
    printf("9) float: %zu\n", (char*)(&float_arr[1]) - (char*)(&float_arr[0]));

    double double_arr[2];
    printf("10) double: %zu\n", (char*)(&double_arr[1]) - (char*)(&double_arr[0]));

    signed int signed_arr[2];
    printf("11) signed int: %zu\n", (char*)(&signed_arr[1]) - (char*)(&signed_arr[0]));

    return 0;
}