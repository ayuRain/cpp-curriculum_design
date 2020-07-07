#include <bits/stdc++.h>

using namespace std;

class INGREDIENTS{//食材类
    private : 
        static int _num;//统计食材种类
    protected :
        double price;//基类价格
    //  static int num;//食材数量
        string name;//食材名字
    public :
        INGREDIENTS(){ };
        INGREDIENTS(double _price, string _name);
        ~INGREDIENTS(){ };
        virtual void print()
        {
            cout << " INGREDIENTS's number is " <<  _num << "and This INGREDIENTS's name is " << name << " and the price is " << price << endl;
        }
};

int INGREDIENTS::_num = 0;

INGREDIENTS::INGREDIENTS(double _price, string _name) : price(_price), name(_name)
{
    _num++; 
}

class MEAT : public INGREDIENTS{//肉类派生
    public :
        string species;//派生： 肉类种类
        string level;//派生： 肉类等级
        string origin;//派生： 肉类产地
        void print();
};

class AQUATIC_PRODUCTS : public INGREDIENTS{//水产品派生
    public : 
        string origin;//派生: 产地
        string 
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
