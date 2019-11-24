// 610.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
int main()
{
    int a[15] = {90,85,80,75,70,65,60,55,50,45,40,30,20,10,5 };
    int x, low, high, mid, n;
    n = 15;
    low = 0;
    high = n - 1;
    scanf("%d", &x);
    while (low <= high)
 {
        mid = (low + high) / 2;
        if (x > a[mid])
            high = mid - 1;
        else if (x < a[mid])
            low = mid + 1;
        else if (x == a[mid]){
            printf("%d is %dth number!\n", x, mid+1);
            break;
        }
    }
    if (x != a[mid])
        printf("No match!\n");
    return 0;
}
