#include "Map.h"

using namespace SnakeGame;

/**
*	cols 列， rows 行
*/
Map::Map(int cols,int rows) : rows(rows),cols(cols)
{
    map = new char* [cols];
    for (int i = 0; i < cols; ++i)
    {
        map[i] = new char[rows];
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

/**
*   释放地图内存
*/
Map::~Map()
{
    for (int i = 0; i < cols; i++)
    {
        delete[] map[i];
    }
    delete[] map;
}

/**
*   第一次初始化打印地图
*/
void Map::initializationMap()
{
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << map[i][j] << " ";
        }
        std::cout << "\n";
    }
}

/**
*   用法：获取地图元素
*   参数：cols为每一列，rows为每一行
*/
char Map::getMapElement(int cols, int rows)
{
    return map[cols][rows];
}

/**
*   用法：设置地图元素
*   参数：cols为每一列，rows为每一行
*/
void Map::setMapElement(int cols, int rows,char element)
{
    map[cols][rows] = element;
}


void Map::update()
{
	
}

