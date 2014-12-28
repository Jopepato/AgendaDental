#include "Agenda.h"
#include "Cliente.h"

list<Cliente> imprimirClientes();
list<Cliente> mostrarClientesMasBuscados();
list<Cliente> muestraFavoritos();
void imprimeCliente(Cliente C);




int main(){
list<Cliente> Lista;
list<Cliente>::iterator i;
list<Cliente> favoritos;
list<Cliente> ordenados;
Lista = imprimirClientes();

/*
for(i = Lista.begin(); i != Lista.end(); ++i){
  imprimeCliente(*i);
}

cout << "Ahora los favoritos" << endl << endl << endl;

favoritos = muestraFavoritos();

for(i = favoritos.begin(); i != favoritos.end(); ++i){
  imprimeCliente(*i);
}
*/
ordenados = mostrarClientesMasBuscados();

for(i = ordenados.begin(); i != ordenados.end(); ++i){
  imprimeCliente(*i);
}

  return 0;
}
