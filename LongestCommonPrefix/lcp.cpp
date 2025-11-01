#include <iostream>
#include <string.h>
using namespace std;
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common;
        bool b = false;
        for(int i=0;i<strs[0].length();i++){
            common += strs[0][i];
            for(string j:strs){
                if(common[i] ==j[i]){
                continue;
                }
                else{
                common = common.erase(i,1);
                b = true;
                break;
                }
            }
            if(b){
                break;
            }
        }
        return common;
    }
};

int main(){
    vector<string> str;
    int n;
    string s;
    cout<<"Enter the number of characters in the string : "<<endl;
    cin>>n;
    cout<<"Enter the strings : "<<endl;
    for(int i=0;i<n;i++){
        cin>>s;
        str.push_back(s);
    }
    Solution sol;
    string common = sol.longestCommonPrefix(str);
    cout<<common<<endl; 
}