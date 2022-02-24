#include <iostream>
#include "all.h"
#include <string>




std::string result_box;
std::string result_checker;
std::string result_cross;
std::string result_lower;
std::string result_upper;
std::string result_triangle;



std::string box(int width,int height)
{
    for(int i = 0; i <= height-1; i++)
    {
        for(int j = 0; j <= width-1; j++)
        {
            result_box += "*";
        }
        result_box += "\n";
        
    }
    return result_box;
}

std::string checkerboard(int width, int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(i%2 == 0 && j%2 != 0)
            {
            result_checker += " ";
            }

            else if (i%2 != 0 && j%2 == 0)
            {
            result_checker += " ";
            }

            else
            {
                result_checker += "*";
            }
            
        }

    result_checker += "\n";
    }
    return result_checker;
}

std::string cross(int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i==j)
            {
            result_cross += "*";
            }
            else if(j == (size - 1) - i)
            {
            result_cross += "*";
            }
            else{
            result_cross += " ";
            }
        
        }   

        result_cross += "\n";
        
    }
    return result_cross;
}

std::string lower(int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            result_lower += "*";
        }
        result_lower += "\n";
        
    }
    return result_lower;
}
std::string upper(int length)
{
    for(int i = length; i > 0; --i)
    {
        for(int j = 0; j < i; j++)
        {
            result_upper += "*";
        }
        result_upper += "\n";
        
    }
    return result_upper;
}



std::string triangle(int width, int height)
{
    int space = 0;
    int stars = width;

// if the numbers are within range
if(width / 2 >= height || (width + 1) / 2 >= height) 
    { 
        for(int i = 0; i < height; i++) 
        { 
            for(int z = space; z > 0; z--) 
            { 
                result_triangle += " ";
            }

            for(int j = stars; j > 0; j--) 
            { 
                result_triangle += "*";
            }
            
            result_triangle += "\n";
            stars -= 2;
            space += 1;
        }
    } 
    else 
    { 
        return "Impossible shape!";
    }

    return result_triangle;
}




