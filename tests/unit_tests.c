/*
** EPITECH PROJECT, 2019
** unit_tests
** File description:
** my_printf
*/

#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_string_flags, .init = redirect_all_std)
{
    my_printf("%s", "hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_number, .init = redirect_all_std)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, simple_char, .init = redirect_all_std)
{
    my_printf("%c", 'a');
    cr_assert_stdout_eq_str("a");
}

Test(my_printf, simple_binary, .init = redirect_all_std)
{
    my_printf("%b", 42);
    cr_assert_stdout_eq_str("101010");
}

Test(my_printf, simple_pourc, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, simple_number_flagi, .init = redirect_all_std)
{
    my_printf("%i", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, simple_octal_flago, .init = redirect_all_std)
{
    my_printf("%o", 42);
    cr_assert_stdout_eq_str("52");
}

Test(my_printf, simple_number_flagu, .init = redirect_all_std)
{
    my_printf("%u", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, simple_hexa_flagx, .init = redirect_all_std)
{
    my_printf("%x", 42);
    cr_assert_stdout_eq_str("2a");
}

Test(my_printf, simple_hexa_flagX, .init = redirect_all_std)
{
    my_printf("%X", 42);
    cr_assert_stdout_eq_str("2A");
}

Test(my_printf, simple_hexa_flagp, .init = redirect_all_std)
{
    my_printf("%p", 42);
    cr_assert_stdout_eq_str("0x2a");
}

Test(my_printf, mix_string_and_number, .init = redirect_all_std)
{
    my_printf("%s %d", "hello world", 42);
    cr_assert_stdout_eq_str("hello world 42");
}

Test(my_printf, double_string, .init = redirect_all_std)
{
    my_printf("%s%s", "he", "llo" );
    cr_assert_stdout_eq_str("hello");
}

Test(my_printf, triple_flags, .init = redirect_all_std)
{
    my_printf("%d %p %s", 42, 42, "hey");
    cr_assert_stdout_eq_str("42 0x2a hey");
}

Test(my_printf, neg_hexa_flagX, .init = redirect_all_std)
{
    my_printf("%X", -42);
    cr_assert_stdout_eq_str("2A");
}

Test(my_printf, neg_hexa_flagx, .init = redirect_all_std)
{
    my_printf("%x", -42);
    cr_assert_stdout_eq_str("2a");
}

Test(my_printf, neg_binary_flagb, .init = redirect_all_std)
{
    my_printf("%b", -42);
    cr_assert_stdout_eq_str("101010");
}

Test(my_printf, neg_octacl_flago, .init = redirect_all_std)
{
    my_printf("%o", -42);
    cr_assert_stdout_eq_str("52");
}
