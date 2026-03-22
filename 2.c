#include <stdio.h>
#include <string.h>

int main() {
    
    char currency = '$';
    char item[50] = "";
    double price = 0;
    int quantity = 0;
    double total = 0.0;

    printf("What item would you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price of each? ");
    scanf("%lf", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have brought %d %s/s\n",quantity,item);
    printf("The total is: %c%.2f", currency, total);

    return 0; 
}