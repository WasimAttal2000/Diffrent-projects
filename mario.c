#include <stdio.h>
#include <cs50.h>

void printHashes(int h);
void printGab(void);


int main(void)
{
    int hight;
    do
    {
        hight = get_int("how hight should the pyramid be? ");
    }
    while(hight <=0 || hight >= 9);

    printHashes(hight);

    return 0;
}


void printHashes(int h)
{
    int counter = h -1;
    for(int i = 1; i <= h; i++)
    {


        for(int j = 1; j <= counter; j++ )
        {
            printf(" ");

        }

        for(int f = 0; f < i; f++)
        {

            printf("#");

        }

    counter--;

    printGab();

    for(int j = 0; j < i; j++)
    {

        printf("#");

    }

    printf("\n");



    }


}


void printGab(void)
{
    printf("  ");
}
