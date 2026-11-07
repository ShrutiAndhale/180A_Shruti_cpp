Project 6: Use of Vectors and Algorithm Design

Asteroid Problem:

You have a number of asteroids aligned in a line with a space station to the right. All asteroids are traveling at the same speed but they me be traveling either left or right. Asteroids also have an associated mass in addition to their travel direction of left or right. The laws that govern the asteroid collisions are as follows: if two asteroids collide the one with larger mass vaporizes the smaller one and continues traveling in its original direction and at the same speed.

Asteroids of the same mass cancel each other.

You are asked to implement a function that takes a vector of asteroids (aligned left to right) and produces the count of asteroids hits your space station will take. Examples of inputs are displayed next:

(A1:m=10,d=right); (A2:m=11,d=left);(A3:m=11,d=right);(A4:m=5,d=left)=========➔Space Station

For the example above the result will be 1 hit: A2 destroys A1 and keeps traveling left, A3 destroys A4 and eventually hits the space station

(A1:m=10,d=right); (A2:m=11,d=right);(A3:m=11,d=right)=========➔Space Station

For the second example, the result is 3 hits as all asteroids travel right one after the other and hit the space station

Write the C++ function to count hits in and run a number of test cases through it. Determine space and time complexity of your solution

Use the following definition for Asteroid but do not define it in your file:

enum Direction {left, right}

struct Asteroid {

        int m;

        Direction d;

}

Assume these definitions are in a file named asteroid.h in your local directory

int countHits( std::vector<Asteroid> a) {

}
