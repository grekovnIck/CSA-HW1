#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include "Container.h"
#include <unistd.h>

#define ARGC_EXCEPTION_MESSAGE  "Incorrect program input\n"

#define INPUT1_EXCEPTION_MESSAGE  "Cannot open file\n"

#define INPUT2_EXCEPTION_MESSAGE  "File does not exist!\n"

/// <summary>
/// ОТкрытие файла с входными данными
/// </summary>
/// <param name="argv"> один из входных параметров</param>
/// <returns> содержимое файла</returns>
FILE* GetInputFile(char* argv[]) {
    if (access(argv[1], F_OK) != -1) {
        return fopen(argv[1], "r");
    }
    else {
        printf(INPUT2_EXCEPTION_MESSAGE);
    }
    exit(1);
}

/// <summary>
/// 
/// </summary>
/// <param name="argv"></param>
/// <returns></returns>
FILE* GetOutputFile(char* argv[]) {
    if (access(argv[2], F_OK) != -1) {
        return fopen(argv[2], "w");
    }
    else {
        printf(INPUT1_EXCEPTION_MESSAGE);
    }
    exit(1);
}

int main(int argc, char* argv[]) {
    time_t start, end;
    start = clock();
    if (argc != 3) {
        printf(ARGC_EXCEPTION_MESSAGE);
        return 1;
    }
    std::cout << "Start" << '\n';
    container c;
    Init(&c);
    FILE* input_file_name = GetInputFile(argv);
    Input(&c, input_file_name);
    fclose(input_file_name);
    FILE* output_file_name = GetOutputFile(argv);
    Output(&c, output_file_name);
    Sort(&c);
    fprintf(output_file_name, "Sorted container:\n");
    Output(&c, output_file_name);
    fclose(output_file_name);
    end = clock();
    printf("Прошло времени с момента запуска: %f\n", difftime(end, start) / CLOCKS_PER_SEC);
    return 0;
}