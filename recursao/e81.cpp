#include<bits/stdc++.h>

int palindromo(char *vetor, int len, int ini){
    if(len == 0)
        return 0;
    else{
        if(vetor[len-1] == vetor[ini - len])
            return 1 + palindromo(vetor, len-1, ini);
        else
            return palindromo(vetor, len-1, ini);
    }
}

int main(){
    int t;
    std::cin >> t; //usei o objeto cin para pegar o conteudo do teclado, depois o operador >> 
    //para armazenar este conteudo na variavel t;
    while(t--){
        int n;
        std::cin >> n;
        char *vet_c;
        vet_c = new char[n+1];
        for(int i=0; i<n; i++)
            std::cin >> vet_c[i];
        // for(int i=0; i<n; i++)
        //     std::cout << vet_c[i];
        // std::cout << std::endl;
        int k = palindromo(vet_c, n, n);
        if(k == n)
            std::cout << "PALINDROMO" << std::endl;
        else
            std::cout << "NAO PALINDROMO" << std::endl;
    }
}