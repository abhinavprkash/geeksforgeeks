#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    size_t n, grades;
    cin>>n;
    while(n--){
        cin>>grades;
        if(grades>=38 && grades%5>2)
            grades += 5- (grades%5);
            cout<< grades<<endl;
    }
    return 0;
}
