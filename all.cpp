#include <iostream>
#include "all.h"
#include <string>






std::string box(int width,int height)
{
    std::string result_box = "";
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
    std::string result_checker = "";
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
    std::string result_cross = "";
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
    std::string result_lower = "";
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
    std::string result_upper = "";
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
    std::string result_triangle = "";
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

std::string checkerboard3x3(int width,int height)
{
    std::string result_checkerboard3x3 = "";
    bool star = true;
    bool space = false;
    int star_count = 0;
    int space_count = 0;

    bool line = true; 
    int line_count = 0; 

    for(int i = 0; i < height; i++)  {
        line_count++;

        for(int j = 0; j < width; j++) 
        { 
            if(star_count == 3)
            { 
                star = !star;
                space = !space; 
                star_count = 0; 
            }

            if(space_count == 3) 
            { 
                star = !star; 
                space = !space; 
                space_count = 0; 
            }

            if(star) 
            { 
                result_checkerboard3x3 += "*";
                star_count++;
            }
            
            if(space) 
            { 
                result_checkerboard3x3 += " ";
                space_count++;
            }
        }

        if(line_count > 5) 
        { 
            line = true; 
            line_count = 0; 
        }

        if(line_count < 3 && line) 
        { 
            star = true;
            space = false;
            if(line_count == 3) 
            { 
                line = !line; 
            }
        } 
        else 
        { 
            star = false;
            space = true;
        }

        result_checkerboard3x3 += "\n"; 
        space_count = 0; 
        star_count = 0;               
    }


    return result_checkerboard3x3;
}





