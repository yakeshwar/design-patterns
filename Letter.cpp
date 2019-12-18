#include<string>
#include "Letter.h"

Letter::Letter(string name, int weight)
{
    m_name = name;
    m_weight = weight;
}

float Letter::getWeight()
{
    return m_weight;
}

float Letter::getCost()
{
    return ((0.2*getWeight()) + 4);
}
Letter::~Letter()
{

}
