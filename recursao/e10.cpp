#include<bits/stdc++.h>

void obterPrefixo(char *vet, int len){
    if(len == 0) return;
    else{
        for(int i=0; i< len; i++)
            std::cout << vet[i];
        std::cout << std::endl;
        return obterPrefixo(vet, len-1);
    }
}

int main(){
    int t, k=1;
    std::cin >> t;
    std::cin.ignore();
    while(k <= t){
        std::cout << "Caso de teste " << k << std::endl;
        std::string palavra;
        std::getline(std::cin, palavra);
        // std::cout << palavra.length();
        obterPrefixo(&palavra[0], palavra.length());
        std::cout << std::endl;
        k++;
    } 
}