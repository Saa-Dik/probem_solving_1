#include <stdio.h>
int add(int a, int b){
    return a + b;
}

int func(){
    int c = 10, d = 5;
    int sum = add(c, d);
    printf("%d\n",sum);
    return 0;
}
