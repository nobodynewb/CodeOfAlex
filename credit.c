#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number = get_long("What is your card number?\n");
    long backupNumber = number;
    long n = number;
    int length = 0;
    int sumby2 = 0;
    int normalsum = 0;
    int legitChecker;
    long modnumber;
    while (n!= 0)
    {
        n = n/10;
        length++;
    }
    for (int i = 1; i <= length; i++)
    {
        if((i % 2) != 0)
        {
            modnumber = number % 10;
            normalsum += modnumber;
            number = number/10;
        }
        else if((i % 2) == 0)
        {
            modnumber = number % 10;
            modnumber = modnumber * 2;
            long digitsSum = modnumber / 10 + modnumber % 10;
            sumby2 += digitsSum;
            number = number/10;
            modnumber = modnumber/2;
        }
    }
    legitChecker = normalsum + sumby2;
    if ((legitChecker % 10) != 0 )
    {
        printf("INVALID\n");
    }
    else if (length == 15 && ((int)(backupNumber / pow(10,13)) == 34 || (int) (backupNumber / pow(10,13)) == 37) )
    {
        printf("AMEX\n");
    }
    else if (length == 13)
    {
        printf("VISA\n");
    }
    else if (length == 16 && (int) (backupNumber / pow(10,15)) == 4)
    {
        printf("VISA\n");
    }
    else if (length == 16 && ( (int) (backupNumber / pow(10,14)) == 51 || (int) (backupNumber / pow(10,14)) == 52 || (int) (backupNumber / pow(10,14)) == 53 || (int) (backupNumber / pow(10,14)) == 54 || (int) (backupNumber / pow(10,14)) == 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
