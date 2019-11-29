// LAB07

#include <stdio.h>
#include <math.h>

float sum(int arr[], int n);
double mean(int arr[], int n);
double std_deviation(int arr[], int n);

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

float sum(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

double mean(int arr[], int n)
{
    return sum(arr, n) / n;
}

double std_deviation(int arr[], int n)
{
    float std = 0, meanV;
    meanV = mean(arr, n);
    for (int i = 0; i < n; i++)
    {
        std += pow((arr[i] - meanV), 2);
    }
    return pow(std / n, 0.5);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    printf("\n");
}

int main()
{
    int num;
    printf("How many numbers you will be entering? ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: \n");
    printArray(arr, num);

    bubbleSort(arr, num);

    printf("Sorted array: \n");
    printArray(arr, num);

    printf("\nTotal of numbers   : %f", sum(arr, num));

    printf("\nAverage of Numbers : %f", mean(arr, num));

    printf("\nStandart Deviation : %f", std_deviation(arr, num));

    return 0;
}
