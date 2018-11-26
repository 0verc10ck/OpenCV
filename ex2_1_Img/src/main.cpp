#include <iostream>
#include <opencv2/highgui/highgui.hpp>


int main(int argc, const char** argv)
{
	cv::Mat img = cv::imread(argv[1], -1);//create Mat class obj img and input data by using imread(filename, )
	if(img.empty()){ 
		std::cout << "img load fail!\n" << std::endl;
		return -1;}
	cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example1", img);
	cv::waitKey(0);
	cv::destroyWindow("Example1");	    
    return 0;
}
