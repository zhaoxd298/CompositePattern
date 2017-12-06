#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include <string>

#include "MenuComponent.h"

namespace menu
{
using std::string;
using std::cout;
using std::endl;

// 菜单项 （叶节点）
class MenuItem: public MenuComponent
{
public:
    MenuItem(string n, int p): name(n), price(p)
    {}
    ~MenuItem(){}
    void print(int indent)
    {
        for (int i = 0; i < indent; i++)
        {
            cout << "    ";
        }
        cout << name << ":" << price << endl;
    }

private:
    string name;
    int price;
};
}

#endif

