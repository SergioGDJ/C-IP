#include<bits/stdc++.h>

typedef struct{
    std::string fruta;
    double price{};
    void print(){
        std::cout << fruta << " " << price << " " << quantidade << "\n";
    }
    int quantidade{};
}Feira;

int main(){
    int h;
    std::cin >> h;
    while(h--){
        int m; //number of products to sell in supermarket
        std::cin >> m;
        Feira compras[m];
        int i=0; 
        
        while(i<m){
            std::cin.ignore();
            std::cin >> compras[i].fruta;
            std::cin >> compras[i].price;
            i++;
        }
        // std::cout << "Itens Disponiveis\n";
        // for(i=0; i<m; i++){
        //     compras[i].print();
        // }
        int n;
        std::cin >> n;
        i=0;
        Feira item[n];
        while(i < n){
            std::cin.ignore();
            std::string palavra;
            
            int quant=0;
            std::cin >> palavra >> quant;
            for(int k=0; k<m; k++){
                if(palavra == compras[k].fruta){
                    compras[k].quantidade = quant; 
                }
            }
            
            
            // std::cin >> item[i].fruta >> item[i].quantidade;
            i++;
        }
        // std::cout << "\n\nItens Feira\n";
        // for(i=0; i<m; i++){
        //     compras[i].print();
        // }
        double soma=0;
        for(int k=0; k<m; k++){
            soma += compras[k].price * compras[k].quantidade;
        }
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        
        std::cout << "R$ " << soma << std::endl;
    }
}

// Be a struct array for go to supermarket
// the struct should contain 1)name 2)price
// scan the values from keyboard