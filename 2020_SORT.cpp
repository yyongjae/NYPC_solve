#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string s;
    int result=0;

    cin >> s;

    for (auto i: s){
        if(i == 'S'){
            result++;
        }
        else{
            result++;
            while(result%4 != 0) result++;
        }
    }

    cout << result;
}