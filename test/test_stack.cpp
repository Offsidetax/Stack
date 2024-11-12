#include "stack.h"
#include <gtest.h>

TEST(Stack, can_create_stack)
{
	ASSERT_NO_THROW(Stack<int> s);
}


TEST(Stack, can_create_copied_stack)
{
	Stack<int> s1;

	ASSERT_NO_THROW(Stack<int> s2(s1));
}

TEST(Stack, equal_stacks_are_equal)
{
    Stack<int> s1;
    Stack<int> s2;
    s1.push(1); s2.push(1);
    s1.push(1); s2.push(1);

    ASSERT_EQ(s1==s2,1);
}

TEST(Stack, not_equal_stacks_are_not_equal)
{
    Stack<int> s1;
    Stack<int> s2;
    s1.push(1); s2.push(2);
    s1.push(1); s2.push(2);

    ASSERT_EQ(s1!=s2, 1);
}

TEST(Stack, copied_stack_is_equal_to_source_one)
{
    Stack<int> s1;

    Stack<int> s2(s1);

    EXPECT_EQ(s1==s2, 1);
}

TEST(Stack, can_get_size)
{
    Stack<int> s;
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);

    EXPECT_EQ(4, s.size());
}

TEST(Stack, can_check_if_stack_is_empty)
{
    Stack<int> s;

    EXPECT_EQ(1, s.empty());
}

TEST(Stack, can_push_element_in_stack)
{
    Stack<int> s;

    ASSERT_NO_THROW(s.push(1));
}

TEST(Stack, can_pop_element_from_non_empty_stack)
{
    Stack<int> s;
    s.push(1);

    ASSERT_NO_THROW(s.pop());
}

TEST(Stack, cant_pop_element_from_empty_stack)
{
    Stack<int> s;

    ASSERT_ANY_THROW(s.pop());
}

TEST(Stack, can_get_top_element_from_non_empty_stack)
{
    Stack<int> s;
    s.push(1);
    s.push(2);

    ASSERT_NO_THROW(s.top(),2);
}

TEST(Stack, can_get_top_element_from_stack)
{
    Stack<int> s;

    ASSERT_ANY_THROW(s.top());
}