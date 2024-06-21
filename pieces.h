

class Knight{

    public:
    Knight();
    bool Move(int x_knight, int y_knight);
    int get_x_knight();
    int get_y_knight();

    private:
    int x_knight;
    int y_knight;
};

class King{

    public:
    King();
    bool Move(int x_king, int y_king);
    int get_y_king();
    int get_x_king();

    private:
    int x_king;
    int y_king;
};


class Pawn{
    
    public:
    Pawn();
    int get_x_pawn();
    int get_y_pawn();
    bool Move(int x_pawn, int y_pawn);

    

    private:
    int x_pawn;
    int y_pawn;
};

class Rook{

    public:
    Rook();
    bool Move(int x_rook, int y_rook);
    int get_x_rook();
    int get_y_rook();

    private:
    int x_rook;
    int y_rook;
};