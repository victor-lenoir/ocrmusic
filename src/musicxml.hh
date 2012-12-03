#ifndef MUSICXML_HH_
# define MUSICXML_HH_

# include <string>
# include <vector>
# include "note_detection.hh"
# include <opencv/cv.h>
# include <opencv/highgui.h>

void musicxml(std::string filename,
	      std::vector<Note>& notes,
	      std::vector<cv::Rect>& pistes);

#endif // !MUSICXML_HH_
