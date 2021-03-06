/*
** Create a Simple Weather Program
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    // Rainfall Data for Year 2011 - 2015
    int year, month;
    float totalRainfallInAYear = 0.0f, avgYearlyRainfall = 0, avgMonthlyRainfall = 0;
    float rainfallData[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.5, 0.9, 0.3, 0.6, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    printf(" YEAR\t\t RAINFALL (inches)\n");

    for (year = 0, totalRainfallInAYear = 0; year < YEARS; year++)
    {
        for (month = 0, avgYearlyRainfall = 0; month < MONTHS; month++)
        {
            avgYearlyRainfall += rainfallData[year][month];
        }
        printf("%5d\t%15.1f\n", 2010 + month, avgYearlyRainfall);
        totalRainfallInAYear += avgYearlyRainfall;
    }
    printf("\n");
    printf("Total Yearly Rainfall in the past 5 Years = %.2f\n\n", totalRainfallInAYear);
    printf("Yearly Average Rainfall = %.1f\n\n", totalRainfallInAYear/YEARS);

    printf("MONTHLY AVERAGES: \n");
    printf(" Jan     Feb     Mar     Apr     May     Jun     Jul     Aug     Sep     Oct     Nov     Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, avgMonthlyRainfall = 0; year < YEARS; year++)
            avgMonthlyRainfall += rainfallData[year][month];
        printf("%4.1f\t", avgMonthlyRainfall/YEARS);
    }

    printf("\n");

    return 0;
}