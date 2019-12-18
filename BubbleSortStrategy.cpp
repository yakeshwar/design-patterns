#include<iostream>
#include "BubbleSortStrategy.h"
#include "ICompareStrategy.h"
using namespace std;

BubbleSortStrategy::BubbleSortStrategy()
{
    //ctor
}

void BubbleSortStrategy::sort(ICompareStrategy *compareStrtegy)
{
    cout<<"\nSortStrategy ==> ICompareStragy"<<endl;
    cout<<"\nBased on Compare strategy-Bubble Sort Stragey applied"<<endl;
    compareStrtegy->cmp(10,20);
}

BubbleSortStrategy::~BubbleSortStrategy()
{
    //dtor
}
