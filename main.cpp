#include "MenuItem.h"
#include "Menu.h"

using namespace menu;

int main()
{
    MenuComponent *m = new Menu("Diner");

    m->addMenuItem(new MenuItem("Meat", 12));
    m->addMenuItem(new MenuItem("Fish", 10));
    m->addMenuItem(new MenuItem("Steak", 9));

    MenuComponent *mm = new Menu("Dessert");
    mm->addMenuItem(new MenuItem("Icecream", 9));
    mm->addMenuItem(new MenuItem("Cookie", 3));

    m->addMenuItem(mm);

    m->print();

    delete m;

    return 0;
}

