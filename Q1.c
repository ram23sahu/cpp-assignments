
#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 2;
    ptrDate->year = 2024;
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date - %d/%d/%d",ptrDate->day,ptrDate->month,ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("enter day - ");
    scanf("%d",&ptrDate->day);

    printf("enter month - ");
    scanf("%d",&ptrDate->month);

    printf("enter year - ");
    scanf("%d",&ptrDate->year);
    
    
}

int menu(struct Date*d1)
{
    int choice = 1;
    while (choice != 0)
    {

        printf("0- To Exit \n");
          

        printf("1- To Initialize the date \n");
    

        printf("2- To prit date \n");
    

        
        printf("3- To accept date \n");
        scanf("%d",&choice);


        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            initDate(d1);
            printDateOnConsole(d1);
            break;
        case 2:
            printDateOnConsole(d1);
            break;
        case 3:
            acceptDateFromConsole(d1);
            printDateOnConsole(d1);
            break;
        }
    }
    return 0;
}

int main()
{
    struct Date d1;
    menu(&d1);
    return 0;
}