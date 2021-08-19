

// Problem link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <iostream>
#include <cmath>

using namespace std;

int addition(int *a, int *b){

    int sum = *a + *b;
    return sum;
}

int subtraction(int *a, int *b){

    int res = abs(*a - *b);
    *b = res;
    return *b;
}

int main() {
    int a, b, add, sub;

    cin >> a >> b;

    add = addition(&a, &b);
    sub = subtraction(&a, &b);

    cout << add << endl;
    cout << sub << endl;
    return 0;
}

