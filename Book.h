#ifndef BOOK_H
#define BOOK_H


class Book : public Ithings
{
    private:
        string m_name;
        int m_weight;
    public:
        Book(string name, int weight);
        float getWeight();
        float getCost();
        virtual ~Book();
        void display();

    protected:

    private:
};

#endif // BOOK_H
