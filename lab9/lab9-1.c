#include <stdio.h>
#include <math.h>

float calc(float x);
float binsearch();

int main()
{
    float x;
    printf("Please enter x: ");
    scanf("%f", &x);
    printf("y = %f\n\n", calc(x));

    printf("root = %f\n\n", binsearch());
}

float calc(float x)
{
    return pow(x, 3) - 25.3 * pow(x, 2) + 54.5 * x + 1030;
}

float binsearch()
{
    float low = 2, high = 15, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        printf("%f\n", fabsf(calc(mid)));
        if (calc(mid) < 0)
            high = mid - 0.0001;
        else if (fabsf(calc(mid)) < 0.01)
            return mid;
        else if (calc(mid) > 0)
            low = mid + 0.0001;
        else
            return -1;
    }
}
