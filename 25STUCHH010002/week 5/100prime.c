#include<stdio.h>
void main(){
    int counter = 0, global, counter2 = 0;

    for (int number = 1; counter2 <= 100; number++){
        counter = 0;
        for (int primecount = 1; primecount<=number; primecount++){

            if(number % primecount == 0){
                counter += 1;
            }
            global = primecount;
        }

        if (counter == 2){
            printf("%d ", global);
            counter2 += 1;
        }
    }
}