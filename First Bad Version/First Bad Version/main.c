//
//  main.c
//  First Bad Version
//
//  Created by Huangwei Fang on 9/7/15.
//  Copyright (c) 2015 henryfang. All rights reserved.
//

#include <stdio.h>

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);
int firstBadVersion(int n) {
    int begin = 1;
    int end = n;
    while (begin <= end)
    {
        if(isBadVersion((begin+end)/2))
        {
            end = (begin + end)/2-1;
        }
        else
        {
            begin = (begin + end)/2+1;
        }
    }
    return begin;
}