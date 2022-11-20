//Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day :");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("I hope your begenning Day Monday will be awesome");
        break;
        case 2:
        printf("Today is the day of auspicious shopping that is Mamgal market");
        break;
        case 3:
        printf("Day of bajrangdal Wednesday");
        break;
        case 4:
        printf("Jumma Raat Dua padva do ");
        break;
        case 5:
        printf("Special day of every Muslim That is Jummma Mubarak");
        break;
        case 6:
        printf("Special day for Every employee on that company which provide holiday of Saturday");
        break;
        case 7:
        printf("Enjoy Holiday Guys ............");
        break;
        default:
        printf("Invalid Day choice between 1 to 7 ");
    }
    return 0;
}
