#include<bits/stdc++.h>

typedef struct{
    std::string pais;
    std::string traducao;
    void print(){
        std::cout << pais << "\t" << traducao << "\n";
    }
    int compair{};
}FelizNatal;

int main(){
    FelizNatal year[24];
    for(int i=0; i<24; i++){
        std::string input;
        getline(std::cin, input);
        year[i].pais = input;
    }
    for(int i=0; i<24; i++){
        std::string input;
        getline(std::cin, input);
        year[i].traducao = input;
    }
    for(int t=0; t<24; t++){
        year[t].print();
    }
    // std::cout << year[0].traducao;
    std::string input;
    while(std::cin >> input){
        for(int i=0; i<24; i++){
            if(input == year[i].pais){
                year[i].compair = 1;
                break;
            }
            else
                std::cout << "-- NOT FOUND --\n";
        }
    }
}

 