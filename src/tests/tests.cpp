#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include <iostream>

TEST_CASE("Run command manual ruleset dir", "Run rulesets from a dir given by hand against a log file")
{
    std::cout << "\nTEST\n";
    REQUIRE(true);
}

int main(int argc, char *argv[])
{
    // your setup ...

    int result = Catch::Session().run(argc, argv);

    // your clean-up...

    return result;
}
