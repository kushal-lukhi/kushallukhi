#include<iostream>
using namespace std;

class house
{
     public:
     int room;
     int bathroom;
};

class room
{
	public:
	int bad;
	int tv;
};

  int main()
  {
      house h1;
      
      h1.room=4;
      h1.bathroom=3;
      
        cout<<h1.room<<endl;
        cout<<h1.bathroom<<endl;
        
        room r1;
        
         r1.bad=1;
         r1.tv=1;
         
         
        cout<<r1.bad<<endl;
        cout<<r1.tv<<endl;
        
        return 0;
      }
