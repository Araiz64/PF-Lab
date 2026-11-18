#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("Processed Vehicle: %s | Toll Charged: %d PKR\n", vehicleType, TOLL_RATE);
    printf("Total Vehicles So Far: %d | Total Revenue: %d PKR\n\n", totalVehicles, totalRevenue);
}

int main() {
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");

    return 0;
}
