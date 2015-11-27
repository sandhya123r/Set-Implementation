#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Set 
{
	public:
		map<int,int> setmap;
	
	
	public:
		void insert(int key);
		void list();
		int size(void);
		void deletekey(int key);
		void lookup(int key);
		Set();
};

Set::Set(void)
{
	cout<<"Set is being created \n";
}

void Set::list(void)
{
	std::map<int,int> ::iterator it;
	if (it==setmap.end())
	{
		cout<<"Empty set \n";
		return;
	}
		
	for(it=setmap.begin();it!=setmap.end();it++)
	{
		cout<<it->first<<" ";
	}
	cout<<"\n";
}

void Set::insert(int key)
{
	
	
	if (setmap.count(key)==1)
		return;
	else
		setmap[key]=1;
	
	
}

void Set::lookup(int key)
{
	std::map<int,int>::iterator it;
	int count=1;
	it=setmap.find(key);
	if(it==setmap.end())
	{
		cout<<"Element not present \n";
		return ;
	}
	for(it=setmap.begin();it->first!=key;it++)
		count++;
	cout<<"Element at "<<count<<"\n";
}

void Set::deletekey(int key)
{
	std::map<int,int>::iterator it;
	it=setmap.find(key);
	if(it==setmap.end())
		cout<<"Element not present \n";
	else
		setmap.erase(it);
}

int Set::size(void)
{
	return setmap.size();
}

int main()
{
	Set set;
	char ch='y';
	int opt,key;
	while(ch!='n')
	{
		cout<<"1. Insert 2.List 3.Size 4.Delete 5.Lookup\n";
		cin>>opt;
		switch (opt)
		{
			case 1:cout<<"Enter key \n";
			       cin>>key;
			       set.insert(key);
			       break;
			case 2:set.list();
			       break;
			case 3:cout<<"Size of set is "<<set.size()<<"\n";
			       break;
			case 4:cout<<"Enter the key that you want to delete \n";
			       cin>>key;
			       set.deletekey(key);
			       break;
			case 5:cout<<"Enter the key that you want to lookup \n";
			       cin>>key;
			       set.lookup(key);
			       break;
			default:break;
			
		}
		cout<<"Want to continue ? \n";
		cin>>ch;
	}
	

}
