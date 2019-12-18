#ifndef BOX_H
#define BOX_H


class Box
{
    private:
        string m_name;
        //Items
    list<AbstractItem>Items;
    list<Box>boxes;

    public:
        Box(string name);
        void addItem(AbstractItem *Items);
        void addBox(Box *box);
        float getWeight();
        float getCost();
        void display();
        void auxDisplay();
        virtual ~Box();

    protected:

    private:
};

#endif // BOX_H
