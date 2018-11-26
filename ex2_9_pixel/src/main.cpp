// Example 2-9. Getting and setting pixels in Example 2-8

#include <opencv2/opencv.hpp>

void help(char** argv ) {
	std::cout << "\n"
	<< "\nExample 2-9. Getting and setting pixels in Example 2-8"
    << "\nCall:\n"  
	<< argv[0] <<" <path/image>\n"
	<< "For example:\n"
	<< argv[0] << " ../fruits.jpg\n"
	<< std::endl;
}
	

int main( int argc, char** argv ) {
	
	if (argc != 2) {
		help(argv);
		return 0;
	}


  cv::Mat img_rgb, img_gry, img_cny, img_pyr, img_pyr2;//source, grey, cany, prydown1, prydown2 img obj

  cv::namedWindow( "Example Gray", cv::WINDOW_AUTOSIZE );
  cv::namedWindow( "Example Canny", cv::WINDOW_AUTOSIZE );

  img_rgb = cv::imread( argv[1] );

  cv::cvtColor( img_rgb, img_gry, cv::COLOR_BGR2GRAY);//convert img_rgb to grey image and input at img_gry

  cv::pyrDown( img_gry, img_pyr );//downsizing
  cv::pyrDown( img_pyr, img_pyr2 );//downsizing

  cv::Canny( img_pyr2, img_cny, 10, 100, 3, true );//edge finding

  // ----------------------------------------------------
  // Start new code for example 2-9
  //

  int x = 16, y = 32;//(16,32) element of obj mat
  cv::Vec3b intensity = img_rgb.at< cv::Vec3b >(y, x);//bgr color image cosist of structure like bgr bgr bgr
  //so Vec3b type has b,g,r element

  // ( Note: We could write img_rgb.at< cv::Vec3b >(x,y)[0] )
  //
  uchar blue  = intensity[0];
  uchar green = intensity[1];
  uchar red   = intensity[2];

  std::cout << "At (x,y) = (" << x << ", " << y <<
    "): (blue, green, red) = (" <<
    (unsigned int)  blue <<
    ", " << (unsigned int)green << ", " <<
    (unsigned int)  red << ")" << std::endl;

  std::cout << "Gray pixel there is: " <<
    (unsigned int)  img_gry.at<uchar>(y, x) << std::endl;

  x /= 4; y /= 4;

  std::cout << "Pyramid2 pixel there is: " <<
    (unsigned int)img_pyr2.at<uchar>(y, x) << std::endl;

  img_cny.at<uchar>(x, y) = 128; // Set the Canny pixel there to 128

  //
  // End new code for example 2-9
  // ----------------------------------------------------

  cv::imshow( "Example Gray", img_gry );
  cv::imshow( "Example Canny", img_cny );

  cv::waitKey(0);

}
