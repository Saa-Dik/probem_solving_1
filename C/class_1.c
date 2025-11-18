

/*
#include<stdio.h>
int main()
{
    printf("HII!");
    return 0;
}

#include<stdio.h>
int main()
{
    printf("%d",100);
    return 0;
}


*/
#include <stdio.h>
int main() {
    int a, b;
    int sum, sub, mul;
    float div;

    printf("Enter first numbers : ");
    scanf("%d", &a);
    printf("Enter second numbers : ");
    scanf("%d",&b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("Sum:%d\n", sum);
    printf("Difference:%d\n", sub);
    printf("Product:%d\n", mul);
    printf("Quotient:%.2f\n", div);
    return 0;
}

#include<stdio.h>
int main() {
    int nums;
    printf("Enter The Numbers: ");
    scanf("%d", &nums);
    if(nums >= 1 && nums <= 100){
        printf("The numbers %d is within the range.", nums);
    }else{
        printf("the number %d is not within the range", nums);
    }
    return 0;

}
