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
            int get_x() const { return this->x; };
            int get_y() const { return this->y; };
            void set_x(const int newx) { this->x = newx; };
            void set_y(const int newy) { this->y = newy; };
            std::string as_string();
            
    };

    class PointArray{

        private:

            Point * points;
            unsigned int length; 

            void resize(const unsigned int n);

        public:

            // Constructors
            PointArray();
            PointArray(const Point points[], const unsigned int size);
            PointArray(const PointArray &pv);
            
            // Methods
            unsigned int get_size() const {return this->length;};
            std::string as_string() const; 
            void push_back(Point &p );
            void insert(const unsigned int pos, Point &p);
            void remove(const unsigned int pos);
            void clear();
            Point * get(const unsigned int position);


    };

#endif