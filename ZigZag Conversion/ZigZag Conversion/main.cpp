//
//  main.cpp
//  ZigZag Conversion
//
//  Created by huangwei fang on 7/2/15.
//  Copyright (c) 2015 huangwei fang. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (s.length() == 0 || numRows ==0) {
            return "";
        }
        if(numRows == 1)
        {
            return s;
        }
        string str;
        for (int i=0; i<numRows; i++) {
            for (int j=0; j<s.length(); j++) {
                if ((j%(2*numRows-2)==i)||((j+2*i)%(2*numRows-2)==i)) {//先确定每一个相同模块的字符个数是2*n-2， 然后再把余数相同的放在同一行， 然后根据那个虽然在同一行但是余数不一样的那些字符的关系，也就是和那个余数相同的字符位置相差2*i，当这个字符位置加上2*i之后，余数应该编程相同
                    str.append(1,s[j]);
                }
            }
        }
        
        return str;
    }
    

    
};
int main(int argc, const char * argv[]) {
    Solution *solution;
    solution = new Solution();
    cout<<"Please input any sentence:"<<endl;
    string s;
    int num;
    cin>>s;
    cin>>num;
    s = solution->convert(s, num);
    cout<<s;
}
