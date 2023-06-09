# TaquillaDulceria
Este proyecto trata acerca de la dulcería de un cine cualquiera en el que el usuario puede agregar productos a su ticket ya sea en forma de un combo que incluya varios productos a un precio reducido o de forma independiente. El programa registrará los distintos productos solicitados por el usuario y le regresará el total de la cuenta de forma automática.

# Funcionalidad
Este programa permite al usuario agregar diferentes productos a su cuenta o ticket, permitiendo que este decida los atributos de estos y calculando automáticamente el precio de estos.

El usuario puede decidir si quiere palomitas, refresco y/o un combo (puede ser combo Nachos o combo Hotdog).

- Si el usuario elige palomitas o refresco, el usuario podrá elegir el tamaño de este
  
  Tras haber hecho la elección, preguntará si quiere agregar algo extra
    +  Si dice que sí; solicitará de nuevo si quiere palomitas, refresco y/o un combo.
    +  Si dice que no; terminará de correr el código e imprimirá el recibo del cliente con los articulos seleccionados.

- Si el usuario elige un combo, preguntará qué combo desea: combo nachos o combo hotdog
  Depende de la elección, el producto tendrá un costo distinto
  (Los atributos de tamaño de la bebida y de las palomitas estarán hardcodeados como el valor más grande cuando se trate de un combo (el costo del combo depende del costo default de los objetos Snack y del refresco, mas el usuario no puede modificarlo)
  
  Tras haber hecho la elección, preguntará si quiere agregar algo extra
    +  Si dice que sí; solicitará de nuevo si quiere palomitas, refresco y/o un combo.
    +  Si dice que no; terminará de correr el código e imprimirá el recibo del cliente con los articulos seleccionados.

Si se han generado 15 artículos del tipo Snack (Palomitas y/o Bebida) o 15 artículos del tipo Combo (ComboNachos y/o ComboHotdog), el programa terminará de correr el código e imprimirá el recibo del cliente con los articulos seleccionados.

  

# Consideraciones

El funcionamiento de este es el de llevar la cuenta de cliente e ir sumando el costo de los productos con sus especificaciones.

Este programa está hecho con C++ standard y corre en la consola.
Para correrlo adecuadamente se deberán descargar todos los archivos en una sola carpeta.

El programa valida la primera elección para que sea una de las 3 opciones para poder continuar, y acepta diferentes variaciones de tamaño (ej: G, M, C) y de si (ej Si, s, SI).
En las preguntas de Si o No, escribir algo que no sea si se registrará como si hubiese seleccionado no.
De igual forma, al introducir valores ajenos a los solicitados es posible que el programa crasheé o regrese un valor basura (esto pasa al seleccionar un tamaño inválido, pues de este depende que se asigne un costo al producto).

Notas adicionales:

Para guardar los productos se crearon dos listas de apuntadores, una de 0-15 espacios para objetos de tipo combo y otra de 0-15 espacios para objetos de tipo snack, cada que se crea un objeto de dicha clase se ocupa uno de esos espacios comenzando con el espacio 0. Se ha programado que cuando se creen 15 articulos de una misma lista, termine el programa. De otra forma el programa comenzaría a guardar valores fuera de la memoria apartada.

En el UML y en el código se usa tamano en lugar de tamaño para evitar que el programa crasheé


