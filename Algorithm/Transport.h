#ifndef GREKOVNS_CSA_HW1_TRANSPORT_H
#define GREKOVNS_CSA_HW1_TRANSPORT_H

#include "Truck.h"
#include "Bus.h"
#include "Car.h"

/// <summary>
/// ���������, ����������� ��������, �������� � ������������ ��������
/// </summary>
struct transport {
    // ��� �����
    int fuel_capacity, consumption_per_100_km;
    enum transport_type { TRUCK, CAR, BUS } transport_type;
    union {
        truck truc;
        car c;
        bus b;
    };
};

/// <summary>
/// ���� ����� �� �����
/// </summary>
/// <param name="n"> ��������� �� ������ transport, ������� ����� ��������� �� ����� </param>
/// <param name="input_file_name"> ��������� �� ������� ���� </param>
/// <returns> ������ ��� </returns>
int Input(transport* n, FILE* input_file_name);

/// <summary>
/// ���� ������ � ����
/// </summary>
/// <param name="tr"> ��������� �� ������ transport, ������� ����� �������. </param>
/// <param name="output_file_name"> ��������� �� �������� ����. </param>
void Output(const transport* tr, FILE* output_file_name);

/// <summary>
/// ���������� ������������� ����������
/// </summary>
/// <param name="n">��������� �� ������ transport, ������� ����� ��������� �� ����� </param>
/// <returns> int ����������� ���������� ���������� </returns>
double MaxDistance(const transport* tr);

#endif //GREKOVNS_CSA_HW1_TRANSPORT_H
