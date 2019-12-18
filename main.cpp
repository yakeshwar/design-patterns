#include <iostream>
#include"IntegerSorter.h"
#include "AscCmpStrateggy.h"
#include "BubbleSortStrategy.h"

using namespace std;

/*
context==>IStrategy | ==> Strategy1 (ex. file -> text, audio,video)
                   | ==> Strategy2  (ex. file -> graph, table,curve)
*/
int main()
{
    IntegerSorter *sorter = new IntegerSorter();

    //strategy 1 : comparestrategy -> Ascending order
    sorter->setCompareStrategy(new AscCmpStrateggy());

    //strategy 2 : Sortstrategy - use BubbleSort
    sorter->setSortStrategy(new BubbleSortStrategy());

    cout<<"\nTest==>IStrategy"<<endl;
    sorter->sort();

    return 0;
}
