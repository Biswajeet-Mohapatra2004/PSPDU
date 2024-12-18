#include<stdio.h>
struct date_t{
    int day;
    int month;
    int year;
};
struct tank_t{
    float capacity;
    float current;
};
struct auto_t{
    char make[50];
    char model[50];
    int odometer;
    struct date_t manufacture;
    struct date_t purchase;
    struct tank_t gas_tank;
};

void print_tank(struct auto_t *automobile){
    printf("Capacity: %.2f\n", automobile->gas_tank.capacity);
    printf("Current fuel: %.2f\n", automobile->gas_tank.current);
}
void print_date(struct auto_t *automobile){
    printf("Manufacture Date: %d-%d-%d\n", automobile->manufacture.day, automobile->manufacture.month, automobile->manufacture.year);
    printf("Purchase Date: %d-%d-%d\n", automobile->purchase.day, automobile->purchase.month, automobile->purchase.year);
    print_tank(automobile);
}
void print_auto(struct auto_t *automobile){
    printf("Maker: %s\n", automobile->make);
    printf("Model: %s\n", automobile->model);
    printf("Odometer: %d\n", automobile->odometer);
    print_date(automobile);
}
void scan_capacity(struct auto_t *automobile){
    printf("Enter the capacity: ");
    scanf("%f", &automobile->gas_tank.capacity);
    printf("Enter the current fuel: ");
    scanf("%f", &automobile->gas_tank.current);

    print_auto(automobile);
}
void scan_date(struct auto_t *automobile){
    printf("Enter the manufacture day month year: ");
    scanf("%d %d %d", &automobile->manufacture.day, &automobile->manufacture.month, &automobile->manufacture.year);

    printf("Enter the purchase day month year: ");
    scanf("%d %d %d", &automobile->purchase.day, &automobile->purchase.month, &automobile->purchase.year);

    scan_capacity(automobile);
}
void scan_auto(struct auto_t *automobile){
    printf("Enter the make: ");
    scanf("%s", automobile->make);

    printf("Enter the model: ");
    scanf("%s", automobile->model);

    printf("Enter the odometer reading: ");
    scanf("%d", &automobile->odometer);

    scan_date(automobile);
}
int main(){
    struct auto_t automobile;
    scan_auto(&automobile);
    return 0;
}

