#include<iostream>
#include<string>
#include<string.h>

#include "IntegerSorter.h"

using namespace std;

IntegerSorter::IntegerSorter()
{
//    name = new char[10];
}
void IntegerSorter::bubbleSort()
{
    cout<<"\nBubble Sort is inprogress"<<endl;
}

void IntegerSorter::mergeSort()
{
    cout<<"\nMerge Sort is inprogress"<<endl;
}
/*
void IntegerSorter::sort(char *name)
{
    if((strcmp(name,"bubble") == 0))
    {
        bubbleSort();
    }
    if((strcmp(name,"merge") == 0))
    {
        mergeSort();
    }
}
*/
void IntegerSorter::setCompareStrategy(ICompareStrategy *compareStratey)
{
    this->m_compareStratey = compareStratey;
}

void IntegerSorter::setSortStrategy(ISortStrategy  *sortStrategy)
{
    this->m_sortStrategy = sortStrategy;
}

void IntegerSorter::sort()
{
    cout<<"\nIStrategy ==> ISortStrategy"<<endl;
    cout<<"\nIStrategy ==> ICompareStrategy"<<endl;
    m_sortStrategy->sort(m_compareStratey);
}

IntegerSorter::~IntegerSorter()
{
    //dtor
}
