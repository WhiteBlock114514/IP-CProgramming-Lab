//
//  Vending machines.c
//  Ctools
//
//  Created by StariMac1 on 2019/12/7.
//  Copyright © 2019 StariMac1. All rights reserved.
//
//
#include <stdio.h>

struct Change{
    int p200;
    int p100;
    int p50;
    int p20;
    int p10;
    int p5;
    int p2;
    int p1;
};

struct Change getChange(int a,int b);

void printChange(struct Change);

int main()
{
    struct Change coins;
    coins = getChange(7, 10);
    printChange(coins);
    coins = getChange(56, 70);
    printChange(coins);
    coins = getChange(124, 200);
    printChange(coins);
    coins = getChange(1232, 2000);
    printChange(coins);

    getchar();
    return 0;
}

struct Change getChange(int a,int b)
{
    int c = b - a;
    struct Change m;
    m.p200 = c/200;
    m.p100 = (c%200)/100;
    m.p50 = ((c%200)%100)/50;
    m.p20 = (((c%200)%100)%50)/20;
    m.p10 = ((((c%200)%100)%50)%20)/10;
    m.p5 = (((((c%200)%100)%50)%20)%10)/5;
    m.p2 = ((((((c%200)%100)%50)%20)%10)%5)/2;
    m.p1 = ((((((c%200)%100)%50)%20)%10)%5)%2;
    return m;
}

void printChange(struct Change m)
{
    printf("200\t100\t50\t20\t10\t5\t2\t1\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",m.p200,m.p100,m.p50,m.p20,m.p10,m.p5,m.p2,m.p1);
}
