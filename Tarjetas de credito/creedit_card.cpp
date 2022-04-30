#include <cs50.h>
#include <stdio.h>
#include <math.h>


int VISA(long x);
int MASTERCARD(long x);
int Amex(long x);
int check(long x);
int main(void)
{
    int cc;
    long x;
    do
    {
        // Get the credit card number
        x = get_long("Number: ");
    }
    // While x is less than 0, this loop will continue forever
    while (x < 0);
    // Cal the number of digits the input give
    cc = 1 + floor(log10(x));
    // If the cc is 16 or 15 or 13 is true
    if (cc == 16 || cc == 15 || cc == 13)
    {
        int b = check(x);
        if (b == 0)
        {
            int q = Amex(x);
            int w = MASTERCARD(x);
            int e = VISA(x);
            int su = q + w + e;
            switch (su)
            {
                case 0:
                    printf("INVALID\n");
                    break;
                case 1:
                    printf("AMEX\n");
                    break;
                case 2:
                    printf("MASTERCARD\n");
                    break;
                case 3:
                    printf("VISA\n");
                    break;
            }
        }
        else
        {
            printf("INVALID\n");
        }

    }
    else
    {
        printf("INVALID\n");
    }


}

int check(long x)
{
    int total = 0;
    int total2 = 0;
    // For loop int i = x, as i is greater than one, i will divied itself by 100
    for (long i = x / 10; i > 0; i = i / 100)
    {
        // Num is equal to i the second most right number
        int num = i % 10;
        int gen = num * 2;
        if (gen > 9)
        {
            gen = gen % 10 + gen / 10;
        }
        total += gen;
    }
    for (long i = x ; i > 0; i = i / 100)
    {
        int z = i % 10;
        total2 += z;
    }
    int sum = total + total2;
    int remain = sum % 10;
    return remain;
}

int Amex(long x)
{
    int firsttwo;
    for (long i = x; i > 10; i = i / 10)
    {
        firsttwo = i;
    }
    if (firsttwo == 34 || firsttwo == 37)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int MASTERCARD(long x)
{
    int firsttwo;
    for (long i = x; i > 10; i = i / 10)
    {
        firsttwo = i;
    }
    if (firsttwo >= 51 && firsttwo <= 55)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int VISA(long x)
{
    int firstone;
    for (long i = x; i > 0; i = i / 10)
    {
        firstone = i;
    }
    if (firstone == 4)
    {
        return 3;
    }
    else
    {
        return 0;
    }
}