#include "variant.h"

Variant::Variant():totaldistance(0),maxdistance(INT_MIN){
    furtheststopnumbers.resize(vectorsize,0);
    furtheststopnumbers.resize(vectorsize,0);
}
void Variant::addStops(Stops *stop){
    stoplist.push_back(stop);
}

double Variant::getTotalDistance(){
    calcDistance();
    return totaldistance;
}

void Variant::calcDistance(){
    if(stoplist.size()<2)
        totaldistance=0.0;
    /*Below we're calculating the distance between the 2 points using the Euclidean distance b/w (x1,y1) and (x2,y2)
     * As per Euclidean formula, the shortest distance between the 2 points is calculated by
     * d = squareroot of [(x2-x1)^2 + (y2-y1)^2]
     * So, we're iterating through the list and computing the distance b/w the 2 points and adding them to the
     * totaldistance. This would be called from the main function from each and every variant object.
     */
    for(auto it=stoplist.begin(),next_it=std::next(it);next_it != stoplist.end(); ++it,++next_it){
        int x1=(*it)->getCentre().getX();
        int y1=(*it)->getCentre().getY();
        int x2=(*next_it)->getCentre().getX();
        int y2=(*next_it)->getCentre().getY();
        double distance = std::sqrt(std::pow((x2-x1),2)+std::pow((y2-y1),2));
        if(distance>maxdistance){
            maxdistance=distance;
            furtheststopnames[0]=(*it)->getName();
            furtheststopnames[1]=(*next_it)->getName();
            furtheststopnumbers[0]=(*it)->getNumber();
            furtheststopnumbers[1]=(*next_it)->getNumber();
        }
        totaldistance += distance;
    }
}

/*
 * Function to find the midway, this will be called from the object
 * of the variant which has the longest in terms of totaldistance.
 */
void Variant::findmidway(){
    int halfdistance = getTotalDistance()/2;
    std::cout<<"Half distance: "<<halfdistance<<std::endl;
    std::cout<<"Key: "<<getKey()<<std::endl;
    std::cout<<"Name: "<<getName()<<std::endl;
}
