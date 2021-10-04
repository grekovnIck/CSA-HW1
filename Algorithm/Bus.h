//
// Created by greko on 04.10.2021.
//

#ifndef GREKOVNS_CSA_HW1_BUS_H
#define GREKOVNS_CSA_HW1_BUS_H

#include "stdio.h"
#include "stdlib.h"

/// <summary>
/// �������� ������� ��������� ��������.
/// </summary>
struct bus {
    int max_passenger;
    double consumption_per_100_km;
    int fuel_capacity;
};

/// <summary>
/// ���� ������ � ��������.
/// </summary>
/// <param name="n">��������� �� ������ bus, ������� ����� ��������� �� �����</param>
/// <param name="input_file_name"> ����� �� ������� ���� </param>
/// <param name="fuel_capacity"> ��������� ���-�� ������ � ����</param>
/// <param name="consumption_per_100_km"> ���������� �� ������ ������� �� 100 ��</param>
/// <returns> 0 - ���� ������ ���; 1 - ���� ��������� ������</returns>
int Input(bus* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km);

/// <summary>
/// ����� ������ �� �������� � ����.
/// </summary>
/// <param name="n"> ��������� �� ������ bus, ������� ����� ��������� �� ����� </param>
/// <param name="output_file_name"> ����� �� �������� ���� </param>
void Output(const bus* n, FILE* output_file_name);

/// <summary>
/// ���������� ������������� ����������
/// </summary>
/// <param name="n">��������� �� ������ bus, ������� ����� ��������� �� ����� </param>
/// <returns> int ����������� ���������� ���������� </returns>
int MaxDistance(const bus* n);

#endif //GREKOVNS_CSA_HW1_BUS_H