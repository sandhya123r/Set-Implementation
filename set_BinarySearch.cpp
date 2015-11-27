#include<iostream>

using namespace std;

class Set 
{
	public:
		vector<int> set;
	
	//Member functions
		void insert(int key);
		void list(void);
		Set();
};

Set::Set()
{
	cout<<"Set is being initialized \n";
}

void 

int main()
{
	Set set;
	int key;
	char ch;
	while(ch!='n')
	{
		cout<<"1.Size 2.Insert \n";
		cin>>opt;
		switch (opt):
		{
			case 1:set.size();
			       break;
			       
			case 2:cout<<"Enter the value to be insert \n";
			       cin>>key;
			       break;
			       
			
		}
	}
}
