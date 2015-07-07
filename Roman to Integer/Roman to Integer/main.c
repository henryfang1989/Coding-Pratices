//
//  main.c
//  Roman to Integer
//
//  Created by huangwei fang on 7/7/15.
//  Copyright (c) 2015 huangwei fang. All rights reserved.
//

#include <stdio.h>
int r2i(char s){
    int value =0;
    switch (s) {
        case 'I':
            value = 1;
            break;
        case 'V':
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
            break;
        case 'M':
            value = 1000;
            break;
    }
    return value;
}

int romanToInt(char* s){
    int result=0;
    for (int i=0; i<sizeof(s)-1; i++) {
        if(r2i(s[i])>=r2i(s[i+1]))
        {
            result=result+r2i(s[i]);
        }
        else
            result=result-r2i(s[i]);
    }
    return result+r2i(s[sizeof(s)]);

}

int main(int argc, const char * argv[]) {
    char* s="LIV";
    printf("%d", romanToInt(s));
}
