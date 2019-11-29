#include <stdio.h>
#include <math.h>

int cal(int vec[2], int sel, float a);

int main()
{
    int vec[3];
    float sum[3];
    int selection;
    float a;

    printf("enter value for vec[0][0]: ");
    scanf("%d", &vec[0]);
    printf("\nenter value for vec[1][0]: ");
    scanf("%d", &vec[1]);
    printf("\nenter value for vec[2][0] ");
    scanf("%d", &vec[2]);

    printf("\n1. Rotation Around X-Axis");
    printf("\n2. Rotation Around Y-Axis");
    printf("\n3. Rotation Around Z-Axis");

    printf("\n\nSelect the axis to rotate\n");
    scanf("%d", &selection);
    if (selection > 3 && selection < 0)
        return 0;

    printf("\nRotation angle\n");
    scanf("%f", &a);
    a = a * 3.1415 / 180;

    float x[3][3] = {
        {1, 0, 0},
        {0, cos(a), -sin(a)},
        {0, sin(a), cos(a)},
    };

    float y[3][3] = {
        {cos(a), 0, sin(a)},
        {0, 1, 0},
        {-sin(a), 0, cos(a)},
    };

    float z[3][3] = {
        {cos(a), -sin(a), 0},
        {sin(a), cos(a), 0},
        {0, 0, 1},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (selection)
            {
            case 1:
                sum[i] += x[i][j] * vec[j];
                break;

            case 2:
                sum[i] += y[i][j] * vec[j];
                break;

            case 3:
                sum[i] += z[i][j] * vec[j];
                break;

            default:
                break;
            }
        }
    }

    printf("Resultant vector is ");

    for (int i = 0; i < 3; i++)
    {
        printf("\n%f", sum[i]);
    }

    return 0;
}