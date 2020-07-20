#include <stdio.h>

int main()
{
    int mid[2], final;
    printf("Mid Term 1: ");
    scanf("%d", &mid[0]);
    printf("Mid Term 2: ");
    scanf("%d", &mid[1]);
    printf("Final: ");
    scanf("%d", &final);
    printf("Course Grade = %f", (mid[0] * 0.25 + mid[1] * 0.25 + final * 0.5));
}