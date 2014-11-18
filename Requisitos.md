Requisitos
==========

PARTES INTERESADAS: 
-------------------

+ Dentista
+ Pacientes
+ Administrativo/a (será el actor principal)

FUNCIONALES:
------------

+ **Una agenda como la del teléfono inteligente**
+ Buscar
+ Ordenación
+ Insertar
+ Modificar
+ Borrar
+ Sin login para acceder (no es un requisito)
+ Copias de seguridad manuales a un fichero local
+ Interfaz de texto por consola
+ Imprimir la agenda en texto plano o HTML

DATOS:
------

>Almacenar información del paciente: 
+ DNI 
+ nombre y apellidos
+ teléfonos
+ correos electrónicos
+ dirección(nes) postales
+ anotaciones
+ favorito
+ más usados
+ redes sociales (nombre + URL ó usuario)

NO FUNCIONALES: 
---------------

+ Escrito en C++
+ Se ejecuta en un ordenador con Linux
+ Nivel de seguridad cero
+ Integridad de datos: copias de seguridad manuales
+ Volumen de datos 200 entradas
+ El almacenamiento es texto plano/binario

PRIORIDADES: 
------------

>Como cliente me interesa que funcione lo primero la funcionalidad de búsqueda por apellido, para sustituir mi agenda de papel. Nota: ten en cuenta que esta preferencia tendrá dependencias.