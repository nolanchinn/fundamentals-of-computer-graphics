/*
Exercise 1:
Simulate an image acquired from the Bayer mosaic by taking a natural image
(preferably a scanned photo rather than a digital photo where the Bayer mosaic
may already have been applied) and creating a grayscale image composed of
interleaved red/green/blue channels. This simulates the raw output of a digital
camera. Now create a true RGB image from that output and compare with the
original.


Bayer mosaic:
G B G B G
R G R G R
G B G B G
R G R G R
G B G B G
*/
#include <iostream>