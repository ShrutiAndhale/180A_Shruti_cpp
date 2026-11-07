//asteroid.cpp
#include <iostream>
#include <vector>
#include "asteroid.h"

int countHits(std::vector<Asteroid> a) {
    std::vector<Asteroid> activeAsteroid;

    for(Asteroid currentAsteroid : a){

        if(currentAsteroid.d == right){
            activeAsteroid.push_back(currentAsteroid);  
        }

        else{
            bool survivedAsteroid = true;     // for currentAteroid.d == left

            while(!activeAsteroid.empty() && survivedAsteroid){

                Asteroid lastAsteroid = activeAsteroid.back();   // Assigning last asteroid to lastAsteroid
                
                if (currentAsteroid.m > lastAsteroid.m) {
                    activeAsteroid.pop_back();                // last active asteroid is destroyed
                }
                else if (currentAsteroid.m < lastAsteroid.m) {
                    survivedAsteroid = false;
                }
                else {
                    activeAsteroid.pop_back();    // both are destroyed
                    survivedAsteroid = false;
                }
            }
        }
    }
    return activeAsteroid.size();
}   


/*
int main() {
    std::vector<Asteroid> test1 = {
        {10, right},
        {11, left},
        {11, right},
        {5, left}
    };
    std::vector<Asteroid> test2 = {
        {10, right},
        {11, right},
        {11, right},        
    };
    std::vector<Asteroid> test3 = {
        {10, left},
        {5, left},
        {11, left},        
    };
    std::cout << "Test 1: " << countHits(test1) << std::endl;
    std::cout << "Test 2: " << countHits(test2) << std::endl;
    std::cout << "Test 3: " << countHits(test3) << std::endl;
    return 0;
}
*/


/*
Time Complexity: O(n)
Each asteroid is pushed into activeAsteroid at most once.
Each asteroid can be removed using pop_back() at most once.
Therefore, the total number of while loop iterations across the entire function is at most n

Space Complexity: O(n)
std::vector<Asteroid> activeAsteroid;
can contain up to n asteroids in the worst case, such as when all asteroids move right.
*/
