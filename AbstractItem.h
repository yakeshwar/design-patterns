#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H


class AbstractItem
{
    private:
        string m_name;
        float m_weight;
    public:
        AbstractItem(string name, float weight);
        float getWeight();
        virtual ~AbstractItem();

    protected:

    private:
};

#endif // ABSTRACTITEM_H
