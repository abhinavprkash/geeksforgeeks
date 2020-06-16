#include <iostream>

using namespace std;

/*Single Inheritance
class laptop{
public:
	laptop(){
		cout<<"Base class called";
	}
	string name;
	float price;
};

class gamingLaptop: public laptop{
public:
	gamingLaptop()
	{
		cout<<"Derived class called"<<endl;
	}
	string name; 
	int vram;	
};

int main(int argc, char const *argv[])
{
	gamingLaptop lap1;
	return 0;
}*/

class  gamingSystem
{
public:
	 
	
};

class laptop{
public:
	laptop(){
		cout<<"Base class called";
	}
	string name;
	float price;
};

class gamingLaptop: public laptop{
public:
	gamingLaptop()
	{
		cout<<"Derived class called"<<endl;
	}
	string name; 
	int vram;	
};

int main(int argc, char const *argv[])
{
	gamingLaptop lap1;
	return 0;