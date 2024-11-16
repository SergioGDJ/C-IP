#include<bits/stdc++.h>

int proximoNumero(int *vet, int tam, int i){
    if(i< tam){
        if(10*vet[i] == vet[i+1]) return 1;
        else return proximoNumero(vet, tam, i+1);
    }
    else return 0;
}

int main(){
    int t;
    std::cin >> t;
    // std::cin.ignore();
    while(t--){
        int n;
        std::cin >> n;
        // std::cout << n;
        int *vet;
        vet = new int [n];
        for(int i=0; i<n; i++)
            std::cin >> vet[i];
        
            // ///////////////////////////////////
        // for(int i=0; i<n; i++)
            // std::cout << vet[i];
        if(proximoNumero(vet, n, 0) == 1)
            std::cout << "VERDADEIRO\n";
        else
            std::cout << "FALSO\n";
        /////////////////////////////////////////
        // std::cout << proximoNumero(vet, n, 0);
    }
}