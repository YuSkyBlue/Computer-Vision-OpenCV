#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cout << CV_VERSION << endl;

	Mat img = cv::imread("lena.jpg");

	if (img.empty()) {
		cerr << "File Open Failed" << endl;
		return -1;
	}
	return 0;
}