#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,N;
	cin >> t;
	int a = 0;
	int b = 7;

	for (int i = 0; i < t; i++)
	{
		cin >> N;
		if(abs(N-a)>abs(N-b)){
        printf("B\n");
        b=N;
    }
    else if(abs(N-a)<abs(N-b)){
        printf("A\n");
        a=N;
    }
    else{
        if(abs(a)>abs(b)){
          printf("B\n");
          a=N;
        }
        else{
          printf("A\n");
          a=N;}
    }
} 
	return 0;
}