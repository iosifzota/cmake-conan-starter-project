# Main
add_executable(
    main
    main.cpp
)

target_link_libraries(
    main
    PUBLIC
    ${CONAN_LIBS}
)

add_subdirectory(tests)