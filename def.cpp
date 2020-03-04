/*
 * def.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
#include "volume.h"

using namespace std;
Cylinder::Cylinder()
{
	this->radius =10;
	this->height = 10;
}
Cylinder::Cylinder(double radius, double height)
{
   this->radius=radius;
   this->height=height;
}
void Cylinder::getVolume()
{
	cout<<"Enter the radius"<<endl;
	cin>>radius;
	cout<<"Enter the height"<<endl;
	cin>>height;
	this->radius=radius;
	this->height=height;

}
void Cylinder:: printVolume()
{
	float vol;
	vol= this->radius * this->radius * this->height * 3.14;
	cout<<"Volume is : "<<vol;




}




