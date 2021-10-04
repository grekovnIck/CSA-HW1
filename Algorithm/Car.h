#ifndef GREKOVNS_CSA_HW1_CAR_H
#define GREKOVNS_CSA_HW1_CAR_H

#include "stdio.h"
#include "stdlib.h"

/// <summary>
/// �������� ������� ��������� ������.
/// </summary>
struct car {
    int max_speed;
    double consumption_per_100_km;
    int fuel_capacity;
};

/// <summary>
/// ���� ������ � ������.
/// </summary>
/// <param name="n">��������� �� ������ transport, ������� ����� ��������� �� �����</param>
/// <param name="input_file_name"> ����� �� ������� ���� </param>
/// <param name="fuel_capacity"> ��������� ���-�� ������ � ����</param>
/// <param name="consumption_per_100_km"> ���������� �� ������ ������� �� 100 ��</param>
/// <returns> 0 - ���� ������ ���; 1 - ���� ��������� ������</returns>
int Input(car* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km);

/// <summary>
/// ����� ������ �� ������ � ����.
/// </summary>
/// <param name="n"> ��������� �� ������ car, ������� ����� ��������� �� ����� </param>
/// <param name="output_file_name"> ����� �� �������� ���� </param>
void Output(const car* n, FILE* output_file_name);

/// <summary>
/// ���������� ������������� ����������
/// </summary>
/// <param name="n">��������� �� ������ transport, ������� ����� ��������� �� ����� </param>
/// <returns> int ����������� ���������� ���������� </returns>
int MaxDistance(const car* n);
#endif //GREKOVNS_CSA_HW1_CAR_H
