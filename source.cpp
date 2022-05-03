#include <iostream>
using namespace std;

int addTwoNumbers(int num1, int num2){
    return num1 + num2;
}

int checkAndAdd(int a, int b){
    int result;
    if(a >= 0 && b >= 0){
        result = addTwoNumbers(a, b);
        return result;
    } else {
        return -1;
    }
}
