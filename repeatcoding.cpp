#include<iostream>
using namespace std;
int main()
{
  int i;
  for(i=0;i<=100;i++)
  {
    if(i%2==0){
      // continue;
      break;
    }
    cout<<"the final answer is:"<<i<<endl;
  }
  return 0;
}