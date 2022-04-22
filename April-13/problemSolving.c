#include <stdio.h>

int main ()
    {
        //problem 1
        // char name[] = "alexandra Abramov";
        // char DOB[] = "july 14, 1995";
        // char Mobile[] = "077-1234567";

        // printf("My name is %s\n", name);
        // printf("My DOB is %s\n", DOB);
        // printf("My mobile number is %s\n", Mobile);

        //problem 2

        // int a , b , multiplication;
        // printf("input the first integer: ");
        // scanf("%d", &a);
        // printf("input the second integer: ");
        // scanf("%d", &b);

        // multiplication = a * b;
        // printf("Product of the above two integers = %d\n", multiplication);
        
        //problem 3
        // int x,y,sum, difference, product, quotient, remainder;

        // printf("First number: ");
        // scanf("%d", &x);
        // printf("Second number: ");
        // scanf("%d", &y);

        // sum = x + y;
        // difference = x - y;
        // product = x * y;
        // quotient = x / y;
        // remainder = x % y;

        // printf("Sum = %d\n", sum);
        // printf("Difference = %d\n", difference);
        // printf("Product = %d\n", product);
        // printf("Quotient = %d\n", quotient);
        // printf("Remainder = %d\n", remainder);


        // problem 4

        // double principle , time , rate, simpleInterest;
        // printf("Enter the principle amount: ");
        // scanf("%lf", &principle);
        // printf("Enter the time in years: ");
        // scanf("%lf", &time);
        // printf("Enter the rate of interest: ");
        // scanf("%lf", &rate);

        // simpleInterest = (principle * time * rate) / 100;
        // printf("Simple interest = %lf\n", simpleInterest);
        // printf("Total amount = %.1f\n", principle + simpleInterest);

        // problem 5
        // float number;
        // printf("Enter Number: ");
        // scanf("%f", &number);
        // printf("%f\n", number);
        // int integer = (int)number;
        // float decimal = number-integer;
        // printf("Integer part: %d\n", integer);
        // printf("Real part: %.3f\n", decimal);


        //problem 6
        // float Celsius , Fahrenheit;
        // printf("Enter the temperature in Celsius: ");
        // scanf("%f", &Celsius);
        // Fahrenheit = (Celsius * 9/5) + 32;
        // printf("Temperature in Fahrenheit: %.1f F", Fahrenheit);

        // problem 7

        // float Fahrenheit , Celsius;
        // printf("Enter the temperature in Fahrenheit: ");
        // scanf("%f", &Fahrenheit);
        // Celsius = (Fahrenheit - 32) * 5/9;
        // printf("Temperature in Celsius: %.2f C", Celsius);

        // problem 8

        // int hrs, amount;
        // float salary;

        // printf("Enter the number of hours worked: ");
        // scanf("%d", &hrs);
        // printf("Enter the amount of salary per hour: ");
        // scanf("%d", &amount);
        
        // salary = hrs * amount;

        // printf("Salary = %.2f\n", salary);




        // problem 9
        // int totalDays , Year, Month, Day;
        // printf("Enter the number of days: ");
        // scanf("%d", &totalDays);
        // Year = totalDays / 365;
        // Month = (totalDays % 365) / 30;
        // Day = (totalDays % 365) % 30;
        // printf("%d years, %d months, %d days\n", Year, Month, Day);


        //problem 10
        float weight_item1, no_of_item1, weight_item2, no_of_item2, average_value;
        printf("Enter the weight of item 1: ");
        scanf("%f", &weight_item1);
        printf("Enter the number of item 1: ");
        scanf("%f", &no_of_item1);
        printf("Enter the weight of item 2: ");
        scanf("%f", &weight_item2);
        printf("Enter the number of item 2: ");
        scanf("%f", &no_of_item2);

        average_value = ((weight_item1 * no_of_item1) + (weight_item2 * no_of_item2)) / (no_of_item1 + no_of_item2);
        printf("Average value = %f\n", average_value);
        return 0;
    }