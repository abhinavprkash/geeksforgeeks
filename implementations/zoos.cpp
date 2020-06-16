#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  int x=0,y=0;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='z')
    	x++;
   	else if(s[i]=='o')
   		y++;
   }
   if (2*x==y)
   	printf("Yes\n");
   else
   	printf("No\n");
  return 0;
}
