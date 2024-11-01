#include <iostream>
using namespace std;

int sum_nums(int num1, int num2){
    return num1 + num2;
}


int main(){
    int num1 = 5;
    int num2 = 2;
    int sum = sum_nums(num1, num2);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}