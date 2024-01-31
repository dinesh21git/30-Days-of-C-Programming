#include <stdio.h>
#include <stdbool.h>

int main()
{
    int votingAge = 18;
    int maxVoting = 99;
    int myAge = 17.99;
    bool can_vote = true;
    
    if (myAge >= votingAge  && myAge <= maxVoting) {
        can_vote = true;
    } else {
        can_vote = false;
    }
    
   if (can_vote){
       printf("eligible to vote");
   } else {
       printf("not eligible");
   }

    return 0;
}
             
