#include <iostream>
using namespace std;

//@007 somaImpares
int somaImpares(int* lista, int tam) {
    int cont = 0;
    for(int i = 0; i < tam; i++) {
        if(lista[i] % 2 != 0) cont += lista[i];
    }
    return cont;
}

int main() {
    int tam;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }

    cout << somaImpares(lista, tam) << endl;

    return 0;
}


//@001 max3
int max3(int a, int b, int c) {
    if(a >= b && a >= c) return a;
    if(b >= a && b >= c) return b;
    return c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << max3(a,b,c) << endl;
    return 0;
}


//@012 fatorial
int fatorial(int a) {
    if(a <= 1) return 1;
    else return a*fatorial(a-1);
}

int main() {
    int a;
    cin >> a;

    cout << fatorial(a) << endl;
    return 0;
}


//@014 elemento
int elemento(int* lista, int elem, int tam) {
    if(elem < 0) elem = elem + tam;
    if(tam > elem) return lista[elem];
    else return 666;
}

int main() {
    int tam, elem;
    cin >> tam >> elem;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    cout << elemento(lista, elem, tam) << endl;

    return 0;
}


//@015 pertence
bool pertence(int* lista, int elem, int tam) {
    for(int i = 0; i < tam; i++) {
        if(lista[i] == elem) return true;
    }
    return false;
}

int main() {
    int tam, elem;
    cin >> tam >> elem;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    
    if(pertence(lista, elem, tam)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}


//@016 total
int total(int* lista, int tam) {
    int cont = 0;
    for(int i = 0; i < tam; i++) {
        cont++;
    }
    return cont;
}

int main() {
    int tam;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    cout << total(lista, tam) << endl;
    return 0;
}


//@017 maior
int maior(int* lista, int tam) {
    int maior = lista[0];
    for(int i = 1; i < tam; i++) {
        if(lista[i] > maior) maior = lista[i];
    }
    return maior;
}

int main() {
    int tam;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    cout << maior(lista,tam) << endl;
    return 0;
}


//@023 corpo
void corpo(int* lista, int tam) {
    cout << '[';
    for(int i = 0; i < tam-1; i++) {
        cout << lista[i];
        if(i != tam-2) cout << ',';
    }
    cout << ']' << endl;
}

int main() {
    int tam;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }

    corpo(lista, tam);
    return 0;
}


//@028 divide
void divide(int* lista, int n, int tam) {
    cout << "([";
    for(int i = 0; i < n; i++) {
        cout << lista[i];
        if(i != n-1) cout << ',';
    }
    cout << "],[";
    for(int i = n; i < tam; i++) {
        cout << lista[i];
        if(i != tam-1) cout << ',';
    }
    cout << "])";
}

int main() {
    int tam, n;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    cin >> n;
    divide(lista, n, tam);
    
    return 0;
}


//@030 uniao
void uniao(int* lista1, int* lista2, int tam1, int tam2) {
    int lista3[tam1+tam2];
    int aux;
    for(int i = 0; i < tam1; i++) {
        lista3[i] = lista1[i];
        aux = i;
    }

    for(int i = 0; i < tam2; i++) {
        for(int j = 0; j < tam1; j++) {
            if(lista2[i] == lista1[j]) break;
            else if (j == tam1-1){
                lista3[aux+1] = lista2[i];
                aux++;
            }
        }
    }
    cout << '[';
    for(int i = 0; lista3[i] != '\0'; i++) {
        cout << lista3[i];
        if(lista3[i+1] != '\0') cout << ',';
    }
    cout << ']' << endl;
}

int main() {
    int tam1, tam2;
    cin >> tam1;
    int lista1[tam1];
    for(int i = 0; i < tam1; i++) {
        cin >> lista1[i];
    }
    cin >> tam2;
    int lista2[tam2];
    for(int i = 0; i < tam2; i++) {
        cin >> lista2[i];
    }

    uniao(lista1,lista2,tam1,tam2);

    return 0;
}


//@031 intersec - intercessão entre listas
void intersec(int* lista1, int* lista2, int tam1, int tam2) {
    cout << '[';
    for(int i = 0; i < tam1; i++) {
        for(int j = 0; j < tam2; j++) {
            if(lista1[i] == lista2[j]) {
                cout << lista1[i];
                if(i != tam1-1) cout << ',';
                break;
            }
        }
    }
    cout << ']' << endl;
}

int main() {
    int tam1, tam2;
    cin >> tam1;
    int lista1[tam1];
    for(int i = 0; i < tam1; i++) {
        cin >> lista1[i];
    }
    cin >> tam2;
    int lista2[tam2];
    for(int i = 0; i < tam2; i++) {
        cin >> lista2[i];
    }
    intersec(lista1,lista2,tam1,tam2);
    return 0;
}


//@047 splitints
void splitints(int* lista, int tam) {
    int par[tam], Ipar = 0, impar[tam], Iimpar = 0;
    for(int i = 0; i < tam; i++) {
        if(lista[i] % 2 == 0) {
            par[Ipar] = lista[i];
            Ipar++;
        } else {
            impar[Iimpar] = lista[i];
            Iimpar++;
        }
    }
    cout << "([";
    for(int i = 0; i < Iimpar; i++) {
        cout << impar[i];
        if(i != Iimpar-1) cout << ',';
    }
    cout << "],[";
    for(int i = 0; i < Ipar; i++) {
        cout << par[i];
        if(i != Ipar-1) cout << ',';
    }
    cout << "])";
}

int main() {
    int tam;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    splitints(lista,tam);
    return 0;
}


//@009 sublist
void sublist(int* lista, int inicio, int fim, int tam) {
    if(inicio < 0) inicio = tam + inicio;
    if(fim < 0) fim = tam + fim;
    cout << '[';
    for(int i = inicio; i < fim; i++) {
        cout << lista[i];
        if(i != fim-1) cout << ',';
    }
    cout << ']';
}

int main() {
    int inicio, fim, tam;
    cin >> tam >> inicio >> fim;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    sublist(lista,inicio,fim, tam);
    return 0;
}


//@051 paridade
bool paridade(string* lista, int tam) {
    int cont = 0;
    for(int i = 0; i < tam; i++) {
        if(lista[i] == "True") cont++;
    }
    return cont % 2 != 0;
}

int main() {
    int tam;
    cin >> tam;
    string lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    if(paridade(lista,tam)) cout << "True" << endl;
    else cout << "False";
    
    return 0;
}


//@054 swap - trocando dois elementos de uma lista
void swap(int* lista, int i, int j, int tam) {
    int aux = 0;
    if(i < tam && j < tam) {
        aux = lista[j];
        lista[j] = lista[i];
        lista[i] = aux;
    }
    cout << '[';
    for(int k = 0; k < tam; k++) {
        cout << lista[k];
        if(k != tam-1) cout << ',';
    }
    cout << ']' << endl;
}

int main() {
    int tam, i, j;
    cin >> tam;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    cin >> i >> j;
    swap(lista,i,j,tam);
    return 0;
}


//@063 euler1 - soma dos múltiplos de 3 e 5
int euler1(int n) {
    int cont = 0;
    for(int i = 1; i < n; i++) {
        if(i % 3 == 0 || i % 5 == 0) cont += i;
    }
    return cont;
}

int main() {
    int n;
    cin >> n;
    cout << euler1(n) << endl;
    return 0;
}
