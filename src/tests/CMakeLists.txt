# Tests
add_executable(
    tests
    tests.cpp
)

target_link_libraries(
    tests
    PUBLIC
    ${CONAN_LIBS}
)