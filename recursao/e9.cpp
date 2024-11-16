#include<bits/stdc++.h>

int potencia(int m, int n){
    if(n == 0) return 1; 
    else if(n == 1 || m == 1) return m;
    // else if (m==0) return 0;
    else return m * potencia(m, n-1);
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int m, n; //m^n;
        std::cin >> m >> n;
        std::cout << potencia(m, n) << "\n";
    }
    return 0;
}