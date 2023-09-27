#include <iostream>

using namespace std;

int break_chocolate(int n, int m){
    cout << n*m-1 << endl;
    return n*m-1;
}

int main()
{
    break_chocolate(3,5);
    cout << "Hello World!" << endl;
    return 0;
}
