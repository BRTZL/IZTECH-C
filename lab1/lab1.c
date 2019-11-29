//
//  main.c
//  app
//
//  Created by Bartu OZEL on 18.10.2019.
//  Copyright © 2019 Bartu OZEL. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{

    int a,b,c;
    float x,y;
    float delta;
    
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    
    delta=pow(b, 2) - 4*a*c;
    
    x=(-b + sqrt(delta))/(2*a);
    y=(-b - sqrt(delta))/(2*a);
    
    //printf("\n%f",delta);
    //printf("\n%f",sqrt(delta));
    printf("\nx1 : %f",x);
    printf("\nx2 : %f\n",y);
    
    if(delta<0)
        printf("Complex roots");
    else if(delta==0)
        printf("Repeated roots");
    else if (delta>0)
        printf("Real roots");
    
    printf("\n");
}
