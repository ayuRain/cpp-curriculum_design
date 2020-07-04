#include <bits/stdc++.h>

using namespace std;

class INGREDIENTS{
    protected :
        double price;
        static int num;
        string name;
    public :
        INGREDIENTS(){ };
        INGREDIENTS(double _price, string _name) : price(_price), name(_name){ };
        ~INGREDIENTS(){ };


};

class MEAT : public INGREDIENTS{
    public :
        string species;
        string level;
        string origin;
};

class APUATIC_PRODUCTS : public INGREDIENTS{
};

class VRGETABLES : public INGREDIENTS{
};

class CARBOHYDRATE : public INGREDIENTS{
};

class CONDIMENT : public INGREDIENTS{
};

int main()
{
    return 0;
}
