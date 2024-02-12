class Solution {
public:
    int majorityElement(vector<int> v) {
    int count=0;
    int ele;
    int n=v.size();
    for(int i=0;i<n;i++){
        if (count==0){
            count=1;
            ele= v[i];
        }
        else if(ele==v[i]) count++;
        else count--;
    }
    int count1=0;
    for(int i=0;i<n;i++){
         if(v[i]==ele) count1++;
    }

    if(count1> (n/2)) return ele;
    return -1;
}
};


//2nd Solution :
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n= nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second > n/2)
            return i.first;
        }
        return -1;
    }
};
