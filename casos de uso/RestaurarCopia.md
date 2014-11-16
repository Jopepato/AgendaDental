Caso de uso: RestaurarCopia
===========================

Identificador: RestaurarCopiaSeguridad
--------------------------------------

###Actor principal: *Administrativo*

####Breve Descripción: Restaura la versión de la agenda de la copia de seguridad.

**Precondiciones:**
>Debe existir una copia de seguridad de la que hacer una recuperación.

**Flujo principal**

1.  El usuario selecciona la opción _Restaurar copia de seguridad_.
2.  El usuario introduce el nombre de la copia de seguridad a restaurar.
3.  Se lee la copia de seguridad.
4.  Se sobreescribe dicha lista recogida de la coipa de seguridad en el fichero principal.



**Flujo alternativo**:
>Si no encuentra la copia de seguridad, se avisará al administrativo.

**Postcondiciones:**
>El fichero principal debe ser una copia de la copia de seguridad.

**Ámbito**:
>General *Clínica*
