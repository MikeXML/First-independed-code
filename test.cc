#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x;

    cout << "Is your number to round?: ";
    cout << "\n Enter your number: ";
    cin >> x;

    if (x >= round(x)){
        cout << x << " Is rounded down to " << round(x);
    }

    else{
        cout << x << " Is rounded up to " << round(x);
    }


    return 0;
}

// Holy crap it works! I DID THIS WHILE MY BRAIN WAS NUMB!!!
// WOOOHOOOO!!!