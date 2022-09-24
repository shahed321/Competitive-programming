#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >>a>>b;
    char* list[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i =a; i<=b; i++){
        if(i >9){
            if(i%2 ==0){
                cout<<"even"<<"\n";
            }
            else{
                cout<<"odd"<<"\n";
            }
        }
        else{
            cout<<list[i]<<"\n";
        }
    }
    return 0;
}