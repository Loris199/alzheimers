# Memory Safe C

Ce repos sert d'annexe à mon Travail de Bachelor (TB) et est une extension au repos principal [Memory Safe C](https://github.com/Loris199/Memory-Safe-C)

Le contenu de ce repos est le suivant :

## Programmes `.c`
Ces programmes de test contiennent chacun une erreur mémoire.

Comparé au repos originel, j'y ai effectué deux modifications :
- Traduit le code C++ en code C.
- Modifié certains programmes pour que l'erreur ne soit pas détectée par un compilateur standard, tout en conservant l'erreur d'origine.

## Dossier `versionIA`
Ce dossier contient une copie de chacun des programmes `.c` mentionnés ci-dessus. Ces fichiers ont été renommés et modifiés (en retirant les commentaires) afin d'anonymiser l'erreur qu'ils contiennent. Cela a permis de les fournir à une IA afin d'évaluer sa capacité à détecter les erreurs.

## Script `test.bash`
Ce script permet de parcourir l'entier du repos afin de tester successivement chaque programme à l'aide de l'outil passé en paramètre. Le script fait appel à [testTool.bash](https://github.com/Loris199/Memory-Safe-C/tree/main#dossier-scripts) présenté dans le repos principal, par conséquent les mêmes options sont disponibles.

---

README originel ci-dessous.

# Alzheimer's

An overview of commonly-occuring classes of memory-related bugs in C/C++. Following are the most frequently-occuring memory errors:

- **Memory Leaks**: memory is allocated but not deallocated, causing the program to consume more and more memory over time
- **Dangling Pointers**: a pointer to a memory location that has already been freed explicitly or by a garbage collector
- **Buffer Overflows**: write to a memory buffer beyond its allocated bounds, causing the program to crash or behave unexpectedly
- **Use After Free**: memory access that has already been freed, causing the program to crash or corrupt memory
- **Invalid Free**: attempt to free memory that has not been dynamically allocated
- **Double Free**: program attempts to free memory that has already been freed

## Usage

This repository contains at least one code example of each memory-related error defined above. You will need `gcc` or `clang` installed in your system in order to compile and run. For example, to compile `memory-leak.cc` execute the following command:

```sh
gcc -o memory-leak memory-leak.cc -Wall
```

The `-Wall` flag tells compiler to generate all warnings, which are really helpful to know more about these memory bugs.

To run the program, simply execute:

```sh
./memory-leak
```
