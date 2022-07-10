#include <bits/stdc++.h>
// #include </Library/Developer/CommandLineTools/usr/include/bits/stdc++.h>

using namespace std;

int n;

int main(){
    scanf("%d", &n);
    if(n==1) printf("1");
    else if(n<=3) printf("NO SOLUTION");
    else{
        for(int i=2;i<=n;i+=2){
            printf("%d ", i);
        }
        for(int i=1;i<=n;i+=2){
            printf("%d ", i);
        }
    }
}