#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
  vector<int> cow(0);
  int x;
  int sum = 0, num, temp;
  ifstream in_file("file.in",ios::in);
  if (!in_file) 
  {
    cout << "FILE OPEN ERROR" << endl;
    return 0;
  }
  in_file >> num;
  for(int i = 0;i < num;++i)
  {
    in_file >> temp;
    cow.push_back(temp);
  }
  x = cow.size();
  sort(cow.begin(),cow.end());

  for(int i = 0;i < 5;++i)
  {
    sum += cow[cow.size() - 1];
    cow.pop_back();

  }
  cout << sum << endl;
  return 0;
}
