/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-bastien.gerard
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}


Test(tests, test1)
{
    cr_assert(1);
}
