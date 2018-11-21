//Trying to understand recursion

#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int input;

    cout << "please enter your factorial" << endl;
    cin >> input;
    cout << "the factorial of: " << input << " = " << factorial(input) << endl;

system("PAUSE");
return 0;
}