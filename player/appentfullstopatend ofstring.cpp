#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  int n,i;
  cin>>str;
  n=str.size();
  for(i=0;i<n;i++)
  {
    cout<<str[i];
  }
  cout<<".";
  return 0;
}
