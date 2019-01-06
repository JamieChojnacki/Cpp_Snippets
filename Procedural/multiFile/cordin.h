#ifndef MULTIFILE_CORDIN_H
#define MULTIFILE_CORDIN_H

struct polar
{
    double distance;     // odległość od początku układu współrzędnych
    double angle;        // odchylenie od osi
};

struct rect
{
    double x;            // odległość od początku układu współrzędnych (w poziomie)
    double y;            // odległość od początku układu współrzędnych (w pionie)
};

// prototypy:
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif //MULTIFILE_CORDIN_H
