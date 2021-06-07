#include <iostream>
using namespace std;

//@004 countNeg
int countNeg(int* lista, int tam) {
    int cont = 0;
    for(int i = 0; i < tam; i++) {
        if(lista[i] < 0) cont++;
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

    cout << countNeg(lista, tam) << endl;
    return 0;
}


//@005 final
void final(int* lista, int indice, int tam) {
    cout << '[';
    for(int i = 0; i < tam-indice; i++) {
        cout << lista[i];
        if(i != tam-indice-1) cout << ',';
    }
    cout << ']' << endl;
}

int main() {
    int tam, indice;
    cin >> tam;
    cin >> indice;
    int lista[tam];
    for(int i = 0; i < tam; i++) {
        cin >> lista[i];
    }
    final(lista, indice, tam);
    
    return 0;
}


//@002 iguais - verificar se duas listas são iguais
int iguais(int a, int b, int c) {
    if(a == b && a == c) return 3;
    if(a != b && a != c && b != c) return 0;
    return 2;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << iguais(a,b,c) << endl;
    return 0;
}


//@006 interior - miolo da lista
void interior(int *lista, int tam) {
    if(tam <= 2) cout << "[]" << endl;
    else
        cout << '[';
        for(int i = 1; i < tam-1; i++) {
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

    interior(lista, tam);

    return 0;
}


//@008 gangorra
int gangorra(int a, int b, int c, int d) {
    if(a*b > c*d) return -1;
    if(a*b < c*d) return 1;
    return 0;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << gangorra(a,b,c,d) << endl;
    return 0;
}


//@010 min2
int min2(int a, int b) {
    if(a <= b) return a;
    else return b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << min2(a,b) << endl;

    return 0;
}


//@011 min3
int min3(int a, int b, int c) {
    if(a <= b && a <= c) return a;
    if(b <= a && b <= c) return b;
    return c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << min3(a,b,c) << endl;

    return 0;
}


//@000 soma2
int soma(int a, int b) {
    return a+b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << soma(a,b) << endl;

    return 0;
}
