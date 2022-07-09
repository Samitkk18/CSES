#include <bits/stdc++.h>

using namespace std;

long long N;

int main(){
    scanf("%lld", &N);
    while(N > 1){
        printf("%lld ", N);
        if(N%2!=0) N = 3*N+1;
        else    N /= 2;
    }
    printf("1\n");
}