#include <stdio.h>

int main(){

    int choice = 0;
    double input = 0;
    double output =0;

    printf("Weight Conversion Calculator\n1. Kilograms to Pounds\n2. Pounds to Kilograms");
    
    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%lf",&input);
        output = input * 2.2046228;

        printf("%.2lf kilograms is equal to %.2lf pounds\n",input, output);
    }
    else if(choice == 2){
        printf("Enter the weight in pound: ");
        scanf("%lf",&input);
        output = input / 2.2046228;

        printf("%.2lf pounds is equal to %.2lf kilograms\n",input, output);
    }
    else{
        printf("Please only enter 1 or 2");
    }

    return 0;

}