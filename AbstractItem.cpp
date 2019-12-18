#include "AbstractItem.h"

AbstractItem::AbstractItem(string name, float weight)
{
    m_name = name;
    m_weight = weight;
}

float AbstractItem::getWeight()
{
    return m_weight;
}

AbstractItem::~AbstractItem()
{
    //dtor
}
