//
//  Vending machine.c
//  Ctools
//
//  Created by 祁汝鑫 on 2019/12/7.
//  Copyright © 2019 StariMac1. All rights reserved.
//

#include "Vending machine.h"
#include <time.h>
void cYearDay(int* p1,int* p2);

void cHourMinute(int* p1,int* p2);

void printResult(int* a,int* b,int* c,int* d);

int main()
{
    int year,day,hours,minute;
    cYearDay(&year,&day);
    cHourMinute(&hours,&minute);
    printResult(&year, &day, &hours, &minute);
}

void cYearDay(int* year,int* day)
{
    *year = time(NULL)/(86400*365);
    *day = (time(NULL)%(86400*365))/86400;
}

void cHourMinute(int* hours,int* minute)
{
    *hours = ((time(NULL)%(86400*365))%86400)/3600;
    *minute = (((time(NULL)%(86400*365))%86400)%3600)/60;
}

void printResult(int* a,int* b,int* c,int* d)
{
    printf("Years:%d Days:%d Hours:%d Minutes:%d\n",*a,*b,*c,*d);
}

