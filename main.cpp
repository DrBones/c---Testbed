#include <iostream>
#include "add.h"
int doubleNumber(int x)
{
  return x*2;
}

int ReadNumber()
{
  using namespace std;
  cout << "Please type in number: " << endl;
  int x;
  cin >> x;
  return  x;
}

void WriteAnswer(int x)
{
  using namespace std;
  cout << "The Answer is:"<< x << endl;
}
int main()
{
  int x = ReadNumber();
  int y = ReadNumber();

  WriteAnswer(x + y);
   return 0;
}
