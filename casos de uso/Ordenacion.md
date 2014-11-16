Caso de uso: Ordenación
=======================

Identificador: OrdenarClientes
------------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Ordena la lista alfabéticamente según los apellidos.

**Precondiciones:**
>Deben al menos existir _2_ clientes que ordenar en la lista.

**Flujo principal**

1.  El usuario selecciona la opción _Ordenar agenda_.
2.  Lee lista del fichero.
3.  Ordena los clientes alfabéticamente según el apellido
4.  Devuelve la lista al fichero.


**Flujo alternativo**:
>Si no existen clientes que ordenar en el fichero avisará al administrativo.

**Postcondiciones:**
>El fichero en disco debe estar ordenado según el apellido.

**Ámbito**:
>General *Clínica*
