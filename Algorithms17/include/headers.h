#pragma once
//system headers
#include <stdio.h>
#include <iostream>
using namespace std;

//#define Inf SHRT_MAX
#define Inf INT_MAX

#include <list>
#include <set>

//time_t time(time_t * _Time)
/*
此函数会返回从公元1970年1月1日的UTC时间,即从0时0分0秒算起到现在所经过的秒数。
如果_Time为非空指针，此函数将返回值存到_Time指针所指的内存。
返回值：成功则返回秒数，失败则返回((time_t)-1)值，错误原因存于errno中。
*/
#include <time.h>
#include <sys\timeb.h>

//初始化随机数发生器，即设置种子：
//void srand(unsigned int _Seed);
//返回0到RAND_MAX (32767)之间的随机数：
//int rand(void);
#include <stdlib.h>

#include "randomnumber.h"

//handling log
extern FILE *logFP;
void SetLogFile(const char *tag);

//utilities
void Print1DArr(int a[], int n);
void Print1DArr(char a[], int n);
//打印2D距离矩阵
void PrintDistData(int a[], int n);
//打印2D距离矩阵(上三角)
void PrintDistData_UT(int a[], int n);
//打印2D距离矩阵到文件(上三角)
void PrintDistData_UT_F(int a[], int n, int *cities = NULL);
void ConfigConsole();
void GetDateTime(char *str);

//sorting
void BubbleSort(int a[], int n);
void InsertionSort(int a[], int n);
void QuickSort(int a[], int low, int high);
void Merge2SortedSubArrA(int a[], int p, int q, int r);
void MergeSort(int a[], int low, int high);
void MakeHeapA(int H[], int n);
void HeapSort(int H[], int n);

//classical
int LinearSearch(int a[], int n, int x);
int BinarySearch(int a[], int n, int x);
int EuclidGCD(int a, int b);

//Exhaustive search
bool PrimalTestTrialDiv(int n);
void ESSubsetTree(int n);
void TestES0_1Knapsack(int aN, int aW, int *wa, int *va);
void TestESTSP(int n, int *aMat);
void TestESTSP_UT(int n, int *aMat);
void TestESTSP_UT_F(int n, int *aMat);
void TestESTSP_UT_N(int n, char *cityNames[], int *aMat);
void TestESTSP_UT_NP(int n, char *cityNames[], int *aMat);
void TestESTSP_UT_TH(int n, char *cityNames[], int *aMat);
