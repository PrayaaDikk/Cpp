#include <iostream>
using namespace std;

int main(){

    // the way to program prime numbers in programming is to use a modulus, for example one of the prime numbers is 3.
    // if 3 is divided by a number smaller than 3 and the remainder of the division is 0,
    // then how many times the modulus is 0, we calculate it in variable so we can output prime numbers to the terminal


    // variable x to calculate how many times the modulus is 0
    int x;

    cout << "\tPRIMES\t\n\n";

    for(int i = 1; i <= 100; i++){          //  looping on the side for what sequence of numbers to display
        x = 0;

        for(int j = 1; j <= i; j++){        // This loop is to divide the number in the previous loop into the modulus formula
            if(i % j == 0){
              x += 1;
            }
        }

            if(x == 2){                     // Why 2? Because prime numbers can only be divided by 1 and divided by the number itself.
                cout << i << " ";           // For example, 3 divided by 1 has a remainder of 0 and 3 divided by 3 has a remainder of 0,
                                            // but 3 divided by 2 has no remainder of 0.
            }

    }

    cout << endl;
    return 0;
}
