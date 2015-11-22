//
//  HelloWorld.c
//  CDemo
//
//  Created by owen on 11/21/15.
//
//

#include "HelloWorld.h"

int accum = 6;
int sum(int x, int y);

int main() {
    int x = 8;
    int y = 16;
    accum = sum(x, y);
    printf("Hello World"" !\n");
    return 0;
}

int sum(int x, int y) {
    int t = x + y;
    accum += t;
    return t;
}