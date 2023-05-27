#include <stdio.h>

enum Month 
{
    January = 1,February,March,April,May,June,July,August,September,
    October,November,December
};

int main() 
{
    int month_number;
    printf("Enter a month number (1-12): ");
    scanf("%d", &month_number);
    switch (month_number) {
        case January:
            printf("January has 31 days.\n");
            break;
        case February:
            printf("February has 28 or 29 days.\n");
            break;
        case March:
            printf("March has 31 days.\n");
            break;
        case April:
            printf("April has 30 days.\n");
            break;
        case May:
            printf("May has 31 days.\n");
            break;
        case June:
            printf("June has 30 days.\n");
            break;
        case July:
            printf("July has 31 days.\n");
            break;
        case August:
            printf("August has 31 days.\n");
            break;
        case September:
            printf("September has 30 days.\n");
            break;
        case October:
            printf("October has 31 days.\n");
            break;
        case November:
            printf("November has 30 days.\n");
            break;
        case December:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number.\n");
            break;
    }
    return 0;
} 
