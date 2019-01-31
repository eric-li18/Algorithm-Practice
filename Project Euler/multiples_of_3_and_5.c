#include <stdio.h>
/* If we list all the natural numbers below 10 that are 
multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of
these multiples is 23. Find the sum of all the multiples
of 3 or 5 below 1000. 

https://projecteuler.net/problem=1
*/

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