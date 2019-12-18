#include <iostream>

using namespace std;

// Box --> Letter , Book

int main()
{
    //Letters -- Name, weight
    Letter *l1 = new Letter("Letter", 10);

    Book *b1 = new Book("Book1", 200);
    Book *b2 = new Book("Book2", 400);


    Box *box1 = new Box("box1");

    //Add items into Boxes
    box1->addItem(b1);
    box1->addItem(l1);

    // Display items
    box1->display();
    //Get the whole items weight
    cout<<"\nTotal Box Weight=\n"<<box1->getWeight()<<endl;



     return 0;
}
