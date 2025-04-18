# solver for the min GUI problem

## build
    In order to be able to use cadical (the sat solver used here), the easiest way is to Use ./configure && make in the cadical folder, it will create a build directory with the library. Once done, use make test in the build directory to make sure everything is working.

    Then you can create your "build_project" directory and use the given cmake to compile the project using cmake .. then make