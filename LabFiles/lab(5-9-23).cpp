// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
namespace math{
    int add(int a, int b){
        return a+b;
    }
    int subtract(int a, int b){
        return a-b;
    }
    int multiply(int a, int b){
        return a*b;
    }
    double divide(double a, double b){
        return a/b;
    }
}
namespace Utils{
    void printmessage(string message){
        cout<<message<<endl;
    }
    int getRandomNumber(int min, int max){
            if(max == min+1){
            cout<<"numbers are close"<<endl;
            return 0;
            }
            else{
        int random = rand();
        int value = (random % (max-min+1)) + min;
        return value;
            }
    }
}
int main() {
    // Write C++ code here
    cout << "Results:"<<endl;
    cout<<"Sum:"<<math::add(5,2)<<endl;
    cout<<"Difference:"<<math::subtract(5,2)<<endl;
    cout<<"Product:"<<math::multiply(5,2)<<endl;
    cout<<"Quotient:"<<math::subtract(5.0,2.0)<<endl;
    
    Utils::printmessage("The random number chosen is");
    Utils::printmessage(to_string(Utils::getRandomNumber(5,6)));

    return 0;
}
