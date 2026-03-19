#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("sonni top oyini\n");
    _sleep(5000);
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    while(guess != num && attempts < 10){
        scanf("%d", &guess);
        attempts++;
        if(guess > num){
            printf("kamro\n");
        }
        else if (guess < num){
            printf("kopro\n");
        }
    }
    if(guess == num){
        printf("topding, ishlatgan urinishin: %d \n", attempts);
    }
    else {
        printf("topomadin son: %d \n edi", num);
    }
    _sleep(3000);
    return 0;


}