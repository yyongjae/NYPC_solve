#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    int left = 1, right = 1000;
    string s;
    while (left <= right){
        printf("%d\n", (left+right) / 2);
        fflush(stdout);
        cin >> s;
        if(s == "CORRECT") return 0;
        if(s == "UNDER") left = (left+right) / 2 + 1;
        else right = (left+right)/2 - 1;
    }
    return 0;
}