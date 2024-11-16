#include<bits/stdc++.h>


typedef struct{
    int codigo_curso{};
    double valor_credito{};
    std::string nome_curso;
    void print(){
        std::cout << std::fixed << std::setprecision(2) 
        << codigo_curso << " " << valor_credito << " " << nome_curso << "\n";
    }
}Curso;

typedef struct{
    std::string nome_aluno;
    int codigo_matriculado;
    int numero_creditos;
    Curso curso_aluno;
    void print(){
        std::cout << std::fixed << std::setprecision(2) 
        << nome_aluno << " " << codigo_matriculado << " " << numero_creditos << "\n";
    }
}Aluno;

void preencherCursos(Curso *cursos, int n){
    for(int i=0; i<n; i++){
        std::cin.ignore();
        std::cin >> cursos[i].codigo_curso >> cursos[i].valor_credito
                 >> cursos[i].nome_curso;
    }
}

void preencherAlunos(Aluno *aluno, int m){
    for(int i=0; i<m; i++){
        std::cin.ignore();
        std::cin >> aluno[i].nome_aluno >> aluno[i].codigo_matriculado >> aluno[i].numero_creditos;
        
    }
}

void alunoPrinter(Aluno *aluno, int len){
    for(int i=0; i<len; i++){
        aluno[i].print();
    }
}

void cursoPrinter(Curso *cursom, int len){
    for(int i=0; i<len; i++){
        cursom[i].print();
    }
}


int main(){
    int n; //quantidade de cursos dentreo da universidade
    std::cin >> n;
    Curso cursos[n];
    preencherCursos(cursos, n);
    int m;
    std::cin >> m;
    Aluno aluno[m];
    preencherAlunos(aluno, m);
    alunoPrinter(aluno, m);
    cursoPrinter(cursos, n);
}