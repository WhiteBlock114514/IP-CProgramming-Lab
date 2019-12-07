////
////  Vending machine.c
////  Ctools
////
////  Created by 祁汝鑫 on 2019/12/7.
////  Copyright © 2019 StariMac1. All rights reserved.
////
//
//#include "Vending machine.h"
//#include <time.h>
//void cYearDay(void);
//
//void cHourMinute(void);
//
//void printResult(int a,int b,int c,int d);
//
//int year,day,hours,minute;
//
//int main()
//{
//    cYearDay();
//    cHourMinute();
//    printResult(year, day, hours, minute);
//}
//
//void cYearDay(void)
//{
//    int* p1 = &year;
//    int* p2 = &day;
//    *p1 = time(NULL)/(86400*365);
//    *p2 = (time(NULL)%(86400*365))/86400;
//}
//
//void cHourMinute(void)
//{
//    int* p1 = &hours;
//    int* p2 = &minute;
//    *p1 = ((time(NULL)%(86400*365))%86400)/3600;
//    *p2 = (((time(NULL)%(86400*365))%86400)%3600)/60;
//}
//
//void printResult(int a,int b,int c,int d)
//{
//    printf("Years:%d Days:%d Hours:%d Minutes:%d\n",a,b,c,d);
//}
