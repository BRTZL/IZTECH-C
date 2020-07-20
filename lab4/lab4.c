#include <stdio.h>
#include <math.h>

int main()
{
    int opt, in, state = 1;
    long double pi = 0;
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        for (int i = 1; i <= 1000; i++)
        {
            pi += 1 / pow(i, 2);
        }
        pi = sqrt(pi * 6);
        printf("%Lf", pi);
        break;

    case 2:
        for (int i = 1; i <= 500; i += 2)
        {
            pi += 1 / pow(i, 2);
        }
        pi = sqrt(pi * 8);
        printf("%Lf", pi);
        break;

    case 3:
        for (int i = 1; i <= 500; i++)
        {
            if (state == 1)
                pi += 1 / pow(i, 2);
            if (state == -1)
                pi -= 1 / pow(i, 2);
            state = -state;
        }
        pi = sqrt(pi * 12);
        printf("%Lf", pi);
        break;

    default:
        printf("Invalid input");
        break;
    }
}