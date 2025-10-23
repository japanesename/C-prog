#include<stdio.h>
void main(){
    int counter = 0, global, counter3 = 0,in_value;
    printf("\n Input number of primes:");
    scanf("%d", &in_value);
    for (int number = 1; counter3 <= in_value; number++){
        counter = 0;
        for (int primecount = 1; primecount<=number; primecount++){

            if(number % primecount == 0){
                counter += 1;
            }
            global = primecount;
        }

        if (counter == 2){
            printf("%d ", global);
            counter3++;
        }
    }
}
