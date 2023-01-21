#include<iostream>
using namespace std;

void printNos(int N)
    {
        if (N<1) {
            return;
            
        } 
        cout<<N<<" ";
        printNos(N-1);
    }

int main() {
    printNos(5);
}