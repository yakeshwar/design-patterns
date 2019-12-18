#ifndef ASCCMPSTRATEGGY_H
#define ASCCMPSTRATEGGY_H

#include "ICompareStrategy.h"

class AscCmpStrateggy : public ICompareStrategy
{
    public:
        AscCmpStrateggy();
        virtual void cmp(int e1, int e2);
        virtual ~AscCmpStrateggy();

    protected:

    private:
};

#endif // ASCCMPSTRATEGGY_H
