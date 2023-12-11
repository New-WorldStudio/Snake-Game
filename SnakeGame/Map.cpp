#include "Map.h"
#include <Windows.h>
#include"tool.h"
using namespace SnakeGame;
/*初始化地图
*	cols 列， rows 行
*/
Map::Map(int cols,int rows) : rows(rows),cols(cols)
{
    map = new char* [cols];
    if (map == NULL)
    {
        std::cout << "内存申请失败" << std::endl;
        exit(1);
    }
    for (int i = 0; i < cols; ++i)
    {
        map[i] = new char[rows];
        if (map[i] == NULL)
        {
            std::cout << "内存申请失败" << std::endl;
            exit(1);
        }
        for (int j = 0; j < rows; ++j)
        {
            // 在四周设置墙壁，中间设置为空格
            if (i == 0 || i == cols - 1 || j == 0 || j == rows - 1) 
            {
                map[i][j] = '#';
            }
            else 
            {
                map[i][j] = ' ';
            }
        }
    }
}

/*
*   打印地图
*/
void Map::ShowMap()
{
    for (int i = 0; i < this->cols; ++i) {
        for (int j = 0; j < this->rows; ++j) {
            std::cout << map[i][j];
        }
        std::cout << "\n";
    }
}
//刷新地图
void Map::UpMap(std::vector<Snake::Point>* Snakes)
{
    for (const auto& point : *Snakes)
    {
        gotoxy(point.x, point.y);
        std::cout << "*";
    
    }
}

/*
*释放地图内存
*/
Map::~Map()
{
    for (int i = 0; i < cols; i++)
    {
        delete[] map[i];
    }
    delete[] map;
}