#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int sum_check(vector<int>&nums){
    int total_sum=0;
    int up_till_now=0;
    int target,ending,starting;
    if(all_of(nums.begin(),nums.end(),[](int i){return i>0;})){
        return accumulate(nums.begin(),nums.end(),0);
    }
    if(all_of(nums.begin(),nums.end(),[](int i){return i<0;})){
        target= nums[0];
        for(int i:nums){
            target=max(target,i);  
        }
        return target;
    }
    if(nums.size()==0){
        return 0;
    }
    else{
        for(int i=0;i<nums.size();i++){
           if(up_till_now+nums[i]>0){
               up_till_now+=nums[i];
           }
           if(total_sum<up_till_now){
               total_sum=up_till_now;
               ending=i;

           }
        }
        cout<<ending<<endl;
        return total_sum;
    }



}
int main(){
    vector<int> vec_array={-6,-5,-4,-3,-2,-1,1,2,3,4,5};
    cout<<"   BELOW   \n";
    cout<<sum_check(vec_array);
    return 0;
}