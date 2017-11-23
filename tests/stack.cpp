#include <catch.hpp>

#include "Stack2.hpp"

TEST_CASE("Push") 
{
    Stack<int> Test;
    Test.push(1);
    Test.push(2);
    Test.push(3);
    Test.push(4);
    REQUIRE(Test.count() == 4);
}


TEST_CASE("Pop")
{
    int t1, t2;
    Stack<int> Test;
    Test.push(1);
    Test.push(2);
    Test.push(3);
    Test.push(4);
    t1 = Test.count();
    Test.pop();
    t2 = Test.count();
    REQUIRE(t2 == t1 - 1);
}
