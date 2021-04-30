#include <iostream>
#include <string>
#include "geometry.h"

using namespace std;

#pragma region // Point Class

    #pragma region // Constructors
        Point::Point(){
            this->x = 0;
            this->y = 0;
        }

        Point::Point(int val1, int val2){
            this->x = val1;
            this->y = val2;
        }

    #pragma endregion

    string Point::as_string(){

        string str = "(";
        str += to_string(this->x);
        str += ",";
        str += to_string(this->y);
        str += ")";

        return str;
    }

#pragma endregion


#pragma region // PointArray Class

    #pragma region // Constructors

    PointArray::PointArray(){

        this->lenght = 0;
        this->points = NULL;
    }

    PointArray::PointArray(const Point points[], const unsigned int size){

        this->lenght = size;
        this->points = new Point[size];

        for(unsigned int i = 0; i < this->lenght; i++) {
            
            this->points[i] = points[i];

        }

    }
    #pragma endregion

    #pragma region // Private Methods
        
        void PointArray::resize(const unsigned int n){
            
            Point * startingpoints = this->points;

            this->points = new Point[n];

            for(unsigned int i = 0; i < min(n, this->lenght); i++) {

                this->points[i] = startingpoints[i];

            }

            this->lenght = n;

            delete startingpoints;

        }

    #pragma endregion

    #pragma region // Public Methods

        


    #pragma endregion

#pragma endregion

