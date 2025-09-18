#include<stdio.h>
void main(){
    int days;
    printf("\n Input number of days");
    scanf("%d", &days);


    int years = days / 365;
    int weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    printf("\n Years: %d, weeks: %d , days: %d", years, weeks, days);
}