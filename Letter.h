#ifndef LETTER_H
#define LETTER_H


class Letter : public Ithings
{
    private:
        string m_name;
        int m_weight;
    public:
        Letter(string name, int weight);
        float getCost();
        float getWeight();
        virtual ~Letter();
        void display();

    protected:

    private:
};

#endif // LETTER_H
