// #include <stdio.h>

// int main ()
// {
//     printf("Hello World!");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a , b;
//     scanf("%d %d", &a, &b); // the number of cans shot by Harry and by Larry respectively.
//     printf("%d %d", b-1, a-1); // the number of cans that were not shot by Harry and the number of cans that were not shot by Larry, respectively.
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     //find area of a rectangle both part
//     int length, width, n, area;
//     scanf("%d %d %d", &length, &width, &n);
//     area = 2*n*length*width;
//     printf("%d", area);
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     //find area of trapezoid
//     int a, b, h, area;
//     scanf("%d %d %d", &a, &b, &h);
//     area = (a+b)*h/2; //formula for area of trapezoid
//     printf("%d", area);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     double T ,X , TimePass;
//     scanf("%lf %lf", &T, &X);
//     TimePass = T/X;   //formula for time passed
//     printf("%lf", TimePass);
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     //find one's age
//     int Abuls_age, Average_age;
//     scanf("%d %d", &Abuls_age, &Average_age);
//     printf("%d", (2*Average_age - Abuls_age));
//     return 0;
// }

#include <stdio.h>

int main () {
    // find uncolored cells
    int H , W, h, w, uncolored_cell;
    scanf("%d %d %d %d", &H, &W, &h, &w);
    uncolored_cell = (H-h)*(W-w);
    printf("%d", uncolored_cell);
    return 0;
}