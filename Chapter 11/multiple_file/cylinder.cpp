#include "cylinder.h"
#include "constant.h"
        Cylinder::Cylinder(double rad,double hgt){
            radius=rad;
            height=hgt;
        }

        //getters
        double Cylinder::get_rad()
        {
            return radius;
        }

        double Cylinder::get_hgt()
        {
            return height;
        }

        //setters
        double Cylinder::set_rad(double radpar)
        {
            radius=radpar;
        }

        double Cylinder::set_hgt(double hgtpar)
        {
            height=hgtpar;
        }

        double Cylinder::volume()
        {
            return PI*radius*radius*height;
        }