#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 10

void print_array(int str[N][N]);

int *getRandom(int min, int max, int print, int odd)
{
    static int r[10];
    /* set the seed */
    //srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        while (((r[i] = rand() / (2147483647 / (max - min)) + min) % 2 == 0) && odd == 1)
            r[i] = rand() / (2147483647 / (max - min)) + min;
        if (print)
            printf("r[%d] = %d\n", i, r[i]);
    }
    return r;
}

int *game()
{
    int arr[N][N], player, gen = 0, count = 0, x, y;
    memset(arr, 0, sizeof(arr));
    printf("\nHow many players :");
    scanf("%d", &player);
    int players[player + 1];
    memset(players, 0, sizeof(players));
    while (count != 100)
    {
        for (int i = 1; i <= player; i++)
        {
            x = getRandom(0, 10, 0, 0)[0];
            y = getRandom(0, 10, 0, 0)[1];

            if (arr[x][y] == 0)
            {
                arr[x][y] = i;
                count++;
                players[i]++;
            }
            gen++;
        }
    }
    print_array(arr);
    printf("\n\nNumber of (x,y) index generation: %d", gen);
    printf("\nRatio: %0.2f", gen / pow(N, 2));

    for (int i = 1; i <= player; i++)
        printf("\nPlayer[%d] : %d", i, players[i]);
    return 0;
}

void print_array(int str[N][N])
{
    printf("\n\t array -> \n\t");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("[%d] ", str[i][j]);
        }
        printf("\n\t");
    }
}

int main()
{
    int option = 0, min = 0, max = 0;

    printf("\n\nBefore continue please enter which mode you want to use: ");
    printf("\n\t1. Random Number Generator");
    printf("\n\t2. Game\n : ");
    scanf("%d", &option);

    while (option != 1 && option != 2)
    {
        fflush(stdin);
        printf("\nYou entered invalid choose");
        printf("\n\nBefore continue please enter which mode you want to use: ");
        printf("\n\t1. Random Number Generator");
        printf("\n\t2. Game\n : ");
        scanf("%d", &option);
    }

    switch (option)
    {
    case 1:
        printf("\nEnter the min and max value : ");
        scanf("%d %d", &min, &max);
        getRandom(min, max, 1, 1);
        break;

    case 2:
        game();
        break;
    }
}