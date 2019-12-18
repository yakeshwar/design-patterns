#include "Book.h"

Book::Book(string name, int weight)
{
    m_name = name;
    m_weight = weight;
}

int Book::getWeight()
{
    return m_weight;
}
float Book::getCost()
{
    return (0.2*getWeight() +100);
}
Book::~Book()
{
    //dtor
}
