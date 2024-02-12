// CppCStyleStringsProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>

void StrCopy(char*& dist, const char* source);

int main()
{
    /*char str[] = "Hello world";

    for (int i{}; i < std::strlen(str); i++)
        std::cout << str[i] << "\n";

    char* strdyn = new char[22] { "Hello world" };
    std::cout << strdyn << "\n";*/

    char* str2 = new char;

    //StrCopy(str2, "Hello world");
    //StrCopy(str2, "Hello people");

    std::strcpy(str2, "Hello world");

    char* str3 = new char[20] { "Hello" };
    std::strcat(str3, "world");

    std::cout << str3;
}

void StrCopy(char*& dist, const char* source)
{
    int len{};

    while (source[len])
        len++;
    
    if (dist)
        delete[] dist;
    dist = new char[len + 1];

    for (int i{}; i < len; i++)
        dist[i] = source[i];
    dist[len] = '\0';
}
