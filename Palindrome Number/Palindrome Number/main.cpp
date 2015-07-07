//
//  main.cpp
//  Palindrome Number
//
//  Created by huangwei fang on 7/7/15.
//  Copyright (c) 2015 huangwei fang. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution{
public:
    bool isPalindrome(int x){
        if (x<0) {//negtive number is not palindrome number
            return false;
        }
        int temp = x, reminder, result=0;
        while (temp!=0) {
            reminder = temp%10;
            temp=temp/10;
            result =result*10+reminder;
        }
        if (x==result) {
            return true;
        }
        else
            return false;
    }
};

int main(int argc, const char * argv[]) {
    Solution *test = new Solution();
    if(test->isPalindrome(-1))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

}
