#include <bits/stdc++.h>
// #include </Library/Developer/CommandLineTools/usr/include/bits/stdc++.h>

using namespace std;

int t;
long long x,y;
long long solve(long long x, long long y){
    long long l = max(x,y)-1;
    if(l&1){
        if(x<y) return l*l + x;
        else return l*l + 2*l - y+2;
    }else{
        if(x<y) return l*l + 2*l - x+2;
        else return l*l + y;
    }
}
int main(){
    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf("%lld %lld", &x,&y);
        printf("%lld\n", solve(x,y));
    }

}