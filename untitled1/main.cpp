#include <iostream>

using namespace std;
int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double a = 1;
    double b = num;
    double e = 0.001;
    double c;
    while(num - a*a > e || b*b - num > e){
        c = (a+b)/2;
        if (c*c > num){
            b = c;
        }
        else{
            a = c;
        }
    }
    if (num - a*a <= e ){
        cout << a;
    }
    else {
        cout << b;
    }
    return 0;
}

