#ifndef GREKOVNS_CSA_HW1_CAR_H
#define GREKOVNS_CSA_HW1_CAR_H

#include "stdio.h"
#include "stdlib.h"

/// <summary>
/// Описание базовой структуры машины.
/// </summary>
struct car {
    int max_speed;
    double consumption_per_100_km;
    int fuel_capacity;
};

/// <summary>
/// Ввод данных о машины.
/// </summary>
/// <param name="n">указатель на объект transport, который нужно заполнить из файла</param>
/// <param name="input_file_name"> сылка на входной файл </param>
/// <param name="fuel_capacity"> указатель кол-во литров в баке</param>
/// <param name="consumption_per_100_km"> указательн на расход топлива на 100 км</param>
/// <returns> 0 - если ошибок нет; 1 - если произошла ошибка</returns>
int Input(car* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km);

/// <summary>
/// Вывод данных об машине в файл.
/// </summary>
/// <param name="n"> указатель на объект car, который нужно заполнить из файла </param>
/// <param name="output_file_name"> сылка на выходной файл </param>
void Output(const car* n, FILE* output_file_name);

/// <summary>
/// Вычисление максимального расстояния
/// </summary>
/// <param name="n">указатель на объект transport, который нужно заполнить из файла </param>
/// <returns> int максимально пройденное расстояние </returns>
int MaxDistance(const car* n);
#endif //GREKOVNS_CSA_HW1_CAR_H
