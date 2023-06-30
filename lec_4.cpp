#include<iostream>
#include<string.h>
using namespace std;

class dimond{
	
	   public:
	   	
	   	int id;
	   	char name[100];
	   	int staff;
	   	int revenue;
	   	int import;
	   	int expo;
	   	char ceo[100];
	   	
	   	public:
	   	dimond(){
	   		   cout<<"enter id :";
	   		   cin>>id;
	   		   cout<<"enter name :";
	   		   cin>>name;
	   		   cout<<"enter staff :";
	   		   cin>>staff;
	   		   cout<<"enter revenue :";
	   		   cin>>revenue;
	   		   cout<<"enter import :";
	   		   cin>>import;
	   		   cout<<"enter expo :";
	   		   cin>>expo;
	   		   cout<<"enter ceo :";
	   		   cin>>ceo;
	   		   
	   		   
	   		   cout<<"\n\n---------------------------\n\n";
	   		   
	   		   
	   		   cout<<"id:"<<this->id<<endl;
	   		   cout<<"name:"<<this->name<<endl;
	   		   cout<<"staff:"<<this->staff<<endl;
	   		   cout<<"revenue:"<<this->revenue<<endl;
	   		   cout<<"import:"<<this->import<<endl;
	   		   cout<<"expo:"<<this->expo<<endl;
	   		   cout<<"ceo:"<<this->ceo<<endl;
	   	}
	   		   
};
int main()
{
	int n;
	  cout<<"enter the number of compny";
	  cin>>n;
     dimond d[n];
	 
	 return 0;
	 };



















