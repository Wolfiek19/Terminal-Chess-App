#include "pieces.h"
#include <iostream>

using namespace std;

Knight::Knight(){

    x_knight = 3;
    y_knight = 0;
}

bool Knight::Move(int x_knight, int y_knight){

    if(x_knight < 0 || x_knight > 9 || y_knight < 0 || y_knight >9){
        cout << "This move is out of range" << endl;

        return false;
    }

    else if(x_knight == this-> x_knight + 2 &&  (y_knight == this-> y_knight +1 || y_knight == this -> y_knight -1)){
        this -> x_knight = x_knight;
        this-> y_knight = y_knight;
        cout << "(" << x_knight << ", " << y_knight << ")" << endl;
        return true;
    }
    else if(x_knight == this-> x_knight - 2 &&  (y_knight == this-> y_knight - 1 || y_knight == this -> y_knight + 1) ){
        this -> x_knight = x_knight;
        this-> y_knight = y_knight;
        cout << "(" << x_knight << ", " << y_knight << ")" << endl;
        return true;
    }
    else{
        cout << "This move is invalid." << endl;
        return false; 
    }

}

int Knight::get_x_knight(){

    return x_knight;
}

int Knight::get_y_knight(){

    return y_knight;
}
King::King(){

     x_king = 4;
     y_king = 0;

}
bool King::Move(int x_king, int y_king){
   
    if(x_king < 0 || x_king > 9 || x_king < 0 || y_king >9){
        cout << "This move is out of range" << endl;
        return false;

    }
    else if(x_king == this -> x_king + 1 && y_king == this -> y_king){
        this -> x_king = x_king;
        cout << "(" << x_king << ", " << y_king << ")" << endl;
        return true;
    }
    else if(x_king == this -> x_king - 1 && y_king == this -> y_king){
        this -> x_king = x_king;
        cout << "(" << x_king << ", " << y_king << ")" << endl;
        return true;
    }
    else if(y_king == this -> y_king + 1 && x_king == this -> x_king){
        this -> y_king = y_king;
        cout << "(" << x_king << ", " << y_king << ")" << endl;
        return true;
    }
    else if(y_king == this -> y_king - 1 && x_king == this -> x_king){
        this -> y_king = y_king;
        cout << "(" << x_king << ", " << y_king << ")" << endl;
        return true;
    }
    
    else{
        cout << "This move is invalid" << endl;
        return false;
    }
}
int King::get_x_king(){
    return x_king;
}
int King::get_y_king(){
    return y_king;
}

Pawn::Pawn(){

     x_pawn = 5;
     y_pawn = 0;

}
bool Pawn::Move(int x_pawn, int y_pawn){
    int pawn_x = this -> x_pawn;
    int pawn_y = this -> y_pawn;
    if(x_pawn < 0 || x_pawn > 9 || y_pawn < 0 || y_pawn >9){
        cout << "This move is out of range" << endl;
        return false;
    }
    if(pawn_x == x_pawn && pawn_y == 0){
        if(pawn_x == x_pawn && (y_pawn < 3 && y_pawn > 0)){  
            this -> x_pawn = x_pawn;
            this -> y_pawn = y_pawn;
            cout << "(" << x_pawn  << ", " << y_pawn << ")" << endl;
            return true;
        }

        else{
            cout << "This move is invalid" << endl;
            return false;
        }
    }

    if(pawn_x == x_pawn && y_pawn == this -> y_pawn + 1){
            this -> x_pawn = x_pawn;
            this -> y_pawn = y_pawn;
            cout << "(" << x_pawn << ", " << y_pawn << ")" << endl;
            return true;
        }
        else{
        cout << "This move is invalid" << endl;
        return false;
   return false;
    
    
}
}
int Pawn::get_x_pawn(){
    return x_pawn;
}
int Pawn::get_y_pawn(){
    return y_pawn;
}

Rook::Rook(){

    x_rook = 6;
    y_rook = 0;

}
bool Rook::Move(int x_rook, int y_rook){ 
    
    
    if(x_rook < 0 || x_rook > 9 || y_rook < 0 || y_rook >9){
        cout << "This move is out of range" << endl;
        return false;
    }
    if(this -> y_rook != y_rook && this -> x_rook != x_rook){
        cout << "This move is invalid" << endl;
        return false;
    }
    else if(this -> y_rook == y_rook && this -> x_rook == x_rook){
        cout << "This move is invalid" << endl;
    }
    else{
        if( this -> x_rook != x_rook){
            this -> x_rook = x_rook;
            cout << "(" << x_rook << "," << y_rook << ")" << endl;
            return true;
        }
        else{
            this -> y_rook = y_rook;
            cout << "(" << x_rook << "," << y_rook << ")" << endl;
            return true;
        }
        return false;
    }
   
 return false;   
}
int Rook::get_x_rook(){
    return x_rook;
}
int Rook::get_y_rook(){
    return y_rook;
}