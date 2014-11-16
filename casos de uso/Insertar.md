Caso de uso: Insertar
=====================

Identificador: InsertarCliente
------------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Inserta un nuevo cliente en el fichero.

**Precondiciones:**
>Debe existir un fichero al que insertar el cliente.

**Flujo principal**

1.  El usuario selecciona la opción _Insertar nuevo cliente_.
2.  El usuario introduce los datos del cliente: _nombre, apellidos, DNI, teléfonos, correo electónico, dirección postal, redes sociales(nombre + URL o usuario), anotaciones y favorito_.
3.  Se comprueba si el cliente ya está en la lista.
    + Lee la lista.
    + Busca apellido en la lista.
4.  Si no existe dicho cliente mete las variables en la lista.
5.  Imprime lista en el fichero.
6.  Ordena lista de clientes.



**Flujo alternativo**:
>Si el cliente ya está en la lista, se avisará al administrativo.

**Postcondiciones:**
>El fichero debe contener al cliente introducido.

**Ámbito**:
>General *Clínica*
