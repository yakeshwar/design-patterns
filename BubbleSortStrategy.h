#ifndef BUBBLESORTSTRATEGY_H
#define BUBBLESORTSTRATEGY_H

#include "ISortStrategy.h"

class BubbleSortStrategy : public ISortStrategy
{
    public:
        BubbleSortStrategy();
        virtual void sort(ICompareStrategy *compareStrtegy);
        virtual ~BubbleSortStrategy();

    protected:

    private:
};

#endif // BUBBLESORTSTRATEGY_H
