#include <stdio.h>
#include <cs50.h>

void makeArrayNumber(void);

int main(void)
{
    long cardNumber;
    long copyCardNumber;
    int arr[15];
    int arr2[10];
    int arr3[10];
    int lastNumberOfCard;
    int sumOfPrudukt = 0;
    int sumToSum = 0;
    int firstNumberOfCard;

    cardNumber = get_long("What is your card Number? ");

    long copyCardNumber2 = cardNumber;
    copyCardNumber = cardNumber;
    for(int i = 0; i <= 15; i++)
    {
        lastNumberOfCard = cardNumber % 10;
        cardNumber /= 10;
        arr[i] = lastNumberOfCard;
        //printf("%i  ", arr[i]);


    }


    for(int n = 1, y = 0; n <= 15  ; n += 2, y++)
    {
        arr[n] *= 2;
        arr3[y] = arr[n];
        if(arr3[y] >= 10)/////////////////
        {
            int copy = arr3[y];
            int seperate = copy % 10;
            arr3[y] = copy / 10;

            sumOfPrudukt += arr3[y];
            arr3[y + 1] = seperate;

            y++;

        }
        //printf("%i  ", arr3[y]);
        sumOfPrudukt += arr3[y];

    }




    for(int j = 0; j <= 15 ; j += 2)
    {


        sumToSum += arr[j];



    }
    sumOfPrudukt += sumToSum;





    if(sumOfPrudukt % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (copyCardNumber2 < 100000000000 || copyCardNumber2 > 10000000000000000)
    {
        printf("INVALID\n");

    }

    else
    {
        long cardLength = copyCardNumber;
        long container = copyCardNumber;

        while(container >= 100)
        {
            container /= 10;

        }
        while(copyCardNumber >= 10)
        {
            copyCardNumber /= 10;

        }
        firstNumberOfCard = copyCardNumber;

        switch(firstNumberOfCard)
        {

            case 4:
            if(cardLength > 10000000000000000 || cardLength < 1000000000000)
            {
                printf("INVALID\n");
            }
            else if(cardLength > 10000000000000 && cardLength < 1000000000000000)
            {
                printf("INVALID\n");
            }
            else
            {
                printf("VISA\n");

            }

            break;

            case 5:
            if(container < 51 || container > 55)
            {
                printf("INVALID\n");

            }else
            {
                printf("MASTERCARD\n");

            }
            break;

            case 3:
            if(cardLength > 1000000000000000)
            {
                printf("INVALID\n");


            }

            else if(container == 34 || container == 37 )
            {
                printf("AMEX\n");


            }else
            {
                printf("INVALID\n");


            }
            break;

            default:
            printf("INVALID\n");
            break;

        }
    }


    return 0;
}
