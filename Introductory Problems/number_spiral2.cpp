#include <bits/stdc++.h>
// #include </Library/Developer/CommandLineTools/usr/include/bits/stdc++.h>

using namespace std;

int t;
long long x,y;
long long solve(long long x, long long y){
    long long l = max(x,y);
    long long ans = (l-1)*(l-1);
    if(ans%2==0) return ans + y + (l - x);
    else return ans + l - y + x;
}
int main(){
    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf("%lld %lld", &x,&y);
        printf("%lld\n", solve(x,y));
    }

}