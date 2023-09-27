#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if( num > 1){
        if (num == 2){
            return true;
        }
        if (num % 2 == 0){
            return false;
        }
        for ( int i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}


int main()
{
    cout << isPrime(2) << endl;

    return 0;
}
