#include<iostream>
using namespace std;

class car
{
     public:
     int light;
     int sit;
};


  int main()
  {
    car c1,c2;
      
      c1.light=8;
      c1.sit=5;
      
        cout<<"car light is:"<<c1.light<<endl;
        cout<<"car sit is:"<<c1.sit<<endl;
        
        
        
        c2.light=10;
        c2.sit=7;
      
        cout<<"car light is:"<<c2.light<<endl;
        cout<<"car sit is:"<<c2.sit<<endl;
        
        return 0;
      }
