//
//  main.c
//  FizzBuzz
//
//  Created by Michael Dunkelman on 2016-06-01.
//  Copyright © 2016 Michael Dunkelman. All rights reserved.
//

#include <stdio.h>
//This program loops through the first 100 integers.  It prints out FizzBuzz for both multiples of 3 and 5, Fizz for multiples of 3, Buzz for multiples of 5, and the number for all other integers.

int main(int argc, const char * argv[]) {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 ==0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}

