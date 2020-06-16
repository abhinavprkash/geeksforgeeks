#include <bits/stdc++.h>

using namespace std;

class student
{
public:
  string name;
  int marks;
  int roll;
};

bool mycompare(student a, student b)
{

  if (a.marks != b.marks)
  {
    return (a.marks > b.marks);
  }
  else
  {
    return (a.roll < b.roll);
  }
}

int main(int argc, char **argv)
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  std::cin >> n;

  //std::vector<string> name;		//ncross1
  std::vector<student> stud; //ncross3

  for (int i = 0; i < n; ++i)
  {
    string temp_name;
    int sub1;
    int sub2;
    int sub3;
    cin >> temp_name >> sub1 >> sub2 >> sub3;

    int sum = sub1 + sub2 + sub3;

    student temp_sub;

    temp_sub.name = temp_name;
    temp_sub.marks = sum;
    temp_sub.roll = i + 1;

    stud.push_back(temp_sub);
  }

  sort(stud.begin(), stud.end(), mycompare);

  for (int i = 0; i < n; ++i)
  {
    cout << i + 1 << " " << stud.at(i).name << '\n';
  }

  return 0;
}