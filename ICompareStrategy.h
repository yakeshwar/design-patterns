#ifndef ICOMPARESTRATEGY_H
#define ICOMPARESTRATEGY_H


class ICompareStrategy
{
    public:
        ICompareStrategy();
        virtual void cmp(int e1, int e2)=0;
        virtual ~ICompareStrategy();

    protected:

    private:
};

#endif // ICOMPARESTRATEGY_H
