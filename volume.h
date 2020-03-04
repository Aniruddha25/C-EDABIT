/*
 * volume.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#ifndef VOLUME_H_
#define VOLUME_H_
class Cylinder{
private:
	int radius;
	int height;
public:

Cylinder();
Cylinder(double radius, double height);
void getVolume();
void printVolume();


};






#endif /* VOLUME_H_ */
