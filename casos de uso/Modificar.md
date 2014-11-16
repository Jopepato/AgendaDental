Caso de uso: Modificar
======================

Identificador: ModificarCliente
-------------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Modifica el registro de un cliente.

**Precondiciones:**
>Debe existir el cliente solicitado en la lista.

**Flujo principal**

1.  El usuario selecciona la opción _Modificar cliente_.
2.  El usuario introduce el apellido.
3.  Se comprueba si existe el cliente.
    + Leer la lista de apellidos coincidente.
    + Seleccionar el apellido de la lista.
4.  Se introducen los datos a cambiar.
5.  Se modifican los datos del cliente.
6.  Guardar lista en fichero.
7.  Ordenar lista.



**Flujo alternativo**:
>Si no encuentra el cliente, avisará al administrativo y se preguntará si desea insertar uno nuevo.

**Postcondiciones:**
>El fichero en disco contendrá el cliente ya modificado y debe seguir ordenado.

**Ámbito**:
>General *Clínica*
