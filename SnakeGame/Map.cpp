#include "Map.h"
#include <Windows.h>
#include"tool.h"
using namespace SnakeGame;
/*��ʼ����ͼ
*	cols �У� rows ��
*/
Map::Map(int cols,int rows) : rows(rows),cols(cols)
{
    map = new char* [cols];
    if (map == NULL)
    {
        std::cout << "�ڴ�����ʧ��" << std::endl;
        exit(1);
    }
    for (int i = 0; i < cols; ++i)
    {
        map[i] = new char[rows];
        if (map[i] == NULL)
        {
            std::cout << "�ڴ�����ʧ��" << std::endl;
            exit(1);
        }
        for (int j = 0; j < rows; ++j)
        {
            // ����������ǽ�ڣ��м�����Ϊ�ո�
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
*   ��ӡ��ͼ
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

// ˢ�µ�ͼ
void Map::UpMap(std::vector<Snake::Point>* Snakes ,int x,int y)
{
    for (size_t i = 0; i < Snakes->size(); ++i) {
        const auto& point = (*Snakes)[i];
        gotoxy(point.x, point.y);
        if (i == Snakes->size() - 1) {
            std::cout << ' '; // ��ʾ�ߵ�ĩβΪ�ո�
        }
        else {
            std::cout << "*"; // ��ʾ�ߵ����岿��
        }
    }
    gotoxy(x, y);
    std::cout << "0";
}
/*
*�ͷŵ�ͼ�ڴ�
*/
Map::~Map()
{
    for (int i = 0; i < cols; i++)
    {
        delete[] map[i];
    }
    delete[] map;
}