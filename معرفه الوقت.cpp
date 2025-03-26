#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include <string>
#pragma warning (disable:4996)
using namespace std;



int main() { 
  
  time_t	t = time(0);
  char* dt = ctime(&t);
  cout << "local time" << dt << endl;

  tm* tt = gmtime(&t);
  dt = asctime(tt);
  cout << "time:" << dt;


  time_t y = time(0);
  tm *z = localtime(&y);
  cout << "years ::" << z->tm_year+1900 << endl;
  cout << "month ::" << z->tm_mon+1 << endl;

  cout << "days week ::" << z->tm_wday << endl;
  cout << "days month ::" << z->tm_mday << endl;

  cout << "days year ::" << z->tm_yday << endl;
  cout << "munite ::" << z->tm_min << endl;
  cout << "hours ::" << z->tm_hour<< endl;


}