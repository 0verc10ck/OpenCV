//include headers
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>

//add namespace
using namespace std;
using namespace cv;

//Function Declare
void detectAndDisplay(Mat frame);
void detectAndDisplay_Grayscaled(Mat frame);
void detectAndDisplay_Binarization(Mat frame);

//global variable
//path of haarcascade calssifier xml files
String face_cascade_name = "/usr/local/share/OpenCV/haarcascades/haarcascade_frontalface_alt.xml";
String eyes_cascade_name = "/usr/local/share/OpenCV/haarcascades/haarcascade_eye_tree_eyeglasses.xml";

//declare classifier
CascadeClassifier face_cascade;
CascadeClassifier eyes_cascade;

//window name
string original_window_name = "Capture - Face detection - original";
string grayscaled_window_name = "Capture - Face detection - grayscaled";
string binarizated_window_name = "Capture - Face detection - binarization";
string grayscaled_window_name2 = "Capture - Face detection - grayscaled";
string binarizated_window_name2 = "Capture - Face detection - binarization";
RNG rng(12345);


int main(int argc, const char** argv)
{
	VideoCapture  capture(-1);
	Mat frame;

	//load cascade classifier
	if (!face_cascade.load(face_cascade_name))
	{ 
		printf("--(!)Error loading\n"); 
		return -1;
	 }

	if (!eyes_cascade.load(eyes_cascade_name))
	{
	printf("--(!)Error loading\n"); 
	return -1; 
	}

	//get video
	if (capture.isOpened())
	{
		while (true)
		{
			capture.read(frame);

			if (!frame.empty())
			{
				detectAndDisplay(frame);
				detectAndDisplay_Grayscaled(frame);
				detectAndDisplay_Binarization(frame);
			}

			else
			{
				printf(" --(!) No captured frame -- Break!"); break;
			}

			int c = waitKey(50);
			if ((char)c == 'c') { break; }
		}
	}
	return 0;
}

void detectAndDisplay(Mat frame)
{
	std::vector<Rect> faces;

	//detect face with cascade
	face_cascade.detectMultiScale(frame, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

	//get center point of face and draw ellipse
	for (size_t i = 0; i < faces.size(); i++)
	{
		Point center(faces[i].x + faces[i].width*0.5, faces[i].y + faces[i].height*0.5);

		ellipse(frame, center, Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);

		//area of face
		Mat faceROI = frame(faces[i]);

		std::vector<Rect> eyes;
		//detect eye with cascade
		eyes_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));
		//get centor of eyes and draw circle
		for (size_t j = 0; j < eyes.size(); j++)
		{
			Point center(faces[i].x + eyes[j].x + eyes[j].width*0.5, faces[i].y + eyes[j].y + eyes[j].height*0.5);

			int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);

			circle(frame, center, radius, Scalar(255, 0, 0), 4, 8, 0);
		}
	}
	//show window
	imshow(original_window_name, frame);
}

void detectAndDisplay_Grayscaled(Mat frame)
{
	std::vector<Rect> faces;
	Mat frame_gray;

	//convert to gray and eualize
	cvtColor(frame, frame_gray, CV_BGR2GRAY);
	equalizeHist(frame_gray, frame_gray);

	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

	for (size_t i = 0; i < faces.size(); i++)
	{
		Point center(faces[i].x + faces[i].width*0.5, faces[i].y + faces[i].height*0.5);

		ellipse(frame_gray, center, Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
		ellipse(frame, center, Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
		Mat faceROI = frame_gray(faces[i]);

		std::vector<Rect> eyes;

		eyes_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

		for (size_t j = 0; j < eyes.size(); j++)
		{
			Point center(faces[i].x + eyes[j].x + eyes[j].width*0.5, faces[i].y + eyes[j].y + eyes[j].height*0.5);

			int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);

			circle(frame_gray, center, radius, Scalar(255, 0, 0), 4, 8, 0);
			circle(frame, center, radius, Scalar(255, 0, 0), 4, 8, 0);
		}
	}
	imshow(grayscaled_window_name2, frame_gray);
	//imshow(grayscaled_window_name, frame);
}

void detectAndDisplay_Binarization(Mat frame)
{
	std::vector<Rect> faces;
	Mat frame_binary;
	Mat frame_gray;

	//convert to gray and eualize
	cvtColor(frame, frame_gray, CV_BGR2GRAY);
	threshold(frame_gray, frame_binary, 127, 255, THRESH_BINARY);

	face_cascade.detectMultiScale(frame_binary, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

	for (size_t i = 0; i < faces.size(); i++)
	{
		Point center(faces[i].x + faces[i].width*0.5, faces[i].y + faces[i].height*0.5);

		ellipse(frame_binary, center, Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
		ellipse(frame, center, Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
		Mat faceROI = frame_binary(faces[i]);

		std::vector<Rect> eyes;

		eyes_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));

		for (size_t j = 0; j < eyes.size(); j++)
		{
			Point center(faces[i].x + eyes[j].x + eyes[j].width*0.5, faces[i].y + eyes[j].y + eyes[j].height*0.5);

			int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);

			circle(frame_binary, center, radius, Scalar(255, 0, 0), 4, 8, 0);
			circle(frame, center, radius, Scalar(255, 0, 0), 4, 8, 0);
		}
	}
	imshow(binarizated_window_name2, frame_binary);
	//imshow(binarizated_window_name, frame);
}