cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Graph_univ)

# Spécifier le standard C++ à utiliser
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Définir le répertoire des sources
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)


# Ajouter les fichiers d'en-tête
file(GLOB HEADERS "${SOURCE_DIR}/*.hpp")

# Ajouter les fichiers sources
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")


# Ajouter le chemin vers les fichiers d'en-tête de CaDiCaL
include_directories(${CMAKE_SOURCE_DIR}/cadical-rel-2.1.3/src)

# Ajouter la bibliothèque CaDiCaL (ajoute le dossier à la liste de ceux qui sont parcouru pour trouver les biblio)
link_directories(${CMAKE_SOURCE_DIR}/cadical-rel-2.1.3/build)

#add_subdirectory() pour ajouter un sous dossier où il y a un Cmakelist.txt

# Ajouter les fichiers sources et d'en-tête au projet
add_executable(Graph_univ ${SOURCES} ${HEADERS})

# Inclure le répertoire des fichiers d'en-tête
target_include_directories(Graph_univ PRIVATE ${SOURCE_DIR})

# Si vous avez des bibliothèques supplémentaires à lier, vous pouvez les ajouter ici
target_link_libraries(Graph_univ PRIVATE libcadical.a)
