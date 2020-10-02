//fizz buzz solution multiple with 3 fizz and with 5 buzz and both will give fizzbuzz.
//Author : manavbhikadiya

#include <stdio.h>

void main(){


    int i;

    for(i=1;i<=15;i++){

        if(i%3==0 && i%5 == 0){

            printf("\nFizzBuzz");
        }
        else if(i%3 == 0){

            printf("\nFizz");
        }
        else if(i%5 == 0){

            printf("\nBuzz");
        }
        else{

            printf("\n%d",i);
        }

    }

}
