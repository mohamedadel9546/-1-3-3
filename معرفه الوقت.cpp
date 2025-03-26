#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include <string>
#pragma warning (disable:4996)
using namespace std;



int main() { 
  
  time_t	t = time(0);//هنا لو عايز تعرف الوقت الاصلى بتاعك
  char* dt = ctime(&t);//الخطوة دى انا عاملها عشان اخد الوقت واحوله لstring
  cout << "local time" << dt << endl;

  tm* tt = gmtime(&t);// هنا هاخد الاصل وهاحوله لغرنيتشى 
  dt = asctime(tt);//نفس الحكايه برضك
  cout << "time:" << dt;


  time_t y = time(0);//وهنا كل حاجه خاصه عن الوقت
  tm *z = localtime(&y);
  cout << "years ::" << z->tm_year+1900 << endl;
  cout << "month ::" << z->tm_mon+1 << endl;

  cout << "days week ::" << z->tm_wday << endl;
  cout << "days month ::" << z->tm_mday << endl;

  cout << "days year ::" << z->tm_yday << endl;
  cout << "munite ::" << z->tm_min << endl;
  cout << "hours ::" << z->tm_hour<< endl;


}