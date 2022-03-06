
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté hello
project(exec0)

# Crée des variables avec les fichiers à compiler
set(SRCS
    tree.c
    test_api_bt.c
    )
    
set(HEADERS
    tree.h
    )

# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(exec0 ${SRCS} ${HEADERS})
