#include <iostream>
#include "solution.h"

using namespace std;


int main(int argc, char** argv){
    string inputString;
    cin >> inputString;
    string resString = swapAB(inputString);
    cout << resString << endl;
}