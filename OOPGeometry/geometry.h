#ifndef _GEOMETRY_H_

    #define _GEOMETRY_H_

    #include <iostream>
    #include <string>

    class Point{

        private:
            int x;
            int y;

        public:
            
            // Constructors
            Point();
            Point(int val1, int val2);

            // Getter / setter functions
            int get_x(){ return this->x; };
            int get_y(){ return this->y; };
            void set_x(const int newx) { this->x = newx; };
            void set_y(const int newy) { this->y = newy; };
            std::string as_string();
            
    };

    class PointArray{

        private:

            Point * points;
            unsigned int lenght; 

            void resize(const unsigned int n);

        public:

            // Constructors
            PointArray();
            PointArray(const Point points[], const unsigned int size);

            // Methods
            std::string as_string(); // To be implemented
            void push_back(Point &p ); // To be implemented
            // To be continued ... 


    };

#endif