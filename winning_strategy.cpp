#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t_cases;
    cin>>t_cases;
    while(t_cases--){
        int n;
        cin>>n;
        ll p1=0;
        ll p2=0;
        vector<ll> me(n);
        for(int i=0;i<n;i++){
            cin>>me[i];
        }
        sort(me.begin(),me.end(),greater<int>());
        if(n==1){
         cout<<"first\n";
         continue;
        }
        if(n==2){
         if(me[0]==me[1])
          cout<<"draw\n";
         else
          cout<<"first\n";
          continue;
        }
        p1=me[0];
        p2=me[1];
        p2+=me[2];
        for(int i=3;i<n;i++){
            if( i%2==1){
                p1+=me[i];
            }
            else
            {
                p2+=me[i];
            }
            
        }
        if(p1>p2)
         cout<<"first\n";
        else if(p1<p2)
         cout<<"second\n";
        else
         cout<<"draw\n";
        
    }
    return 0;
}