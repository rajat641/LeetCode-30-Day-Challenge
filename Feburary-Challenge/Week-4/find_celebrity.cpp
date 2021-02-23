/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        int guess = 0;
        for(int i=0;i<n;i++){
          //  if(i==guess ) continue;
            if(knows(guess, i)) guess =i;
            //else guess =i;
        }
        for(int i=0;i<n;i++){
            if(i!=guess && (!knows(i, guess) || knows(guess, i))) return -1;
        }
        return guess;
    }
};
