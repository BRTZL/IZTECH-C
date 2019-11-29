#include <stdio.h>
#include <math.h>

int opt, in;
int isPrime();
int intervalPrime();
int factorizationPrime();

int main()
{
    printf("\n1. Check a number prime or not");
    printf("\n2. Print all prime numbers between two numbers");
    printf("\n3. Prime factorization\n\nChoose option: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("\n\nEnter a positive number: ");
        scanf("%d", &in);
        isPrime(in, 1);
        break;

    case 2:
        intervalPrime();
        break;

    case 3:
        factorizationPrime();
        break;

    default:
        printf("Invalid input");
        break;
    }
}

int isPrime(int num, int option)
{

    int p = 0;

    if (num == 1)
    {
        printf("\nNot Prime Number - 1");
        return (0);
    }

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            p = 1;
            if (option == 1)
                printf("\nNot Prime Number - %d", num);
            break;
        }
    }
    if (p == 0)
    {
        printf("\nPrime Number - %d", num);
        return (1);
    }
    else
        return (0);
}

int intervalPrime()
{
    int min, max, num, p = 0;
    printf("\n\nEnter a min number: ");
    scanf("%d", &min);
    printf("Enter a max number: ");
    scanf("%d", &max);
    for (int i = min; i < max; i++)
    {
        isPrime(i, 0);
    }
    return (0);
}

int factorizationPrime()
{
    int num, number, p = 0;
    int power[10];
    printf("\n\nEnter a positive number: ");
    scanf("%d", &num);
    number = num;
    if (isPrime(num, 1) == 0)
    {
        for (int i = 2; i <= number / 2; i++)
        {
            while (num % i == 0)
            {
                num = num / i;
                p++;
            }
            if (p != 0)
                printf("\n%d to the power %d", i, p);
            p = 0;
        }
    }
    return (0);
}