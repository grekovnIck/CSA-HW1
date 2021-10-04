#ifndef GREKOVNS_CSA_HW1_TRANSPORT_H
#define GREKOVNS_CSA_HW1_TRANSPORT_H

#include "Truck.h"
#include "Bus.h"
#include "Car.h"

/// <summary>
/// Структура, описывающая грузовые, легковые и транспортные средства
/// </summary>
struct transport {
    // Тип числа
    int fuel_capacity, consumption_per_100_km;
    enum transport_type { TRUCK, CAR, BUS } transport_type;
    union {
        truck truc;
        car c;
        bus b;
    };
};

/// <summary>
/// Ввод числа из файла
/// </summary>
/// <param name="n"> указатель на объект transport, который нужно заполнить из файла </param>
/// <param name="input_file_name"> указатель на входной файл </param>
/// <returns> статус код </returns>
int Input(transport* n, FILE* input_file_name);

/// <summary>
/// Ввод данных в файл
/// </summary>
/// <param name="tr"> указатель на объект transport, который нужно вывести. </param>
/// <param name="output_file_name"> указатель на выходной файл. </param>
void Output(const transport* tr, FILE* output_file_name);

/// <summary>
/// Вычисление максимального расстояния
/// </summary>
/// <param name="n">указатель на объект transport, который нужно заполнить из файла </param>
/// <returns> int максимально пройденное расстояние </returns>
double MaxDistance(const transport* tr);

#endif //GREKOVNS_CSA_HW1_TRANSPORT_H
