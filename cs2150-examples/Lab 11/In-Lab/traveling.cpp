//Robert Alexander, RMA3MZ, traveling.cpp
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

#include "middleearth.h"
/**
 *\fn computeDistance (MiddleEarth &me, string start, vector<string> dests)
 *
 *\brief computes the distance between the entire cycle of cities in the 
 *provided vector
 *
 *\param me the middle earth world to be used
 *\param start the starting city
 *\param dests the vector holding all of the cities to be used
 *
 *\return float distance between all of the cities
 *
 */
float computeDistance (MiddleEarth &me, string start, vector<string> dests);

/**
 *\fn printRoute(string start, vector<string> dests)
 *
 *\brief prints the cycle (route) of cities
 *
 *\param start the starting city
 *\param dests the vector holding the destinations
 *
 */
void printRoute (string start, vector<string> dests);

int main (int argc, char **argv) {
  // check the number of parameters
  if ( argc != 6 ) {
    cout << "Usage: " << argv[0] << " <world_height> <world_width> "
	 << "<num_cities> <random_seed> <cities_to_visit>" << endl;
    exit(0);
  }
  // we'll assume the parameters are all well-formed
  int width, height, num_cities, rand_seed, cities_to_visit;
  sscanf (argv[1], "%d", &width);
  sscanf (argv[2], "%d", &height);
  sscanf (argv[3], "%d", &num_cities);
  sscanf (argv[4], "%d", &rand_seed);
  sscanf (argv[5], "%d", &cities_to_visit);

  // Create the world, and select your itinerary
  MiddleEarth me(width, height, num_cities, rand_seed);
  vector<string> dests = me.getItinerary(cities_to_visit);
  string first=dests[0];
  vector<string> finalIt=dests;

  float smallestDist=computeDistance(me, first, dests);
  float tempDist=0.0;

  /*for(int i=0;i<dests.size();i++){
    cout<<dests[i]<<" ";
    }*/
  
  //cout<<endl;

  while(next_permutation(dests.begin()+1,dests.end())){
    tempDist=computeDistance(me, first, dests);
    if(tempDist<smallestDist){
      smallestDist=tempDist;
      finalIt=dests;
    }
  }

  printRoute(finalIt[0],finalIt);
  cout<<endl;
  cout<<"distance is "<<smallestDist<<endl;

  return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parmater, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
  float distance=0.0;
  string tempCity=start;
  string tempCity2=dests[dests.size()-1];
  for(int i=0;i<dests.size();i++){
    distance+=me.getDistance(tempCity, dests[i]);
    tempCity=dests[i];//tempcity++
  }
  //  for(int j=dests.size()-1;j>=1;j--){
  //  distance+=me.getDistance(tempCity2, dests[j]);
  //   tempCity2=dests[j];//tempcity--
    // }
  distance+=me.getDistance(dests[0],tempCity2);
  return distance;
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  The output should be of the form:
// Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor
void printRoute (string start, vector<string> dests) {
  for(int i=0;i<dests.size();i++){
    cout<<dests[i]<<" -> ";
  }
  cout<<start;
}
