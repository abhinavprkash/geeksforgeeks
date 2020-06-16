#include<iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Box
{

    int l;int b; int h;
public:
    Box(): Box(0,0,0){

    }
    Box(int x, int y, int z): l(x), b(y), h(z){

    }
    Box(Box &value) : Box(value.l, value.b, value.h){
        
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long calculateVolume(){
        return l*b*h;
    }
    bool operator<(Box& b);
    ostream& operator<<(ostream& out, Box& B);
};

bool Box ::operator<(Box& b)
{
    return this.l < b.getLength || this.b < b.getBreadth || this.h < b.getHeight;
}

Box :: Box ostream& operator<<(ostream& out, Box& B){
    out << B.getLength << " " <<B.getBreadth << " "<< B.getHeight;
    return out;
}   

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}