// citire_afisare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc, char ** argv)
{
	std::cout << "SVA Laborator 01: Incarcarea imaginilor in mediul OpenCV" << std::endl;

	// Obiectul imagine
	cv::Mat imagine_in = cv::imread("img1.jpg");

	// Ve r i f i c a r e a i n c a r c a r i i c o r e c t e a ima g i n i i
	if (!imagine_in.data)
	{
		std::cout << "Imaginea nu a putut fi incarcata" << std::endl;
		return -1;
	}

	//Creaza o fereastra cu numele "Imagine intrare"
	cv::namedWindow("Imagine intrare");
	//Afiseaza imaginea citita
	cv::imshow("Imagine intrare", imagine_in);
	// Asteapta 10000 ms
	cv::waitKey(10000);

	return 0;
}