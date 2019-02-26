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
