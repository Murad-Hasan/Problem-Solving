#include <stdio.h>
// Bear & Big Brother 
//
int main (){
    int age_1,age_2;
    scanf("%d %d", &age_1 , &age_2);

    int years = 0;

    while (age_1 <= age_2)
    {
        age_1*= 3;
        age_2*= 2;
        printf("%d %d\n", age_1, age_2);
        years ++;
    }
    printf("%d\n", years);
}