#pragma once
#include<windows.h>
#include"Map.h"
using namespace SnakeGame;
//移动光标到xy
void gotoxy(int x, int y);
//判断失败
void Defeat(std::vector<Snake::Point>* Snakes);
