#include <iostream>
using namespace std;
bool isPrime(int number);
int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout<<isPrime(n);
    }
bool isPrime(int number){

    int num = 1;
    int factor = 0;
    int count = 0;

    if (number > 1) {
        while (num <= number) {
            if (number % num == 0) {
               
                count++;
            }
            num++;
        }
    } else  {
        return 0;
    } 

    if (count == 2) {
        return 1;
    } else {
       return 0;
    }

}