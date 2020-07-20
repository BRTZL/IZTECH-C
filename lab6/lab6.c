#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>

#define X 90
#define Y 270

float sinc(float x, float y);

float findMax(float z[X][Y]);
float findMin(float z[X][Y]);

void fillArray(float z[X][Y], float m, float n);

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    float z[X][Y];
    float n, m;
    float min, max;

    printf("\nEnter m and n values as m(space)n : ");
    scanf("%f %f", &m, &n);

    fillArray(z, m, n);
    printf("\n\nZmin : %f", findMin(z));
    printf("\nZmax : %f\n", findMax(z));

    min = findMin(z);
    max = findMax(z);

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (z[i][j] > max / 3)
                wprintf(L"%lc", 0x2593);
            else if (z[i][j] >= 0 && z[i][j] <= max / 3)
                wprintf(L"%lc", 0x2592);
            else if (z[i][j] >= min / 3 && z[i][j] <= 0)
                wprintf(L"%lc", 0x2591);
            else if (z[i][j] < min / 3)
                printf("%lc", 32);
        }
        printf("\n");
    }

    return 0;
}

float sinc(float x, float y)
{
    float ans = ((tan(pow(x, 2) + pow(y, 2))) / (pow(x, 2) + pow(y, 2)));
    return ans;
}

float findMax(float n[X][Y])
{
    float Zmax = -99999999;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (n[i][j] > Zmax)
                Zmax = n[i][j];
        }
    }
    return Zmax;
}

float findMin(float n[X][Y])
{
    float Zmin = 99999999;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (n[i][j] < Zmin)
                Zmin = n[i][j];
        }
    }
    return Zmin;
}

void fillArray(float z[X][Y], float m, float n)
{
    float incx = (n - m) / X;
    float incy = (n - m) / Y;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            z[i][j] = sinc(m + ((i + 1) * incx), m + ((j + 1) * incy));
        }
    }
}
