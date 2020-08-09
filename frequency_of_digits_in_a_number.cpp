#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
#define pb push_back
int main(){
  vector<int> vec;
  unordered_map<int,int> mpp;
  int n,x;
  cout<<"size: ";
  cin>>n;
  cout<<"values: ";
  for(int i=0;i<n;i++){
    cin>>x;
    vec.pb(x);
  }
  sort(vec.begin(),vec.end());
  for(auto i:vec){
    mpp[i]++;
  }
  for(auto u: mpp){
    cout<<"number "<<u.first<<" times "<<u.second<<"\n";
  }
  return 0;
}