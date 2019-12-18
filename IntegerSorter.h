#ifndef INTEGERSORTER_H
#define INTEGERSORTER_H
#include<string>
#include "ICompareStrategy.h"
#include "ISortStrategy.h"


class IntegerSorter
{
    private:
    ICompareStrategy *m_compareStratey;
    ISortStrategy *m_sortStrategy;
    public:
        char *name;
        IntegerSorter();
        //void sort(char* name);
        void sort();
        void bubbleSort();
        void mergeSort();
        void setCompareStrategy(ICompareStrategy *compareStratey);
        void setSortStrategy(ISortStrategy  *sortStrategy);
        virtual ~IntegerSorter();

    protected:

    private:
};

#endif // INTEGERSORTER_H
