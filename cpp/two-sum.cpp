#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v;
        m.clear();
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i]) != m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
        return v;
    }

}class_obj;
int main(){
	vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	vector<int> ans=class_obj.twoSum(v,6);
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	cout<<endl;
}
