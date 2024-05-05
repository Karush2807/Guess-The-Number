#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int rand_num, guess_num_user;
    srand(time(0));
    rand_num=rand()%100+1; //now it will generate number between 1, 100
    //printf("The number is: %d", rand_num);

    //using while loop untill number is guessed
    int n_turns=0;
    do{
        printf("User-01, enter the number between 1 and 100: ");
        scanf("%d", &guess_num_user);

        

        //condition-01: the number is less than the random number generated
        if(guess_num_user<rand_num){
            printf("Enter a higher number \n");
            n_turns++;
        }

        //condition-2: the number is greater than the random number generated
        else if(guess_num_user>rand_num){
            printf("enter a lower number \n");
            n_turns++;
        }

        //when both are equal
        else{
            printf("CONGRATULATIONS!!, You guessed the right number in %d turns", n_turns);
        }
    }while(guess_num_user!= rand_num);
    
    
    return 0;
}