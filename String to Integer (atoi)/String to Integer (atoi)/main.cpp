//
//  main.cpp
//  String to Integer (atoi)
//
//  Created by huangwei fang on 7/6/15.
//  Copyright (c) 2015 huangwei fang. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    int myAtoi(string str){
        long int size = str.length();
        //string result;
        double value = 0;
        char flag = ' ';
        for (int i=0; i< size; i++) {
            if (value ==0 && flag ==' ' && str[i] == '-') {
                flag = '-';
            }
            if (value == 0 && flag ==' ' && str[i] == '+') {
                flag = '+';
            }
            if (str[i]>='0' && str[i]<='9') {
                value = value*10+(str[i]-'0');
                if (flag =='+' && value > 2147483647) {
                    cout<<"vaule is out range"<<endl;
                    value = 2147483647;
                    return value;
                }
                else if (flag == '-' && value > 2147483648) {
                    cout<<"vaule is out of range"<<endl;
                    value = -2147483648;
                    return value;
                }
            }
        }
                    if(flag =='-')
                    {
                        return (-1)*value;
                    }
                    else
                        return value;
    }
};

int main(int argc, const char * argv[]) {
    Solution *test = new Solution();
    int result;
    result = test->myAtoi("dhskfhajfhhdfhakfhkahdfshdfk--1ewr23jash3434hdasd");
    cout<<result;
}
