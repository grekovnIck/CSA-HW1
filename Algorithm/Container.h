#ifndef GREKOVNS_CSA_HW1_CAR_H
#define GREKOVNS_CSA_HW1_CAR_H



#include "Transport.h"

#define MAX_CONTAINER_SIZE 10000



// Kонтейнер на основе одномерного массива
struct container {
    int len;
    transport* cont[MAX_CONTAINER_SIZE + 1];
};

// Инициализация контейнера
void Init(container* c);

// Ввод данных 
void Input(container* c, FILE* input_file);

// Вывод данных из контейнера
void Output(container* c, FILE* output_file);

// Очистка контейнера 
void Clear(container* c);

int Add(container* ct, const transport* tr);

void Sort(container* ct);
#endif
