#include <iostream>

using namespace std;

#include <string>

std::string decodeMorse(const std::string& morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string decoded;
    for( auto p : morseCode ) {
      if( p == '.' )
        decoded += MORSE_CODE[ "." ];
      else if( p == '-' )
        decoded += MORSE_CODE[ "-" ];
    }
    return decoded;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
