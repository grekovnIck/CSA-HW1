#include "Car.h"

int Input(car* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km) {
    int max_sp, fuel_cap;
    double consumption_100_km;
    int res = fscanf(input_file_name, "%d %lf %d", &max_sp, &consumption_100_km, &fuel_cap);
    if (res != 3) {
        printf("Could not parse bus\n");
        return 1;
    }
    n->max_speed = max_sp;
    n->consumption_per_100_km = consumption_100_km;
    n->fuel_capacity = fuel_cap;
    return 0;
}

int MaxDistance(const car* b) {
    if (b->consumption_per_100_km == 0) {
        return (int)(b->fuel_capacity / b->consumption_per_100_km);
    }
    return b->fuel_capacity;
}

void Output(const car* n, FILE* output_file) {
    fprintf(output_file,
        "Bus: max passenger - %d; consumption per 100 km - %fl; fuel capacity - %d; max passenger - %d \n",
        n->max_speed,
        n->consumption_per_100_km, n->fuel_capacity, MaxDistance(n));
}


