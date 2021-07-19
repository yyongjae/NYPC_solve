#include<iostream>
#include <cstdio>
#include <vector>
using namespace std;
long long maxsum(vector<int> arr);
int main()
{
    int N;
    vector<int> arr;
    cin >> N;

    for (int i=0;i<N;i++){
        int tmp;
        cin >>tmp;
        arr.push_back(tmp);
    }
    printf("%lld", maxsum(arr));

    return 0;
}
long long maxsum(vector<int> arr){
    long long result;
    int len = arr.size();
    vector<long long> arrSum(len);

    arrSum[0] = arr[0];

    for(int i=1;i<len;i++){
        if(arrSum[i-1] + arr[i] > arr[i]) arrSum[i] = arrSum[i-1] + arr[i];

        else arrSum[i] = arr[i];
    }
    result = arrSum[0];

    for(int i=0;i<len;i++){
        if(result < arrSum[i]) result = arrSum[i];
    }

    return result;
}