cmake_minimum_required(VERSION 4.3.1)
project(LabyrinthOfHorrors)

set(CMAKE_CXX_STANDARD 26)

# List all your .cpp or .c files inside the parentheses
add_executable(LabyrinthOfHorrors src/gate.cpp src/guardian.cpp src/main.cpp src/maze.cpp src/player.cpp src/ravager.cpp src/store.cpp src/trickster.cpp src/warden.cpp src/util/random_generator.cpp)
