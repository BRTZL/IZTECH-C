#include <stdio.h>
#include <math.h>

#define MAX 10

double calc(int num[], int x, int deg);
float f(float x);
float binsearch();

int main()
{
    int i, x, coef[10];
    float y;

    printf("Please enter x: ");
    scanf("%d", &x);
    printf("Please enter coefficients: \n");

    for (i = 0; i < MAX; i++)
    {
        if (scanf("%d", &coef[i]) != 1)
            break;
    }

    printf("\ncount = %d\n", i);
    printf("y = %f\n\n\n", calc(coef, x, i));

    fflush(stdin);

    printf("Please enter x: ");
    scanf("%f", &y);
    printf("y = %f\n\n", f(y));

    printf("root = %lf\n\n", binsearch());

    return 0;
}

double calc(int num[], int x, int deg)
{
    double y = 0;
    for (int i = deg - 1; i >= 0; i--)
    {
        y += num[deg - 1 - i] * pow(x, i);
    }
    return y;
}

float f(float x)
{
    return pow(x, 3) - 25.3 * pow(x, 2) + 54.5 * x + 1030;
}

float binsearch()
{
    float low = 2, high = 15, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (f(mid) < 0)
            high = mid - 0.001;
        else if (abs(f(mid)) < 0.001)
            return mid;
        else if (f(mid) > 0)
            low = mid + 0.001;
        else
            return -1;
    }
}