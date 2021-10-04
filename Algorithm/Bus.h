//
// Created by greko on 04.10.2021.
//

#ifndef GREKOVNS_CSA_HW1_BUS_H
#define GREKOVNS_CSA_HW1_BUS_H

#include "stdio.h"
#include "stdlib.h"

/// <summary>
/// Описание базовой структуры автобуса.
/// </summary>
struct bus {
    int max_passenger;
    double consumption_per_100_km;
    int fuel_capacity;
};

/// <summary>
/// Ввод данных о автобусе.
/// </summary>
/// <param name="n">указатель на объект bus, который нужно заполнить из файла</param>
/// <param name="input_file_name"> сылка на входной файл </param>
/// <param name="fuel_capacity"> указатель кол-во литров в баке</param>
/// <param name="consumption_per_100_km"> указательн на расход топлива на 100 км</param>
/// <returns> 0 - если ошибок нет; 1 - если произошла ошибка</returns>
int Input(bus* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km);

/// <summary>
/// Вывод данных об автобусе в файл.
/// </summary>
/// <param name="n"> указатель на объект bus, который нужно заполнить из файла </param>
/// <param name="output_file_name"> сылка на выходной файл </param>
void Output(const bus* n, FILE* output_file_name);

/// <summary>
/// Вычисление максимального расстояния
/// </summary>
/// <param name="n">указатель на объект bus, который нужно заполнить из файла </param>
/// <returns> int максимально пройденное расстояние </returns>
int MaxDistance(const bus* n);

#endif //GREKOVNS_CSA_HW1_BUS_H