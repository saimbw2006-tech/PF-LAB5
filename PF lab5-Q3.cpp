#include <stdio.h>

int main(){
    int year,Leap;

    printf("Enter a year: ");
    scanf("%d", &year);

    Leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf(Leap ? "is a leap year %d\n" : "is not a leap year %d\n", year);
    printf("February has days%d\n ", Leap ? 29 : 28);

    return 0;
}
