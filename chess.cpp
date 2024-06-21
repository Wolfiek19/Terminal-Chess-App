#include "pieces.h"
#include <iostream>

using namespace std;

int main(){
    bool still_playing = true;
    char answer;
    int x,y;
    Knight k1; 
    King ki1;
    Pawn p1;
    Rook r1;
    cout << "Welcome to my chess game. The rules are as follows:" << endl;
    cout << "The Knight piece may move 2 spaces left or right and 1 space up or down." << endl;
    cout << "The King piece may move 1 space in any arbitray direction." << endl;
    cout << "The Pawn piece may move 2 spaces up on the first move and 1 space up on each subsequent move." << endl;
    cout << "The Rook piece may move an arbitrary number of space in any one direction per move." << endl;
    cout << "Knight-" << "(" << k1.get_x_knight() << ", " << k1.get_y_knight() << ")"<< endl;
    cout << "King-" << "(" << ki1.get_x_king() << ", " << ki1.get_y_king() << ")"<< endl;
    cout << "Pawn-" << "(" << p1.get_x_pawn() << ", " << p1.get_y_pawn() << ")" << endl;
    cout << "Rook-" << "(" << r1.get_x_rook() << ", " << r1.get_y_rook() << ")" << endl;
    
    while(still_playing == true){
   
    do {
        cout << "Please move the knight piece" << endl;
        cin >> x >> y;
        if((x == ki1.get_x_king() && y == ki1.get_y_king())
         || (x == p1.get_x_pawn() && y == p1.get_y_pawn() ) || (x == r1.get_x_rook() && y == r1.get_y_rook())){
            cout <<  "This move is invalid because there is already a piece in that position. Please try again!" << endl;
	        cin >> x >> y;
           
        }
        
    } while (!k1.Move(x,y));

    do{
        cout << "Please move the King Piece" << endl;
        cin >> x >> y;
       
        if((x == k1.get_x_knight() && y == k1.get_y_knight()) || (x == p1.get_x_pawn() && y == p1.get_y_pawn()) || (x == r1.get_x_rook() && y == r1.get_y_rook())){
            cout <<  "This move is invalid because there is already a piece in that position. Please try again!" << endl;
	        cin >> x >> y;
          
        }
        
    } while(!ki1.Move(x,y));

    do{
        cout << "Please move the Pawn Piece" << endl;
        cin >> x >> y;
        
        if((x == k1.get_x_knight() && y == k1.get_y_knight()) || (x == ki1.get_x_king() && y == ki1.get_y_king()) || (x == r1.get_x_rook() && y == r1.get_y_rook())){
            cout <<  "This move is invalid because there is already a piece in that position. Please try again!" << endl;
	        cin >> x >> y;
            
        }
        

    } while(!p1.Move(x,y));

     do{
        cout << "Please move the Rook Piece" << endl;
        cin >> x >> y;
        
        if((x == k1.get_x_knight() && y == k1.get_y_knight()) || (x == ki1.get_x_king() && y == ki1.get_y_king()) || (x == p1.get_x_pawn() && y == p1.get_y_pawn() )){
            cout <<  "This move is invalid because there is already a piece in that position. Please try again!" << endl;
	        cin >> x >> y;
            
        }
        

    } while(!r1.Move(x,y));
    
    cout << "Updated piece positions." << endl;
    cout << "Knight-" << "(" << k1.get_x_knight() << ", " << k1.get_y_knight() << ")"<< endl;
    cout << "King-" << "(" << ki1.get_x_king() << ", " << ki1.get_y_king() << ")"<< endl;
    cout << "Pawn-" << "(" << p1.get_x_pawn() << ", " << p1.get_y_pawn() << ")" << endl;
    cout << "Rook-" << "(" << r1.get_x_rook() << ", " << r1.get_y_rook() << ")" << endl;

    
    cout << "Would you like to keep playing Y/N?" << endl;
    cin >> answer;
    if(answer == 'N' || answer == 'n'){
        cout << "Thank you for playing!" << endl;
        still_playing = false;
    }


    }
    

};