# Tests
add_executable(
    tests
    tests.cpp
)

find_package(Catch2 CONFIG REQUIRED)

target_link_libraries(
    tests
    PRIVATE
    Catch2::Catch2WithMain
)