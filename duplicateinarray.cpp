#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n=arr.size();
    map<int,int>m;
    for(int i=0;i<n;i++){
m[arr[i]]++;
    }
	for (auto&value:m){
if(value.second==2){
return value.first;
}
    }
}
