class Cylinder{
    private :

        double radius=10;
        double height=10;

    public :

        Cylinder() = default;
        Cylinder(double rad,double hgt);

        //getters
        double get_rad();
        double get_hgt();

        //setters
        double set_rad(double radpar);
        double set_hgt(double hgtpar);
 
        double volume();
};