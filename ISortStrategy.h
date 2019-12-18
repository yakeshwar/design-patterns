#ifndef ISORTSTRATEGY_H
#define ISORTSTRATEGY_H
#include "ICompareStrategy.h"

class ISortStrategy
{
    public:
        ISortStrategy();
        virtual void sort(ICompareStrategy *compareStrtegy)=0;
        void setCompareStrategy(ICompareStrategy *compareStratey);
        void setCompareStrategy(ISortStrategy  *sortStrategy);
        virtual ~ISortStrategy();

    protected:

    private:
};

#endif // ISORTSTRATEGY_H
