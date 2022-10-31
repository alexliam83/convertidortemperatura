# convertidortemperatura
Programa hecho en C para convertir de ºC a ºF y viceversa


En una publicación reciente de Brais Moure en [su Linkedin](https://www.linkedin.com/posts/braismoure_hoy-resolvemos-el-reto-de-programaci%C3%B3n-de-activity-6990275736829870081-5ELB?utm_source=share&utm_medium=member_desktop) pude ver que uno de los retos semanales que proponía era la de crear un programa que
convirtiese temperaturas de ºC a ºF y viceversa con una serie de condiciones.

Para empezar el progrma solo funcionaría si se le ponía el símbolo º y al final de C o F. Cuando me he puesto a trabajar con esto me he dado cuenta
que en C, el lenguaje que he usado para programar el reto, trabajar con el símbolo º es muy complicado y se escapaba un poco a mi nivel (y tampoco
tenía demasiado tiempo para investigar sobre el tema) así que después de unas cuantas horas intentando hacerlo funcionar de esta forma he decidido
descartar este requisito.

Por lo demas he hecho el programa para que introduzcamos vía argumentos la temperatura que queremos convertir seguido de la unidad, por ejemplo 15C o 75F
y el programa devuelve la temperatura convertida.

Hay que tener en cuenta que en el proyecto he usado funciones como strlen o atoi de las que yo ya he realizado [mis propias versiones en el proyecto
libft de 42](https://github.com/alexliam83/libft.h), pero buscando la simplicidad he optado por usar las oficiales.

Posiblemente se podría hacer mejor o usando otra fórmula pero esta es la que se me ha ocurrido a mi y acepto cualquier consejo para mejorar el código.
