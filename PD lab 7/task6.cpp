#include <iostream>
using namespace std;
int primorial(int n);
bool isPrime(int number);
int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout<<primorial(n);
    }
int primorial(int n){
   
    int number=1;
    int countprime=0,product=1;
    while(countprime!=n){
        int check=isPrime(number);
        if (check==1)
        {
            countprime++;
            product=product*number;
            number=number+1;
            
        }
        else{
            number=number+1;
           
        }
        
    }
    return product;
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
