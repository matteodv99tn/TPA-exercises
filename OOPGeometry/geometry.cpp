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

        Point::Point(const Point &pt ){
            this->x = pt.x;
            this->y = pt.y;
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

        this->length = 0;
        this->points = NULL;
    }

    PointArray::PointArray(const Point points[], const unsigned int size){

        this->length = size;
        this->points = new Point[size];

        for(unsigned int i = 0; i < this->length; i++) {
            
            this->points[i] = points[i];

        }

    }

    PointArray::PointArray(const PointArray &pv){
        
        this->resize( pv.length );

    }
    #pragma endregion

    #pragma region // Private Methods
        
        void PointArray::resize(const unsigned int n){
            
            Point * startingpoints = this->points;

            this->points = new Point[n];

            for(unsigned int i = 0; i < min(n, this->length); i++) {

                this->points[i] = startingpoints[i];

            }

            this->length = n;

            delete startingpoints;

        }

    #pragma endregion

    #pragma region // Public Methods

        string PointArray::as_string() const{
            
            if(this->length == 0 ) return "[]";

            string str = "[";
            
            for(unsigned int i = 0; i < this->length - 1; i++)
                str += this->points[i].as_string() + ", ";

            str += this->points[this->length - 1].as_string() + "]";
            
            return str;
        }
        
        void PointArray::push_back( Point &p ){

            this->resize( this->length + 1);
            this->points[ this->length - 1] = p;

        }
        
        void PointArray::insert(const unsigned int pos, Point &p){

            if( pos > this->length ) throw invalid_argument( string("Trying to insert in a  index (" + to_string(pos) + ") greater than the dimension of the array (" + to_string(this->length) + ")!\n"));
            if( pos < 0 ) throw invalid_argument("Trying to insert in a negative index! \n");

            this->resize( this->length + 1 );

            for(unsigned int i = this->length - 1; i > pos; i--)
                this->points[i] = this->points[i-1];

            this->points[pos] = p;

        }

        void PointArray::remove(const unsigned int pos){

            if( pos >= this->length ) throw invalid_argument("Trying to remove index greater than the dimension of the array!\n");
            if( pos < 0 ) throw invalid_argument("Trying to remove a negative index! \n");

            for(unsigned int i = pos; i < this->length - 1; i++)
                this->points[i] = this->points[i+1];

            this->length--;
            this->resize( this->length );

        }

        void PointArray::clear(){
            
            this->resize( 0 );

        }

        Point * PointArray::get(unsigned int position){

            return &this->points[position];

        }

    #pragma endregion

#pragma endregion

