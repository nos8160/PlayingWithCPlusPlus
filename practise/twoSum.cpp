#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums,int n){
    vector<int> v;
    for(int i =0;i<nums.size();i++){
        for(int j =0;j<nums.size();j++){
            if(nums[i]+nums[j] == n){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    return v;
}
int main(){
    int array[]={2, 7, 11, 15};
    vector<int> vec(array,array+4);
    vec = twoSum(vec,9);
    cout<<vec[0]<<endl;

}
