#include<bits/stdc++.h>

typedef struct{
    int numerador;
    int denominador;
    float fracionario;
}Fracao;

int main(){
    int t;
    std::cin >> t;
    int a = t;
    int b = 1;
    while(b <= t){
        
        std::cout << "Caso de teste " << b << std::endl;
        int m;
        std::cin >> m;
        Fracao elemento[m];
        for(int i=0; i<m; i++){
            char slash;
            std::cin >> elemento[i].numerador >> slash >> elemento[i].denominador; 
        }
        
        // for(int k=0; k<m; k++)
        //     std::cout << elemento[k].numerador << "/" << elemento[k].denominador << std::endl;
        
        // std::cout << "\n\n\n";
        for(int i = 0; i<m; i++){
            elemento[i].fracionario = (float)elemento[i].numerador / (float)elemento[i].denominador; 
        }
        int count=0;
        for(int i =0; i< m-1; i++){
            for(int j=i+1; j<m; j++){
                if(elemento[i].fracionario == elemento[j].fracionario){
                    std::cout << elemento[i].numerador << "/" << elemento[i].denominador  << " equivalente a "
                              << elemento[j].numerador << "/" << elemento[j].denominador << "\n";
                              count++;
                }
            }
        }
        if(count == 0){
            std::cout << "Nao ha fracoes equivalentes na sequencia" << "\n";
        }
        b++;
    }
}