#include "Transport.h"

int Input(transport* tr, FILE* input_file_name) {
    int fuel_capacity, type = -1;
    double consumption_per_100_km;
    fscanf(input_file_name, "%d\n", &type);
    switch (type) {
    case transport::TRUCK:
        tr->transport_type = transport::TRUCK;
        int res = fscanf(input_file_name, "%d %lf\n", &fuel_capacity, &consumption_per_100_km);
        if (res != 2) {
            printf("Could not parse number type\n");
            return 1;
        }
        return Input(&tr->truc, input_file_name, fuel_capacity, consumption_per_100_km);
    case transport::CAR:
        tr->transport_type = transport::CAR;
        int res = fscanf(input_file_name, "%d %lf\n", &fuel_capacity, &consumption_per_100_km);
        if (res != 2) {
            printf("Could not parse number type\n");
            return 1;
        }
        return Input(&tr->c, input_file_name, fuel_capacity, consumption_per_100_km);
    case transport::BUS:
        tr->transport_type = transport::BUS;
        int res = fscanf(input_file_name, "%d %lf\n", &fuel_capacity, &consumption_per_100_km);
        if (res != 2) {
            printf("Could not parse number type\n");
            return 1;
        }
        return Input(&tr->b, input_file_name, fuel_capacity, consumption_per_100_km);
    default:
        printf("Could not parse number type\n");
        return 1;
    }
}

void Output(transport* tr, FILE* output_file_name) {
    switch (tr->transport_type) {
    case transport::CAR:
        Output(&tr->c, output_file_name);
        return;
    case transport::BUS:
        Output(&tr->b, output_file_name);
        return;
    case transport::TRUCK:
        Output(&tr->truc, output_file_name);
        return;
    }
}

double MaxDistance(const transport* tr) {
    switch (tr->transport_type) {
    case transport::CAR:
        return MaxDistance(&tr->c);
    case transport::BUS:
        return MaxDistance(&tr->b);
    default:
        return MaxDistance(&tr->truc);
    }
}