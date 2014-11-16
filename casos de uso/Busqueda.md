Caso de uso: Búsqueda
=====================

Identificador: BuscarCliente
----------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Búsqueda de datos del cliente por apellido.

**Precondiciones:**
>Debe existir el cliente solicitado en la lista.

**Flujo principal**

1.  El usuario selecciona la opción _Buscar cliente_.
2.  El usuario introduce el apellido.
3.  El sistema lee la lista del fichero.
4.  Busqueda del cliente en la lista del fichero.
5.  Si existe, imprimir por pantalla los datos del cliente solicitado.



**Flujo alternativo**:
+  Si no encuentra el cliente, avisará al administrativo.
+  Si existen varios clientes con el mismo apellido, se imprimirán todos ellos por pantalla.
**Postcondiciones:**
>Ninguna.

**Ámbito**:
>General *Clínica*
