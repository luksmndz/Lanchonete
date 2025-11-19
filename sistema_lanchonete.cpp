#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Pedido {
    int id;
    string descricao;
    float valor;
};

int main() {
    
    queue<Pedido> fila;
    Pedido p1 = {101, "Sanduíche de Frango", 22.50};
    Pedido p2 = {102, "Batata Frita Grande", 12.00};
    Pedido p3 = {103, "Combo Família", 45.90};

    fila.push(p1);
    fila.push(p2);
    fila.push(p3);

    cout << "\nPróximo pedido a ser preparado:\n";
    cout << "ID: " << fila.front().id << " - " << fila.front().descricao << "\n";

    cout << "\nEntregando o pedido ID " << fila.front().id << "...\n";
    fila.pop();

    cout << "\nNovo próximo pedido na fila:\n";
    cout << "ID: " << fila.front().id << " - " << fila.front().descricao << "\n";

    return 0;
}
