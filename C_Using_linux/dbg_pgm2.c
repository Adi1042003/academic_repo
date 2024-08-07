/*
  Program description: Implement a command line calculator using command line
  arguments in the following fashion: 
  ./a.out –a 23 34 should calculate 23 + 34 and 
  ./a.out –s 23 34 should calculate 23 – 34
  
TODO:The below program does not display anything when run as follows:
     ./a.out -a 10 20
     What is the problem? And fix to work correctly
  */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

    int result, x, y;
    x = atoi(argv[2]);
    y = atoi(argv[3]);

    if (strcmp(argv[1], "-a") == 0) {
        result = x + y;
        printf("%d\n", result);
    } else if (strcmp(argv[1], "-s") == 0) {
        result = x - y;
        printf("%d\n", result);
    } else {
        printf("Invalid operation: %s\n", argv[1]);
        return 1;
    }

    return 0;
}
