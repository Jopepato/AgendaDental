Caso de uso: MasBuscados
=============================

Identificador: MostrarClientesMasBuscados
---------------------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Muestra los clientes más buscados.

**Precondiciones:**
>Deben existir clientes en la lista.

**Flujo principal**

1.  El usuario selecciona la opción _Mostrar mas buscados_.
2.  Se leen los clientes del fichero.
3.  Se evalúan los registros de búsqued y se cogen a los _10_ más buscados.
4.  Se muestran por pantalla dichos clientes.



**Flujo alternativo**:
>Si no existen clientes, se avisará al administrativo.

**Postcondiciones:**
>Ninguna.

**Ámbito**:
>General *Clínica*
