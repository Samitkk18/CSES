#include <bits/stdc++.h>
// #include </Library/Developer/CommandLineTools/usr/include/bits/stdc++.h>

using namespace std;

long long n;
int main(){
    long long max = 0;
    scanf("%lld", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int count = 0;
        if(arr[i+1] < arr[i]){
            count = arr[i] - arr[i+1];
            arr[i+1] = arr[i];
            max += count;
        }
    }
    printf("%lld", max);
}