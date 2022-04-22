#include <stdio.h>

// int main () {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         printf("%d" , b+c);
//     }
//     else if ( b > a && b > c)
//     {
//         printf("%d", a+c);
//     }
//     else if (c>a && c>b)
//     {
//         printf("%d", a+b);
//     }
//     else if (a == b && b == c && c==a)
//     {
//         printf("%d", a+b);
//     }
    
//     return 0;
    
// }


int main () {
    int A , B ,C ;
    scanf("%d %d %d", &A, &B, &C);

    if (C >= A && C <= B)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}



// int main () {
//     int A,B,C; 
//     scanf("%d %d %d", &A ,&B, &C);

//     if (A == 5 && B == 7 && C == 5)
//     {
//         printf("YES");
//     }
//     else if (A == 5 && B == 5 && C == 7)
//     {
//         printf("YES");
//     }
//     else if (A == 7 && B == 5 && C == 5)
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
    
// }



// int main () {
//     int x;
//     scanf("%d", &x);
//     if (x < 1200)
//     {
//         printf("ABC");
//     }else{
//         printf("ARC");
//     }
//     return 0 ;
// }



// int main () 
// {
//     int A , B;
//     scanf("%d %d", &A, &B);

//     if ((A + B) <= 9 )
//     {
//         printf("%d", A+B);
//     }
//     else{
//         printf("error");
//     }
// }



// int main()
// {
//     int i, X, Y, N ;
//     scanf("%d %d %d",&X, &Y, &N);
//     for (i=1; i<=N; i++)
//     {
//         if (i%X == 0 && i % Y == 0)
//             printf ("FizzBuzz\n");

//         else if ((i%X) == 0)
//             printf("Fizz\n");

//         else if ((i%Y) == 0)
//             printf("Buzz\n");

//         else 
//             printf("%d\n", i);
//     }
//     return 0;
// }



// int main (void) {
//     int n ;
//     double total_sum = 0;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         double a, b, mul;
//         scanf("%lf %lf", &a, &b);
//         mul = a * b ;
//         total_sum = total_sum + mul;
//     }
//     printf("%.3lf", total_sum);
// }


// int main (void){
//     int n ,counter = 0;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         scanf("%d", &a);
//         if (a < 0)
//         {
//             counter++;
//         }
        
//     }
//    printf("%d", counter);
// }


// int main (void) {
//     //print abracadabra follwing by input value
//     int N;
//     scanf("%d", &N);
    
//     for ( int i = 1; i <= N; i++)
//     {
//         printf("%d Abracadabra\n", i);
//     }
    
// }

// int main (void)
// {
//     // find vowel or consonant
//     char ch;
//     scanf("%c", &ch);
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         printf("vowel\n");
//     else
//         printf("consonant\n");
// }