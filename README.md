# Taller 2 de Arquitectura de Computadores II 

## SAXPY Serial
Para este codigo lo que se realizo fue una insercion de datos en dos listas las cuales, para luego aplicarle ciertas operaciones las cuales son las que describe SAXPY. Para compilar se debera de estar dentro de la carpeta de Arqui-Taller2 y se debera de ejecutar los siguientes comandos.

```bash
gcc saxpy_serial.c -o saxpy_s.c -fopenmp
./saxpy_s.c
```

## SAXPY Parallel
Este algoritmo es el mismo que el anterior solo que utiliza los pragmas definidos por OPENMP para mejorar el rendimiento del programa. Para compilar se debera de utilizar los siguientes comandos igualmente dentro de la carpeta Arqui-Taller2.

```bash
gcc saxpy_paralel.c -o saxpy_p.c -fopenmp
./saxpy_p.c
```


## Taylor Sen(x)
Este programa lo que hace es calcular la funcion de seno a partir de una serie de taylor, donde se pueden encontrar en [Taylor Series](https://es.wikipedia.org/wiki/Serie_de_Taylor). Este codigo se implemento con 2 funciones una principal y otra auxiliar la cual es la funcion factorial. Para la ejecucion de este programa se debe de abrir el codigo, definir el angulo que se quiere calcular dentro de la funcion principal y cuantos terminos de la serie se quieren utilizar definiendoselos a la variable **n**. La ejecucion del programa se hara de la siguiente forma en terminal.

```bash
gcc seno.c -o sen -fopenmp -lm
./sen
```

## Taylor Sen(X) Parallel 
Esta es la funcion de Sen(x) utilizando los pragmas de OPENMP.

```bash
gcc seno_parallel.c -o sen_parallel -fopenmp -lm
./sen_parallel
```
