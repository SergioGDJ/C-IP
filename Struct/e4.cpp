#include<bits/stdc++.h>

typedef struct {
    double u{};
    double x{};
    double y{};
    double z{};
    double calculateMod(){
        double mod{};
        mod = (u*u) + (x*x) + (y*y) + (z*z);
        mod = sqrt(mod);
        return mod;
    }
    double norma{};
    void print(){
    std::cout << std::fixed << std::setprecision(2)
    << "Vetor: " << "(" << u << ", " << x << ", " << y
        << ", " << z << ") Norma: " << norma << "\n";
              
    }
    int index{};
}Norma;



void printStruct(Norma *array, int len){
    for(int i=0; i<len; i++){
        array[i].print();
    }
}



int main(){
    int n;
    std::cin >> n;
    Norma arrays[n];
    for(int i=0; i<n; i++){
        std::cin >> arrays[i].u >> arrays[i].x >> arrays[i].y >> arrays[i].z;
    }
    for(int i=0; i<n; i++){
        arrays[i].index = i;
    }
    for(int i=0; i<n; i++){
        arrays[i].norma = arrays[i].calculateMod();
    }
    for(int i=0; i< n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arrays[j].norma > arrays[j+1].norma){
                Norma copy = arrays[j];
                arrays[j] = arrays[j+1];
                arrays[j+1] = copy;
            }
        }
    }
    // std::cout << "\n\n";
    printStruct(arrays, n);
    // printExercice(arrays, n);
}