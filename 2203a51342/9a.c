#include <stdio.h>

enum Month
{
    JANUARY = 1,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,
	OCTOBER,NOVEMBER,DECEMBER
};

int main() 
{
    int monthNum;

    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNum);

    switch (monthNum) {
        case JANUARY:
            printf("January\n");
            break;
        case FEBRUARY:
            printf("February\n");
            break;
        case MARCH:
            printf("March\n");
            break;
        case APRIL:
            printf("April\n");
            break;
        case MAY:
            printf("May\n");
            break;
        case JUNE:
            printf("June\n");
            break;
        case JULY:
            printf("July\n");
            break;
        case AUGUST:
            printf("August\n");
            break;
        case SEPTEMBER:
            printf("September\n");
            break;
        case OCTOBER:
            printf("October\n");
            break;
        case NOVEMBER:
            printf("November\n");
            break;
        case DECEMBER:
            printf("December\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}      
