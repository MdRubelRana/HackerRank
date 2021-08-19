
// Problem link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>

int greatestValue(int a, int b, int c, int d){

    int greatestNum;
    if((a > b) && (a > c) && (a > d)){
       greatestNum = a;
    }
    else if((b > c) && (b > d) && (b > a)){
       greatestNum = b;
    }
    else if((c > d) && (c > a) && (c > b)){
       greatestNum = c;
    }
    else if((d > a) && (d > b) && (d > c)){
        greatestNum = d;
    }
    return greatestNum;
}

using namespace std;

int main() {
    int a, b, c, d, greatestNumber;

    cin >> a >> b >> c >> d;

    greatestNumber = greatestValue(a, b, c, d);
    cout << greatestNumber << endl;
    return 0;
}

