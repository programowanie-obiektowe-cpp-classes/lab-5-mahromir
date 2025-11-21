#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> characters;
    for(auto it=people.begin(); it!=people.end(); it++){
        // Nie lubi pieskow ani kotkow
        bool monster = it->isMonster();
        if (!monster){
            characters.insert(characters.begin(), 'y');  
        }else{
            characters.insert(characters.begin(), 'n');  
        }             
        it->birthday();
    }
    return characters;
}
