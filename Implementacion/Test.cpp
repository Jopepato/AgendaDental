// Agenda_unittest.cpp: Brotherhood team
// A sample program demonstrating using Google C++ testing framework.
//
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.

#include "Agenda.h"
#include "Cliente.h"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST(Agenda, insertar) {


  Agenda aux("agendaTest.txt");
  list <Cliente> cAux;

  cout<<"TEST PARA INSERTAR"<<endl;
  cAux = aux.getArrayClientes();
  EXPECT_TRUE(cAux.empty());
  EXPECT_TRUE(aux.insertarCliente());
  EXPECT_FALSE(!aux.insertarCliente());
  cAux = aux.getArrayClientes();
  EXPECT_TRUE(!cAux.empty());
  EXPECT_FALSE(cAux.empty());

  //Limpia la lista para el siguiente test
  cAux.clear();
  EXPECT_TRUE(cAux.empty());
  aux.setArrayClientes(cAux);

}

TEST(Agenda, borrado) {

  Agenda aux("agendaTest.txt");
  list <Cliente> cAux;
  string apellido;

  cout<<"TEST PARA BORRAR"<<endl;
  cAux = aux.getArrayClientes();
  EXPECT_TRUE(cAux.empty());
  EXPECT_TRUE(aux.insertarCliente());
  cout<<"Inserta el apellido del cliente introducido para borrar: ";
  getline(cin, apellido);
  EXPECT_TRUE(aux.borrarCliente(apellido));
  cAux = aux.getArrayClientes();
  EXPECT_TRUE(cAux.empty());

  //Limpia la lista para el siguiente test
  cAux.clear();
  EXPECT_TRUE(cAux.empty());
  aux.setArrayClientes(cAux);
}

TEST(Agenda, modificado) {


  Agenda aux("agendaTest.txt");
  list <Cliente> cAux;
  string apellido;

  cout<<"TEST PARA MODIFICAR"<<endl;
  cAux = aux.getArrayClientes();
  EXPECT_TRUE(cAux.empty());
  EXPECT_TRUE(aux.insertarCliente());
  cout<<"Inserta el apellido del cliente introducido para modificar: ";
  getline(cin, apellido);
  EXPECT_FALSE(!aux.modificarCliente(apellido));
  cAux = aux.getArrayClientes();
  EXPECT_TRUE(!cAux.empty());
  EXPECT_FALSE(cAux.empty());

  //Limpia la lista para el siguiente test
  cAux.clear();
  EXPECT_TRUE(cAux.empty());
  aux.setArrayClientes(cAux);


}

TEST(Agenda, existenClientes) {

  list<Cliente> listaAux;
  Cliente aux;
  Agenda ag("agendaTest.txt");

  aux.setNombre("Carlos");
  listaAux.push_back(aux);
  ag.setArrayClientes(listaAux);
  ag.AumentarNumeroCliente(listaAux);
  ag.AumentarNumeroCliente(listaAux);

  listaAux = ag.getArrayClientes();

  aux = listaAux.front();

  EXPECT_EQ(aux.getMasUsados(), 2);
   EXPECT_LT(aux.getMasUsados(), 3);
    EXPECT_GT(aux.getMasUsados(), 1);



}
