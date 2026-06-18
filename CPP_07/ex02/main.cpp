/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:33:49 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/18 10:43:19 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Point
{
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    int x;
    int y;
};
 
static int testsPassed = 0;
static int testsFailed = 0;
 
void check(bool condition, const std::string& label)
{
    if (condition)
    {
        std::cout << "[OK] " << label << std::endl;
        testsPassed++;
    }
    else
    {
        std::cout << "[KO] " << label << std::endl;
        testsFailed++;
    }
}
 
int main()
{
    std::cout << "===== Test 1: constructeur par defaut =====" << std::endl;
    {
        Array<int> a;
        check(a.size() == 0, "taille == 0 pour un tableau vide");
 
        bool threw = false;
        try
        {
            (void)a[0];
        }
        catch (const std::exception&)
        {
            threw = true;
        }
        check(threw, "operator[] leve une exception sur un tableau vide");
    }
 
    std::cout << "\n===== Test 2: constructeur avec n elements =====" << std::endl;
    {
        Array<int> a(5);
        check(a.size() == 5, "taille == 5");
 
        bool allZero = true;
        for (unsigned int i = 0; i < a.size(); i++)
        {
            if (a[i] != 0)
                allZero = false;
        }
        check(allZero, "tous les elements sont initialises a 0 par defaut");
 
        a[2] = 42;
        check(a[2] == 42, "modification d'un element via operator[]");
 
        bool threw = false;
        try
        {
            (void)a[5]; // hors limites (taille 5, indices valides 0..4)
        }
        catch (const std::exception&)
        {
            threw = true;
        }
        check(threw, "operator[] leve une exception hors limites (index == size)");
    }
 
    std::cout << "\n===== Test 3: constructeur par copie (deep copy) =====" << std::endl;
    {
        Array<int> original(3);
        original[0] = 1;
        original[1] = 2;
        original[2] = 3;
 
        Array<int> copy(original);
        check(copy.size() == original.size(), "la copie a la meme taille");
        check(copy[0] == 1 && copy[1] == 2 && copy[2] == 3,
              "la copie a les memes valeurs au depart");
 
        original[0] = 99;
        check(copy[0] == 1, "modifier l'original n'affecte pas la copie");
 
        copy[1] = 77;
        check(original[1] == 2, "modifier la copie n'affecte pas l'original");
    }
 
    std::cout << "\n===== Test 4: operator= (deep copy) =====" << std::endl;
    {
        Array<int> a(3);
        a[0] = 10;
        a[1] = 20;
        a[2] = 30;
 
        Array<int> b(1);
        b = a;
 
        check(b.size() == 3, "apres affectation, b a la bonne taille");
        check(b[0] == 10 && b[1] == 20 && b[2] == 30,
              "apres affectation, b a les bonnes valeurs");
 
        a[0] = -1;
        check(b[0] == 10, "modifier a apres l'affectation n'affecte pas b");
 
        b[1] = -2;
        check(a[1] == 20, "modifier b apres l'affectation n'affecte pas a");
 
    }
 
    std::cout << "\n===== Test 5: Array avec un type non primitif =====" << std::endl;
    {
        Array<Point> points(3);
        check(points.size() == 3, "taille correcte pour un Array<Point>");
        check(points[0].x == 0 && points[0].y == 0,
              "Point initialise par defaut a (0,0)");
 
        points[1] = Point(5, 7);
 
        Array<Point> copyPoints(points);
        points[1] = Point(0, 0);
        check(copyPoints[1].x == 5 && copyPoints[1].y == 7,
              "deep copy fonctionne aussi avec un type objet");
    }
 
    std::cout << "\n===== Resume =====" << std::endl;
    std::cout << testsPassed << " tests reussis, " << testsFailed << " tests echoues."
              << std::endl;
 
    return (testsFailed == 0 ? 0 : 1);
}