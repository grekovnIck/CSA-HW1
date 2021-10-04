//
// Created by greko on 04.10.2021.
//

#ifndef GREKOVNS_CSA_HW1_TRUCK_H
#define GREKOVNS_CSA_HW1_TRUCK_H

#include "stdio.h"
#include "stdlib.h"

/// <summary>
/// �������� ������� ��������� ��������.
/// </summary>
struct truck {
    int load_capacity;
    double consumption_per_100_km;
    int fuel_capacity;
};

/// <summary>
/// ���� ������ � ���������.
/// </summary>
/// <param name="n">��������� �� ������ truck, ������� ����� ��������� �� �����</param>
/// <param name="input_file_name"> ����� �� ������� ���� </param>
/// <param name="fuel_capacity"> ��������� ���-�� ������ � ����</param>
/// <param name="consumption_per_100_km"> ���������� �� ������ ������� �� 100 ��</param>
/// <returns> 0 - ���� ������ ���; 1 - ���� ��������� ������</returns>
int Input(truck* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km);

/// <summary>
/// ����� ������ �� ��������� � ����.
/// </summary>
/// <param name="n"> ��������� �� ������ truck, ������� ����� ��������� �� ����� </param>
/// <param name="output_file_name"> ����� �� �������� ���� </param>
void Output(const truck* n, FILE* output_file_name);

/// <summary>
/// ���������� ������������� ����������
/// </summary>
/// <param name="n">��������� �� ������ bus, ������� ����� ��������� �� ����� </param>
/// <returns> int ����������� ���������� ���������� </returns>
int MaxDistance(const truck* n);
#endif //GREKOVNS_CSA_HW1_TRUCK_H
