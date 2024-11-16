#include<bits/stdc++.h>

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
        int count = 0;
        for(int i=0; i<n/2; i++){
            if(vet_c[i] == vet_c[n-1-i])
                count++;
        }
        // std::cout << count << "\t" << n/2 <<  std::endl;
        if(count==(n/2))
            std::cout << "PALINDROMO" << std::endl;
        else
            std::cout << "NAO PALINDROMO" << std::endl;
    }
    return 0;
}