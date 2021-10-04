#ifndef GREKOVNS_CSA_HW1_CAR_H
#define GREKOVNS_CSA_HW1_CAR_H



#include "Transport.h"

#define MAX_CONTAINER_SIZE 10000



// K�������� �� ������ ����������� �������
struct container {
    int len;
    transport* cont[MAX_CONTAINER_SIZE + 1];
};

// ������������� ����������
void Init(container* c);

// ���� ������ 
void Input(container* c, FILE* input_file);

// ����� ������ �� ����������
void Output(container* c, FILE* output_file);

// ������� ���������� 
void Clear(container* c);

int Add(container* ct, const transport* tr);

void Sort(container* ct);
#endif
