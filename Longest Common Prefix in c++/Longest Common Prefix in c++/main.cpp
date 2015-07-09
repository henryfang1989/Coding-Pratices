//
//  main.cpp
//  Longest Common Prefix in c++
//
//  Created by huangwei fang on 7/9/15.
//  Copyright (c) 2015 huangwei fang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
public:
    string longestCommonPrefix(vector<string> &strs){
        if(strs.size()==0)
            return "";
        string result;
        char c;
        int numofchar = (int)strs[0].size();
        int numofstr = (int)strs.size();
        for (int i=0; i<numofchar; i++) {
            c=strs[0][i];
            for (int j=0; j<numofstr; j++) {
                if (c != strs[j][i]) {
                    return result;
                }
            }
            result.append(1, c);
        }
        return result;
    }
};

int main(int argc, const char * argv[]) {
    vector<string> strs = {"asdfg","asdcf"};
    Solution *test = new Solution();
    cout<<test->longestCommonPrefix(strs);
}
