#include <bits/stdc++.h>
// #include </Library/Developer/CommandLineTools/usr/include/bits/stdc++.h>

using namespace std;
const int maxN = 1e6+5;

char C[maxN];
int main(){
    int max = 1;
    int count = 1; 
    scanf("%s", C);
    int N = (int) strlen(C);
    for(int i=0;i<N-1;i++){
        if(C[i] == C[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        if(max < count) max = count;
    }
    printf("%d\n", max);
}