/************************************************************
En este fichero vamos a implementar las funciones de imprimir
*************************************************************/

#include "Cliente.h"
#include "Agenda.cpp"
//Tengo que aprender POO para poder hacer esto

//Declaamos las funciones
list<Cliente> imprimirClientes();
list<Cliente> mostrarClientesMasBuscados();
list<Cliente> muestraFavoritos();
void imprimeCliente(Cliente C);
bool esfavorito(Cliente C);
bool compare_usados(Cliente first, Cliente second);


//Esta función imprimirá los 10 clientes mas buscado por la secretaria
list<Cliente> mostrarClientesMasBuscados(){
  //Esta funcion dependerá de la funcion de imprimre cliente
  list <Cliente> Lista;
  list <Cliente> aux;
  list <Cliente>::iterator first;
  list <Cliente>::iterator last;
  //Para coger los mas buscados, podemos ordenar la lista por ese campo
  //Y despues coger los diez primeros y devolverlos :D
  //Para eso necesitaremos una funcion que le introduciremos al sort( :D )
  aux = imprimirClientes();

  aux.sort(compare_usados);

  //Una vez ordenada dicha lista pasamos los 10 primeros elementos a otra lista
  //Usaremos la funcion splice
  //void splice (iterator position, list& x, iterator first, iterator last);
  first = aux.begin();
  last = aux.begin();
    ++last;
    ++last;

    Lista.splice(Lista.begin(), aux, aux.begin(), last);

return Lista;
}


    /***********************************************************************
        FUNCION AUXILIAR QUE NOS AYUDARÁ A ORDERNAR LA LISTA SEGUN EL CAMPO
        DE MASUSADOS :D
    ***********************************************************************/
    bool compare_usados(Cliente first, Cliente second){
      int primero;
      int segundo;
      primero = first.getMasUsados();
      segundo = second.getMasUsados();
      if(primero > segundo){
        return true;
      }else
        return false;
    }



list<Cliente> muestraFavoritos(){

  list<Cliente> Lista;
  list<Cliente> aux;
  list<Cliente>::iterator i;

  aux = imprimirClientes();
  for(i = aux.begin(); i != aux.end(); ++i){
    if(esfavorito(*i)){
      Lista.push_back(*i);
    }
  }

  return Lista;
}
              /************************************************************************
              FUNCION AUXILIAR QUE RECIBE UN CLIENTE Y TE DICE SI ES FAVORITO O NO
              DEVUELVE UN BOOL
              ************************************************************************/
              bool esfavorito(Cliente C){
                if(C.isFavorito()){
                  return true;
                }else{
                  return false;
                }
              }
              /***********************************************************************
              FIN DE LA FUNCION AUXILIAR PARA SABER SI ES FAVORITO O NO :D
              ***********************************************************************/

//Esta función mostrará los datos del cliente por pantalla

//Imprime cliente se beneficia de

list<Cliente> imprimirClientes(){

  //Declaramos todas las variables que vamos a usar
  list<Cliente> Lista;
  Cliente aux;
  ifstream myfile;
  char line[256];
  int entero;
  Telefonos tlf;
  Correos cor;
  Direcciones dir;
  Redes redes;
  //Lo que haremos sera recorrer el fichero de principio a fin e introducir los clientes en una lista

    /****
    Primeros abrimos el fichero en modo lectura
    ***/
      myfile.open("fichero.txt");

      if(myfile.is_open()){
          //Ahora tendremos que recorrer el fichero e ir introduciendo los datos de las lineas del fichero
          //en el objeto cliente e ir mandandolos al principio de la lista

          //Lo recorreremos con getline
          while(!myfile.eof()){//Esto recorrera el fichero entero y copiará la linea al string "line"
            //Vamos pasando los datos del fichero a un objeto del tipo cliente
            //No se porque pero mete uno mas del necesario :c

                  //Apellidos
                    myfile.getline(line, 256, ',');
                    aux.setApellidos(line);

                  //Nombre
                    myfile.getline(line,256, ',');
                    aux.setNombre(line);

                  //DNI
                    myfile.getline(line,256,',');
                    aux.setDni(line);

                  //Direcciones
                    myfile.getline(line,256, ',');
                    dir.calle = line;
                    myfile.getline(line,256,',');
                    dir.puerta = line;
                    myfile.getline(line,256,',');
                    dir.portal = atoi(line);
                    aux.setDirecciones(dir);

                  //Telefonos
                    myfile.getline(line, 256, ',');
                    tlf.numeroFijo = atoi(line);
                    myfile.getline(line, 256, ',');
                    tlf.numeroMovil1 = atoi(line);
                    myfile.getline(line, 256, ',');
                    tlf.numeroMovil2 = atoi(line);
                    aux.setTelefonos(tlf);

                  //Correos
                    myfile.getline(line, 256, ',');
                    cor.gmail = line;
                    myfile.getline(line, 256, ',');
                    cor.hotmail = line;
                    myfile.getline(line, 256, ',');
                    cor.yahoo = line;
                    aux.setCorreos(cor);

                  //Redes Sociales
                    myfile.getline(line, 256, ',');
                    redes.twitter = line;
                    myfile.getline(line, 256, ',');
                    redes.facebook = line;
                    myfile.getline(line, 256, ',');
                    redes.tuenti = line;
                    myfile.getline(line, 256, ',');
                    redes.linkedin = line;
                    aux.setRedes(redes);

                  //Miramos si es favorito
                    myfile.getline(line, 256, ',');
                    if(strcmp(line, "si") == 0 ||
                       strcmp(line, "Si") == 0 ||
                       strcmp(line, "SI") == 0 ||
                       strcmp(line, "sI") == 0  ){

                      aux.setFavorito(true);
                    }else{
                      aux.setFavorito(false);
                    }

                  //Veces que se ha buscado
                    myfile.getline(line,256, ',');
                    entero = atoi(line);
                    aux.setMasUsados(entero);

                  //Anotaciones
                    myfile.getline(line, 256, '\n');
                    aux.setAnotaciones(line);

                  //Y ahora ponemos este cliente al final de la cola
                  //Para que asi se impriman los clientes en el orden en el que estan
                  //en el fichero
                  Lista.push_back(aux);

                  /*******************************************************************************

                  AQUI SE PUEDE LLAMAR A LA FUNCIONES DE IMPRIMIR EN PANTALLA PARA IRLOS MOSTRANDO

                  ********************************************************************************/

          }
    }else{
      cout << "No se pudo abrir bien el fichero" << endl;
      exit(-1);
    }
      //Cerramos el fichero
      myfile.close();

    //Y devolvemos la lista de clientes
    return(Lista);
}

//Esta función recibe un cliente de parámetro y lo imprime de forma bonita
void imprimeCliente(Cliente C){

//Declaramos unas estructuras auxiliares para facilitarnos las cosas

Direcciones dir;
Telefonos tlf;
Correos  cor;
Redes redes;
int buscado;

  //Mostramos el nombre
    cout << C.getNombre() << ", "<< C.getApellidos() << "\n";

  //Mostramos el dni
    cout << "-  " << C.getDni()<< "\n";

  //Mostramos las direcciones
    dir = C.getDirecciones();
    cout << "Direccion:\n";
    cout << dir.calle << ", " << dir.puerta << ", " << dir.portal
         << "\n";

  //Mostramos los telefonos

    tlf = C.getTelefonos();
    cout << "Telefonos:\n";
    cout << "- Teléfono fijo:\t" <<tlf.numeroFijo << "\n";
    cout << "- Teléfono móvil:\t" << tlf.numeroMovil1 << "\n";
    cout << "- Teléfono auxiliar:\t" << tlf.numeroMovil2 << "\n";

  //Mostramos los correos

    cor = C.getCorreos();
    cout << "Correos electrónicos:\n";
    cout << "- Gmail:\t" << cor.gmail << "\n";
    cout << "- Hotmail:\t" << cor.hotmail << "\n";
    cout << "- Yahoo:\t" << cor.yahoo << "\n";

  //Mostramos las redes sociales

    redes = C.getRedes();
    cout << "Redes sociales:\n";
    cout << "- Twitter:\t" << redes.twitter << "\n";
    cout << "- Facebook:\t" << redes.facebook << "\n";
    cout << "- Tuenti:\t" << redes.tuenti << "\n";
    cout << "- Linkedin:\t" << redes.linkedin << "\n";

  //Mostramos si el cliente es favorito

  if(C.isFavorito()){
    cout << "Favorito: Sí\n";
  }else
    cout << "Favorito: No\n";

  //Mostramos el numero de veces que se ha buscado dicho cliente

  buscado = C.getMasUsados();
  cout << "Numero de veces buscado: " << buscado << "\n";

  //Mostramos las anotaciones del cliente

  cout << C.getAnotaciones() << "\n";

  //Damos espaciado

  cout << endl << endl;

}
