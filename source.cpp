#include <iostream>
using namespace std;

int addTwoNumbers(int num1, int num2){
    return 0;
}

int checkAndAdd(int a, int b){
    int result = addTwoNumbers(a, b);
    if(result < 0){
        return -1;
    } else {
        return result;
    }
}
