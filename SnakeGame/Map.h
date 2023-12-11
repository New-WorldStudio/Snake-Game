#pragma once
#include<Windows.h>
#include <iostream>
#include<vector>
#include"Snake.h"
namespace SnakeGame
{
	//地图类
	class Map
	{
	public:
		Map(int cols,int rows); 
		~Map();
		//显示地图
		void ShowMap();
		//刷新地图
		void UpMap(std::vector<Snake::Point>* Snakes);
	private:
		int rows;
		int cols;
		char** map;
	};
}

