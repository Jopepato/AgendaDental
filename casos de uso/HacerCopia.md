Caso de uso: HacerCopia
=======================

Identificador: HacerCopiaSeguridad
----------------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Hace una copia de seguridad del fichero existente.

**Precondiciones:**
>Debe existir un fichero al que hacer una copia de seguridad.

**Flujo principal**

1.  El usuario selecciona la opción _Hacer copia de seguridad_.
2.  El usuario introduce un nuevo nombre para la copia de seguridad.
3.  Se lee el fichero a copiar.
4.  Se copia dicha lista de clientes en el nuevo fichero.



**Flujo alternativo**:
>Si no encuentra el fichero, avisará al administrativo.

**Postcondiciones:**
>Debe existir un segundo fichero con la copia de seguridad.

**Ámbito**:
>General *Clínica*
