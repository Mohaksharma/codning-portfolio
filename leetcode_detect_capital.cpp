#include<bits/stdc++.h>
using namespace std;
    bool detectCapitalUse(string word) {
        int upcount=0,lowcount=0;
        int k;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                upcount++;
                k=i;
            }
            else if(islower(word[i])){
                lowcount++;
            }
        }
        if(upcount==word.length()||lowcount==word.length()){
            return true;
        }
        else if(upcount==1&&k==0){
            return true;
        }
        else 
            return false;
    }
int main(){
    string word;
    cin>>word;
    cout<<detectCapitalUse(word);
    return 0;
}