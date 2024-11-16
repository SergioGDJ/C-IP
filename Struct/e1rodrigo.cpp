#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Função para calcular o MDC (GCD) de dois números
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para determinar se duas frações são equivalentes
bool areEquivalent(pair<int, int> frac1, pair<int, int> frac2) {
    // Simplificar frac1
    int mdc1 = gcd(frac1.first, frac1.second);
    int x1 = frac1.first / mdc1;
    int y1 = frac1.second / mdc1;
    
    // Simplificar frac2
    int mdc2 = gcd(frac2.first, frac2.second);
    int x2 = frac2.first / mdc2;
    int y2 = frac2.second / mdc2;
    
    // Verificar se são equivalentes
    return x1 * frac2.second == x2 * frac1.second;
}

int main() {
    int n;
    cin >> n; // Número de casos de teste
    
    for (int caso = 1; caso <= n; ++caso) {
        int m;
        cin >> m; // Tamanho da sequência de frações
        
        vector<pair<int, int>> fractions(m);
        
        // Ler as frações
        for (int i = 0; i < m; ++i) {
            char slash;
            cin >> fractions[i].first >> slash >> fractions[i].second;
        }
        
        // Verificar pares de frações equivalentes
        vector<pair<pair<int, int>, pair<int, int>>> equivalentPairs;
        
        for (int i = 0; i < m; ++i) {
            for (int j = i + 1; j < m; ++j) {
                if (areEquivalent(fractions[i], fractions[j])) {
                    equivalentPairs.push_back({fractions[i], fractions[j]});
                }
            }
        }
        
        // Saída do caso de teste
        cout << "Caso de Teste " << caso << endl;
        if (equivalentPairs.empty()) {
            cout << "Nao ha fracoes equivalentes na sequencia" << endl;
        } else {
            for (auto& pair : equivalentPairs) {
                cout << pair.first.first << "/" << pair.first.second
                     << " equivalente a " << pair.second.first << "/" << pair.second.second << endl;
            }
        }
    }
    
    return 0;
}
