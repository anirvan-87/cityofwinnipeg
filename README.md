# cityofwinnipeg
- The code for the JSON parsing compiles individually on a linux machine but it requires installation of nlohmann-json3-dev package.
- Following is the sample output:
**Stop Key: 10001
Name: Southbound Osborne at Mulvey
Number: 10001
Direction: Southbound
Side: Farside Opposite
Street Key: 2715
Street Name: Osborne Street
Street Type: Street
Cross-Street Key: 4122
Cross-Street Name: Mulvey Avenue
Cross-Street Type: Avenue
Cross-Street Leg: East
UTM Zone: 14U
UTM X: 633687
UTM Y: 5525978
Latitude: 49.87127
Longitude: -97.13952
------------------------------------
Stop Key: 10002
Name: Southbound Osborne at Woodward
Number: 10002
Direction: Southbound
Side: Nearside
Street Key: 2715
Street Name: Osborne Street
Street Type: Street
Cross-Street Key: 3985
Cross-Street Name: Woodward Avenue
Cross-Street Type: Avenue
UTM Zone: 14U
UTM X: 633835
UTM Y: 5525710
Latitude: 49.86883
Longitude: -97.13755
------------------------------------
Stop Key: 10003
Name: Southbound Osborne at Brandon
Number: 10003
Direction: Southbound
Side: Nearside
Street Key: 2715
Street Name: Osborne Street
Street Type: Street
Cross-Street Key: 472
Cross-Street Name: Brandon Avenue
Cross-Street Type: Avenue
UTM Zone: 14U
UTM X: 633892
UTM Y: 5525607
Latitude: 49.86789
Longitude: -97.1368
------------------------------------
It was compiled on Ubuntu, so installed it using the command:
sudo apt update
sudo apt install nlohman-json3-dev

Qt was originally installed on Windows system due to memory shortage on the Linux system.

- The api data extraction required the use of curl package:
sudo apt update
sudo apt install curl

- When compiling the code for extracting data using the api, following command was used:
  g++ -std=c++11 -o webread website_reading.cpp -lcurl
