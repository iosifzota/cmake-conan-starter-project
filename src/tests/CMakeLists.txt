# Catch2 setup
Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.1.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# Tests
add_executable(
    tests
    tests.cpp
)

target_link_libraries(
    tests
    PUBLIC
    ${CONAN_LIBS}
    Catch2::Catch2WithMain
)