#include "Box.h"

Box::Box(string name)
{
    m_name = name;

}

float Box::getWeight()
{
    list<AbstractItem>::iterator it;
    list<Box>::iterator boxIt;
    // All Letters, Books weights
    for(it = items.begin(); it!= items.end(); it++)
    {
        total += (*it)->getWeight();
    }
    // Boxes weight
    for(boxIt = boxes.begin(); boxIt!= boxes.end(); boxIt++)
    {
        total += (*boxIt)->getWeight();
    }

    return total;
}
float Box::getCost()
{
    // Need to calculate all items costs to gether
    return ((0.35 * getWeight()) + 10);
}

void Box::addItem(AbstractItem *Item)
{
    Items.push_back(Item);
}

void Box::addBox(Box *box)
{
    boxes.push_back(box);
}

void Box::display()
{
    //Display all items + Box
    cout<<"\nBox name=\n"<<m_name<<endl;
    //list of items
    auxDisplay();
}

void Box::auxDisplay()
{
    list<AbstractItem>::iterator it;
    list<Box>::iterator boxIt;
    // All Letters, Books weights
    for(it = items.begin(); it!= items.end(); it++)
    {
        cout<<"\nItems"<<it->display();
    }
    // Boxes weight
    for(boxIt = boxes.begin(); boxIt!= boxes.end(); boxIt++)
    {
        cout<<"\nBoxes"<<(*boxIt)->display();
    }
}

Box::~Box()
{
    //dtor
}
