#include <iostream>

enum game_status{not_started, pending, lost, won};

struct COORD{
    int x;
    int y;
};

struct Game {
  game_status status;
  long time;
  int score;
  int remaining_small_dots;
  int remaining_big_dots;
  int remaining_cherries;

};

struct Pacman {
  int health;
  int direction;
  int x,y;
  int relative_speed;
};

class Ghost {
public:
  int relative_speed;
  int ghost_house_cooldown;
  int direction;
  int x,y;
  bool blue_mode; // a mode in which ghost can be hunted by pacman;

  virtual COORD find_next_move() = 0;
};

class Blinky : Ghost {
public:
  COORD find_next_move() {
    // implementation here
  }
};

class Pinky : Ghost {
public:
  COORD find_next_move() {
    // implementation here
  }
};

class Clide : Ghost {
public:
  COORD find_next_move() {
    // implementation here
  }
};

enum Inky_status { m_Blinky, m_Pinky, m_Clide};
class Inky : Ghost {
public:
  Inky_status status;
  COORD find_next_move() {
    // implementation here
  }
};

struct map {
  COORD dimentions;
  char[][] map;
};

int main() {
    return 0;
}