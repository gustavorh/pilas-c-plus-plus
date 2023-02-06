## Introducción
Este código en C++ implementa una pila, la cual es una estructura de datos lineal en la que se agrega y se elimina un elemento siempre en el mismo extremo (tope).

## Funciones

### `void ingresar()`
Esta función permite ingresar un nuevo elemento a la pila.

### `void sacar()`
Esta función permite eliminar un elemento de la pila.

### `void actualizar_pila()`
Esta función permite visualizar los elementos actuales en la pila y su orden.

## Flujo del código

1. La función `ingresar()` es llamada tres veces para agregar tres elementos a la pila.
2. Luego, la función `sacar()` es llamada para eliminar un elemento de la pila.
3. Finalmente, la función `actualizar_pila()` es llamada para visualizar los elementos actuales en la pila y su orden.

## Consideraciones
- Este código implementa una pila dinámica, lo que significa que su tamaño se puede ajustar de manera dinámica en tiempo de ejecución.
- Es importante tener en cuenta que la pila es una estructura de datos lineal que opera en el principio de LIFO (Last In, First Out), por lo que el último elemento agregado será el primero en ser eliminado.
