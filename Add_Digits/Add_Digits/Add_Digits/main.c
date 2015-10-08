//
//  main.c
//  Add_Digits
//
//  Created by Huangwei Fang on 10/7/15.
//  Copyright © 2015 henryfang. All rights reserved.
//

#include <stdio.h>

int addDigits(int num){
    int temp = num, sum = 0;
    while (temp != 0) {
        sum += temp%10;
        temp = temp/10;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    int num;
    printf("Please input an integer: \n");
    scanf("%d", &num);
    while (num < 0) {
        printf("Please input an integer: \n");
        scanf("%d", &num);
    }
    while (num >= 10) {
        num = addDigits(num);
    }
    return num;
}