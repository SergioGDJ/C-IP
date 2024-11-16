#include<bits/stdc++.h>

int produto(int m, int n){
    if(m==0 || n == 0) return 0;
    else if(n == 1) return m;
    else return m + produto(m, n-1);
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int m, n;
        std::cin >> m >> n;
        std::cout << produto(m, n) << std::endl;
    }
}