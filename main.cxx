// in /build
// cmake .. -G "Unix Makefiles"
// make

//useless imports in final program
#include "colors.h"
#include "wall.h"
#include "cube.h"

//useful imports in final program
#include <iostream>

using namespace std;

int main() {
    cout<<"Helou cube!\n";
    Wall w1(Color::white, Color::red,    Color::blue,
            Color::green, Color::yellow, Color::orange,
            Color::green, Color::yellow, Color::red);
    // w1.print_wall();

    // Wall w2(Color::white);
    // w2.print_wall();

    // if(w1.is_one_color()){
    //     cout<<"tak"<<endl;
    // }
    // else cout<<"nouuu"<<endl;

    Cube mi;

    return 0;
}