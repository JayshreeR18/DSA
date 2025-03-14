#include <iostream>
using namespace std;

void Pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void Pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void Pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void Pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void Pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}

void Pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout <<  "* ";
        }
        cout << endl;
    }
}

void Pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void Pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout  << " ";
        }
        for(int k=0;k<((2*i)+1);k++){
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<((2*(n-i))-1);k++){
            cout << "*";
        }
        cout << endl;
    }
}



int main(){
int n=4;

cout << "Pattern 9" << endl;
Pattern9(n);
}