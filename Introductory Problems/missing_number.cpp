#include <bits/stdc++.h>

using namespace std;

int N,x,value=0;

int main(){
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        value ^= i;
    }
    for(int i=0;i<N-1;i++){
        scanf("%d", &x);
        value ^= x;
    }
    printf("%d\n", value);
}