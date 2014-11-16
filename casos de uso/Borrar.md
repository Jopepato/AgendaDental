Caso de uso: Borrar
===================

Identificador: BorrarCliente
----------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Elimina el registro de un cliente.

**Precondiciones:**
>Debe existir el cliente solicitado en la lista.

**Flujo principal**

1.  El usuario selecciona la opción _Borrar cliente_.
2.  El usuario introduce el apellido.
3.  Se comprueba si existe el cliente.
    + Leer la lista de apellidos coincidentes.
    + Seleccionar el apellido de la lista.
4.  Se borra el cliente de la lista.
5. Guardar lista en fichero.
6. Ordenar lista.



**Flujo alternativo**:
>Si no encuentra el cliente, avisará al administrativo.

**Postcondiciones:**
>El fichero en disco no debe contener el cliente y debe seguir ordenado.

**Ámbito**:
>General *Clínica*
