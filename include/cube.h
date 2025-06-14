#ifndef CUBE
#define CUBE

#include "wall.h"
#include "colors.h"

class Cube{
public:
    // ========================================================================
    // ================================ Fields ================================
    // ========================================================================
    Wall wall_front = Wall(Color::blue);
    Wall wall_right = Wall(Color::red);
    Wall wall_left  = Wall(Color::orange);
    Wall wall_up    = Wall(Color::yellow);
    Wall wall_down  = Wall(Color::white);
    Wall wall_back  = Wall(Color::green);



    // ========================================================================
    // ============================= Constructors =============================
    // ========================================================================
    //solved cube constructor
    Cube();

    Cube(Color wall_front_color,
         Color wall_right_color,
         Color wall_left_color,
         Color wall_up_color,
         Color wall_down_color,
         Color wall_back_color);

    Cube(Wall wall_front, 
         Wall wall_right,
         Wall wall_left,
         Wall wall_up,
         Wall wall_down,
         Wall wall_back);


    // =========================================================================
    // ============================ Methods - moves ============================
    // =========================================================================

    // =============== Basic ================
    void F();
    void R();
    void L();
    void U();
    void D();
    // void B();

    // ============== Reverse ==============
    void Fp();
    void Rp();
    void Lp();
    void Up();
    void Dp();
    // void Bp();

    // ============= Cube moves =============
    // void x();
    void y();
    void z();
    
    // ========= Reverse cube moves =========
    // void xp();
    void yp();
    void zp();



    // =========================================================================
    // ============================ Methods - other ============================
    // =========================================================================
    void print_cube();
    bool is_solved();



    // =========================================================================
    // =========================== Methods - solving ===========================
    // =========================================================================

    //stuff


};

#endif //CUBE