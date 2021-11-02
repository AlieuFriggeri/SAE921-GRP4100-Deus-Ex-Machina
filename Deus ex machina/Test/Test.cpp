// Test.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

void add(int* intPtr, std::vector<int*>& intsPtrs_)
{
    intsPtrs_.push_back(intPtr);
}

void remove(int* intPtr, std::vector<int*>& intsPtrs_)
{
    //
}
int main()
{
    std::vector<int*> intsPtrs;
    
    int a = 20;
    int* aPtr = &a;

    int b = 30;
    int* bPtr = &b;

    int c = 40;
    int* cPtr = &c;

    intsPtrs.push_back(aPtr);
    intsPtrs.push_back(bPtr);
    intsPtrs.push_back(cPtr);
    std::vector<int*>::iterator it;
    it = intsPtrs.begin();
    int i = 0;

    while (*it != aPtr)
    {
        i++;
        it++;
    }

    intsPtrs.erase(intsPtrs.begin() + i);


    for  (auto int_ : intsPtrs)
    {
        std::cout << *int_ << std::endl;
    }
    
}


