#include<bits/stdc++.h>

typedef struct {
    double pu{};
    double px{};
    double py{};
    double pz{};
}Coordenada;

double distanceBetween(Coordenada c1, Coordenada c2){
    double sum{};
    sum = pow(c1.pu - c2.pu, 2) + pow(c1.px - c2.px, 2)+ pow(c1.py - c2.py, 2)+ pow(c1.pz - c2.pz, 2);
    return pow(sum, 0.5);
}

int main(){
    int n;
    std::cin >> n;
    Coordenada coordenadas[n];
    for(int i =0; i<n; i++){
        std::cin >> coordenadas[i].pu >> coordenadas[i].px >> 
        coordenadas[i].py >> coordenadas[i].pz;
    }

    for(int i=0; i<n-1; i++){
        std::cout << std::fixed << std::setprecision(2);
        std::cout << distanceBetween(coordenadas[i], coordenadas[i+1]) << "\n";
    }
    
}