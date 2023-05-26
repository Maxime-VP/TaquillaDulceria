# TaquillaDulceria
Este proyecto trata acerca de la dulcería de un cine cualquiera en el que el usuario puede agregar o eliminar productos a su ticket ya sea en forma de un combo que incluya varios productos a un precio reducido o de forma independiente. El programa registrará los distintos productos solicitados por el usuario y le regresará el total de la cuenta de forma automática.

# Funcionalidad
Este programa permite al usuario agregar diferentes productos a su cuenta o ticket, permitiendo que este decida los atributos de estos y calculando automáticamente el precio de estos.

El usuario puede decidir si quiere palomitas, refresco y/o un combo.

- Si el usuario elige palomitas o refresco, el usuario podrá elegir el tamaño de este
  
  Tras haber hecho la elección, preguntará si quiere agregar algo extra
    +  Si dice que sí; solicitará de nuevo si quiere palomitas, refresco y/o un combo.
    +  Si dice que no; terminará de correr el código e imprimirá el recibo del cliente con los articulos seleccionados.

- Si el usuario elige un combo, preguntará qué combo desea: combo nachos o combo hotdog
  Depende de la elección, solicitará al usuario decidir las propiedades de los nachos o del hotdog respectivamente
  (Los atributos de tamaño de la bebida y de las palomitas estarán hardcodeados como el valor más grande cuando se trate de un combo)
  
  Tras haber hecho la elección, preguntará si quiere agregar algo extra
    +  Si dice que sí; solicitará de nuevo si quiere palomitas, refresco y/o un combo.
    +  Si dice que no; terminará de correr el código e imprimirá el recibo del cliente con los articulos seleccionados.

  

# Consideraciones

El funcionamiento de este es el de llevar la cuenta de cliente e ir sumando el costo de los productos con sus especificaciones.

Este programa está hecho con C++ standard y corre en la consola.
Para correrlo adeuadamente se deberán descargar todos los archivos en una sola carpeta.

El programa tendrá validacion del tipo variables para que en lugar de que el progama crasheé cuando se introduzca un valor no valido, se vuelva a hacer la solicitud al usuario.
Por el momento la validación no está completa, al introducir valores ajenos a los solicitados es posible que el programa crasheé o regrese un valor basura (esto pasa al seleccionar un tamaño inválido, pues de este depende que se asigne un costo al producto).
De igual forma la parte de eliminar productos aún no está implementada por lo que por el momento solo se pueden agregar los precios de forma indefinida.
