#include <iostream>

using namespace std;

int break_chocolate(int n, int m){
    if (n*m == 0){
        return 0;
    } else {
        return n*m-1;
    }

}

int main()
{
    break_chocolate(3,5);
    cout << "Hello World!" << endl;
    return 0;
}
