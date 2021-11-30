#include<iostream>
#include<cmath>
using namespace std;

int adiff(int a, int b){
  int c;
  int n = a/360;
  a = a-(n*360);
  if(a >= 180){
    a = a-360;
  }

  int m = b/360;
  b = b-(m*360);
    if(b >= 180){
    b = b-360;
  }

  if(a < b){
    c = b-a;
  }else{
    c = a-b;
  }

  if(c > 180){
    c = 360 - c;
  }

  return c;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
}
