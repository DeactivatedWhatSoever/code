#include <iostream>

enum Chess
{
  King,
  Queen,
  Bishop,
  Knight,
  Rook,
  Pawn,
  Empty
};

int main()
{
  Chess chessBoard [8][8] = {
    { Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook },
    { Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn },
    { Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty },
    { Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty },
    { Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty },
    { Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty },
    { Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn },
    { Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook }
  };

  return 0;
}

