#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char **argv)
{
	cv::namedWindow("Exampe2_11", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Log_Polar", cv::WINDOW_AUTOSIZE);

	cv::VideoCapture capture(argv[1]);

	double fps = capture.get(cv::CAP_PROP_FPS);
	cv::Size size(
		(int)capture.get(cv::CAP_PROP_FRAME_WIDTH), 
		(int)capture.get(cv::CAP_PROP_FRAME_HEIGHT)
		);

	cv::VideoWriter writer;
	writer.open(argv[2], CV_FOURCC('M','J','P','G'), fps, size);

	cv::Mat logpolar_frame, bgr_frame;
	for(;;)
	{
		capture >> bgr_frame;
		if(bgr_frame.empty()) break;

		cv::imshow("Exampe2_11", bgr_frame);

		cv::logPolar(
			bgr_frame,//input frame
			logpolar_frame,//output frame
			cv::Point2f(
				bgr_frame.cols/2,//x
				bgr_frame.rows/2//y
				),
			40,//size
			cv::WARP_FILL_OUTLIERS//fill blank with 0
			);

		cv::imshow("Log_Polar", logpolar_frame);
		writer << logpolar_frame;

		char c = cv::waitKey(10);
		if(c == 27) break;
	}

	capture.release();
}