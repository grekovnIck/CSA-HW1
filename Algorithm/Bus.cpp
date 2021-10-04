#include "Bus.h"
#include "random"

int Input(bus* n, FILE* input_file_name, int fuel_capacity, double consumption_per_100_km) {
    int max_pass, fuel_cap;
    double consumption_100_km;
    int res = fscanf(input_file_name, "%d %lf %d", &max_pass, &consumption_100_km, &fuel_cap);
    if (res != 3) {
        printf("Could not parse bus\n");
        return 1;
    }
    n->max_passenger = max_pass;
    n->consumption_per_100_km = consumption_100_km;
    n->fuel_capacity = fuel_cap;
    return 0;
}

int MaxDistance(const bus* b) {
    if (b->consumption_per_100_km == 0) {
        return (int)(b->fuel_capacity / b->consumption_per_100_km);
    }
    return b->fuel_capacity;
}

void Output(const bus* n, FILE* output_file) {
    fprintf(output_file, "Bus: max passenger - %d; consumption per 100 km - %fl; fuel capacity - %d; max passenger - %d \n", n->max_passenger,
        n->consumption_per_100_km, n->fuel_capacity, MaxDistance(n));
}


