#include<bits/stdc++.h>

typedef struct {
    int numerador{};
    int denominador{};
    double valor{(double)numerador/(double)denominador};
}Fracao;

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    while(n--){
        // std::cout << "\n";
        // std::cout << "AUQI";
        std::string token;
        std::stringstream tokenformado{};
        getline(std::cin, token);
        // int count=0;
        // while(std::cin >> token){
            // tokenformado << token;
            // count++;
        // }
        // std::cout << tokenformado.str();
        // std::cout << count;
        std::cout << token << "\n";
    }
}