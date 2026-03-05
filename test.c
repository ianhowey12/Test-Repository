#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void side(int c){
    printf("%d\n", c);
}

int main(){

    int c = 2;
    side(c);

    int* a = 0;
    printf("%d\n", a);
    return 0;
}
