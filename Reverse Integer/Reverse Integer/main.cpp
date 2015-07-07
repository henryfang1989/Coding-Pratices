//
//  main.cpp
//  Reverse Integer
//
//  Created by huangwei fang on 7/5/15.
//  Copyright (c) 2015 huangwei fang. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x){
            int temp;
            int value=0;
            while (x != 0) {
                temp = x%10;
                value = value*10 + temp;
                x=x/10;
            }
            return value;
    }
};

int main(int argc, const char * argv[]) {
    Solution *test = new Solution();
    int result;
    result = test->reverse(-189);
    cout<<result;
}
