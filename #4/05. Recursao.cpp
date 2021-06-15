#include <iostream>
#include <vector>
using namespace std;

//@013 fibonacci
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 5; // alterar
    cout << fib(n) << endl;
    return 0;
}


//@018 frequencia
int frequencia(vector<int> vec, int n) {
    int cont = 0;
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] == n) cont++;
    }
    return cont;
}


int main() {
    int n = 5; // alterar
    vector<int> elementos = {4,5,2,1,5,5,9}; // alterar
    cout << frequencia(elementos, n) << endl;
    
    return 0;
}


//@019 unico
bool unico(int n, vector<int> vec) {
    int cont = 0;
    for(int i = 0; i < vec.size(); i++) {
        if(vec[0] == n) cont++;
    }
    if(cont == 1) return true;
    else return false;
}

int main() {
    int n = 2; // alterar
    vector<int> elementos = {1,2,3,2}; // alterar
    if(unico(n,elementos)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}


//@020 maioresQue
vector<int> maioresQue(int n, vector<int> vec) {
    vector<int> aux;
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] > n) aux.push_back(vec[i]);
    }
    return aux;
}

int main() {
    int n = 10; // alterar
    vector<int> elementos = {4,6,30,3,15,3,10,7}; // alterar
    vector<int> resultado = maioresQue(n, elementos);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;
    return 0;
}


//@021 concatena
vector<int> concatena(vector<int> vec1, vector<int> vec2) {
    vector<int> aux = vec1;
    for(int i = 0; i < vec2.size(); i++) {
        aux.push_back(vec2[i]);
    }
    return aux;
}

int main() {
    vector<int> elementos1 = {1,2,3}; // alterar
    vector<int> elementos2 = {3,4}; // alterar
    vector<int> resultado = concatena(elementos1, elementos2);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;

    return 0;
}


//@025 menores
vector<int> concatena(int n, vector<int> vec) {
    vector<int> aux;
    for(int i = 0; i < vec.size(); i++) {
        if(aux.size() < n) aux.push_back(vec[i]);
        else
            for(int j = 0; j < n; j++) {
                if(vec[i] < aux[j]) {
                    aux.erase(aux.begin()+j);
                    aux.push_back(vec[i]);
                }
            }
    }
    return aux;
}

int main() {
    int n = 3; // alterar
    vector<int> elementos = {5,3,1,9,7,2}; // alterar
    vector<int> resultado = concatena(n, elementos);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;

    return 0;
}


//@026 alter
vector<int> alter(int n) {
    vector<int> aux;
    for(int i = 1; i <= n; i++) {
        aux.push_back(i);
        aux.push_back(-i);
    }
    return aux;
}

int main() {
    int n = 4; // alterar
    vector<int> resultado = alter(n);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;

    return 0;
}


//@027 reverso
vector<int> reverso(vector<int> vec) {
    vector<int> aux;
    for(int i = vec.size()-1; i >= 0; i--) {
        aux.push_back(vec[i]);
    }
    return aux;
}

int main() {
    vector<int> elementos = {1,2,3,4}; //alterar
    vector<int> resultado = reverso(elementos);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;

    return 0;
}


//@029 intercal - intercalar duas listas
vector<int> intercal(vector<int> vec1, vector<int> vec2) {
    vector<int> aux;
    int menor = min(vec1.size(), vec2.size());
    for(int i = 0; i < menor; i++) {
        aux.push_back(vec1[i]);
        aux.push_back(vec2[i]);
    }
    if (vec1.size() != menor) {
        for(int i = menor; i < vec1.size(); i++) {
            aux.push_back(vec1[i]);
        }
    } else {
        for(int i = menor; i < vec2.size(); i++) {
            aux.push_back(vec2[i]);
        }
    }
    return aux;
}

int main() {
    vector<int> elementos1 = {5}; // alterar
    vector<int> elementos2 = {1,2,6}; // alterar
    vector<int> resultado = intercal(elementos1, elementos2);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;

    return 0;
}


//@032 sequencia
vector<int> sequencia(int n, int m) {
    vector<int> aux;
    for(int i = 0; i < n; i++) {
        aux.push_back(m++);
    }
    return aux;
}

int main() {
    int n = 4; // alterar
    int m = 4; // alterar
    vector<int> resultado = sequencia(n, m);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;
    
    return 0;
}


//@037 rotEsq
string rotEsq(string palavra, int rot) {
    rot %= palavra.size();
    
    string final = palavra.substr(0, rot);
    string inicio = palavra.substr(rot);
    
    return inicio += final;
}

int main() {
    int n = 1; //alterar
    string palavra = "asdfg"; //alterar
    cout << '"' << rotEsq(palavra, n) << '"' << endl;
    return 0;
}


//@038 rotDir
string rotEsq(string palavra, int rot) {
    rot %= palavra.size();
    
    string inicio = palavra.substr(palavra.size()-rot);
    string final = palavra.substr(0, palavra.size()-rot);
    
    return inicio += final;
}

int main() {
    int n = 5; //alterar
    string palavra = "asdfg"; //alterar
    cout << '"' << rotEsq(palavra, n) << '"' << endl;
    return 0;
}


//@048 quadperf
bool quadPerf(int n) {
    for(int i = 0; i <= n; i++) {
        if(i*i == n) return true;
    }
    return false;
}

int main() {
    int n = 0; // alterar
    if(quadPerf(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}


//@053 deletee - remover primeira ocorrência
vector<int> deletee(int n, vector<int> vec) {
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] == n) {
            vec.erase(vec.begin()+i);
            break;
        }
    }
    return vec;
}

int main() {
    int n = 5; // alterar
    vector<int> elementos = {1,5,6,9}; // alterar
    vector<int> resultado = deletee(n, elementos);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;
}


//@059 listacc - lista acumulativa
vector<int> listacc(vector<int> vec) {
    vector<int> aux = {vec[0]};
    for(int i = 1; i < vec.size(); i++) {
        aux.push_back(vec[i]+aux[i-1]);
    }
    return aux;
}

int main() {
    vector<int> elementos = {1,2,3,4}; // alterar
    vector<int> resultado = listacc(elementos);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;
}


//@061 line - linhas de um triângulo aritmético
vector<int> line(int n) {
    vector<int> aux;
    if(n == 0) return aux;
    int cont = 1;
    for(int i = 1; i < n; i++) {
        cont += i;
    }
    aux.push_back(cont);
    for(int i = 1; i < n; i++) {
        aux.push_back(++cont);
    }
    return aux;
}

int main() {
    int n = 6; // alterar
    vector<int> resultado = line(n);
    cout << '[';
    for(int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
        if(i != resultado.size()-1) cout << ",";
    }
    cout << ']' << endl;
}


//@062 triangle - triângulo aritmético
vector<int> line(int n) {
    vector<int> aux;
    if(n == 0) return aux;
    int cont = 1;
    for(int i = 1; i < n; i++) {
        cont += i;
    }
    aux.push_back(cont);
    for(int i = 1; i < n; i++) {
        aux.push_back(++cont);
    }
    return aux;
}

void triangle(int n) {
    vector<int> aux;
    cout << '[';
    for(int i = 1; i <= n; i++) {
        vector<int> resultado = line(i);
        cout << '[';
        for(int j = 0; j < resultado.size(); j++) {
            cout << resultado[j];
            if(j != resultado.size()-1) cout << ",";
        }
        cout << ']';
        if(i != n) cout << ",";
    }
    cout << ']' << endl;
}

int main() {
    int n = 5; // alterar
    triangle(n);

    return 0;
}
