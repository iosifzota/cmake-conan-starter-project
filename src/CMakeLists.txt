# Main
add_executable(
    tiny_fsm
    main.cpp
)

target_link_libraries(
    tiny_fsm
    PUBLIC
    ${CONAN_LIBS}
)

add_subdirectory(tests)