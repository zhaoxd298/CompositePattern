#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H

namespace menu
{

class MenuComponent
{
public:
    class UnSupportedOperation{};
    MenuComponent(){}
    virtual ~MenuComponent(){}

    virtual void addMenuItem(MenuComponent *m)
    {
        throw UnSupportedOperation();
    }
    virtual void print(int indent = 0) = 0;
};
}

#endif

