#ifndef SUBMENU_H
#define SUBMENU_H

#include <iostream>
#include <string>
#include <vector>

#include "MenuComponent.h"

namespace menu
{
using std::string;
using std::cout;
using std::endl;
using std::vector;

// 菜单 （组合）
class Menu: public MenuComponent
{
public:
    Menu(string n): name(n)
    {}
    ~Menu()
    {
        // should free vector memory
    }

    void addMenuItem(MenuComponent *m)
    {
        menuVector.push_back(m);
    }
    void print(int indent)
    {
        for (int i=0; i<indent; i++)
        {
            cout << "    ";
        }
        cout << name << "(Sub):" << endl;
        vector<MenuComponent *>::const_iterator it = menuVector.begin();
        while(it != menuVector.end())
        {
            (*it)->print(indent + 1);
            it++;
        }
    }


private:
    vector<MenuComponent *> menuVector;
    string name;
};
}

#endif

