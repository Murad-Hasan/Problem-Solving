#include <stdio.h>

// int main (void)
// {
//     int number = 0;
//     printf("Enter a number between 1 to 10: ");
//     scanf("%d", &number);
//     if (number > 5 && number < 10)
//     {
//         printf("The number is greater then 5.\n");
//     }
//     if (number < 6)
//     {
//         printf("The number is less then 6.\n");
//     }
//     if (number > 10)
//     {
//         number = 10;
//         printf("You Enter More than 10 , so we count it as a :%d\n", number);
//     }
    
// }

// int main (void)
// {
//     const double unit_price = 3.50;
//     int number_of_items = 0;
//     double total_price = 0.0;
//     printf("Enter the number of items: ");
//     scanf("%d", &number_of_items);

//     if (number_of_items > 10)  // number_of_items greater than 10
//         total_price = unit_price*number_of_items*.95  ;  //5% discount 
//     else
//         total_price = unit_price*number_of_items;
//     printf("The price for %d is $%.2f\n", number_of_items, total_price);
//     return 0;
// }





int main () {
    const long unit_price = 350L; //price in cents
    int quality = 0;
    printf("Enter the quality of the item: ");
    scanf("%d", &quality);
    long Discount = 0L;
    if (quality > 10) Discount = 5L;
        long total_price = unit_price * quality * (100L - Discount)/100;
        long Dollar = total_price/100;
        long Cents = total_price%100;
        printf("The price for %d is $%ld.%02ld\n", quality, Dollar, Cents);
    return 0;
    }











