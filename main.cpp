#include <bits/stdc++.h>

using namespace std;

class INGREDIENTS{//食材类
    private : 
        static int _num;
    protected :
        double price;//基类价格
        static int num;//食材数量
        string name;//食材名字
    public :
        INGREDIENTS(){ };
        INGREDIENTS(double _price, string _name);
        ~INGREDIENTS(){ };
};

int INGREDIENTS::_num = 0;

INGREDIENTS::INGREDIENTS(double _price, string _name) : price(_price), name(_name)
{
    _num++; 
}

class MEAT : public INGREDIENTS{//肉类派生
    public :
        string species;
        string level;
        string origin;
};

class AQUATIC_PRODUCTS : public INGREDIENTS{//水产品派生
};

class VRGETABLES : public INGREDIENTS{//蔬菜类派生
};

class CARBOHYDRATE : public INGREDIENTS{//碳水类派生
};

class CONDIMENT : public INGREDIENTS{//调味品派生
};

int main()
{
    return 0;
}
