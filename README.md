[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# Respuestas

# Punto 1
## ¿Porque es conveniente incluirlo?
El archivo .gitignore es útil en proyectos bajo control de versiones con Git porque evita que ciertos archivos innecesarios o no deseados sean rastreados y versionados. Algunas razones para usarlo son :
* Evitar archivos temporales.
* Proteger datos sensibles.
* Optimizar el repositorio.
* Mantener el repositorio limpio.

## ¿Cómo se debe hacer?
Para crear un archivo .gitignore local, se crea un archivo de texto y se le asigna el nombre ".gitignore". Luego, edita este archivo según se necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.
Las entradas de este archivo también pueden seguir un patrón coincidente:
* "*" se utiliza como una coincidencia comodín.
* "/" se usa para ignorar las rutas relativas al archivo .gitignore.
* "#" es usado para agregar comentarios.

## ¿Cómo configurar el archivo .gitignore correctamente?
1- Usar reglas generales y específicas:
* Las reglas generales deben ir al inicio del archivo.
* Si hay excepciones, agrégalas después con !.

2- Agrupar archivos similares:
* Ordenar por tipo de archivo o propósito (ayuda a la organización).

3- Usar comentarios:
* Explicar por qué ciertos archivos se están ignorando.

4- Revisar archivos ignorados en GitHub o plantillas.

Siguiendo estos pasos, se evitará problemas de control de versiones y se mantendra el repositorio más eficiente y limpio.

# Punto 2
##  ¿Qué archivos vé?
Veo las carpeta .vscode y output , el ejecutable, el codigo , el archivo .gitignore

## ¿Cuál cree que no hace falta que esté?

No hace falta la carpeta .vscode y output , los ejecutables.

##  ¿A qué se debe que el resultado de los apartados 2 y 3 sea el mismo?
Se debe a que en ambos casos se accede directamente a la dirección de memoria que le corresponde a la variable.

## ¿Qué se obtiene en el punto 4?
Se obtiene la dirección de memoria del propio puntero, es decir, la dirección de memoria donde se encuentra el puntero.

## ¿Es igual a los anteriores? ¿Por qué?
No, no es igual. La dirección del puntero es diferente porque el puntero en sí es una variable que ocupa su propio espacio en la memoria. Aunque almacena la dirección de la variable, el puntero tiene su propia ubicación, por lo que su dirección en memoria es distinta.
