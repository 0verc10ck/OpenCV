#include "module.h" 
  
int main(int, char**)  
{  
    //웹캡으로 부터 데이터 읽어오기 위해 준비  
    VideoCapture cap(0);  


    if (!cap.isOpened())  
    {  
        printf("첫번째 카메라를 열수 없습니다. \n");  
    }  
  
  
    Mat frame;  
    namedWindow("camera", 1);  
    
  
    for (;;)  
    {  
  
        //웹캡으로부터 한 프레임을 읽어옴  
        cap >> frame;  
         
        Mat img_result;
        process( frame, img_result );
  
        imshow("camera", img_result);  
  
        if (waitKey(20) >= 0) break;  
    }  
  
  
    return 0;  
}