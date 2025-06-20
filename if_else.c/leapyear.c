#include<stdio.h>

int main()
{
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}


//second version 
/*#include<stdio.h>   // Input-output library samavisht kara

int main()
{
    int year;   // Varsha sathvanyasathi ek variable declare kara

    printf("Enter a year: ");   // Upayogkartyala varsha takayala sanga
    scanf("%d", &year);         // Varsha vachaa (input ghyaa)

    // Tapasa ki dilele varsha leap year ahe ka
    // Condition: (4 ne bhag jato aani 100 ne nahi) kiva 400 ne bhag jato
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);   // Jar condition barobar asel tar leap year ahe
    }
    else
    {
        printf("%d is NOT a Leap Year.\n", year);   // Nahi tar leap year nahi
    }

    return 0;   // Program samapt
}
*/