#include <stdio.h>

int main(){
    int great_three;
    int great_five;
    int total;

    //Given that the summation of i = 1 to n of i is n(n+1)/2
    great_three = 1000/3;
    great_five = 1000/5;
    total = (great_five*(great_five+1)+great_three*(great_three+1))/2;
    printf("%d",total);
    return 0;
}