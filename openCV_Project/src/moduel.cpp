#include "module.h"
 
int process(Mat img_input, Mat& img_result) 
{
   cvtColor(img_input, img_result, CV_RGBA2GRAY);
   
        return (0);
}