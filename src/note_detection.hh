#ifndef NOTE_DETECTION_HH_
# define NOTE_DETECTION_HH_

# include "symbol_detection.hh"

enum Pitch
{
  PITCH_A,
  PITCH_B,
  PITCH_C,
  PITCH_D,
  PITCH_E,
  PITCH_F,
  PITCH_G
};

enum Alter
{
  ALTER_BECAR,
  ALTER_BEMOL,
  ALTER_DIESE
};

enum Duration
{
  DURATION_CROCHE,
  DURATION_NOIRE,
  DURATION_BLANCHE,
  DURATION_RONDE
};

struct Note : public Symbol
{
  Duration duration;
  int octave; // from 0 (grave) to X (aigue)
  Pitch note; // A,B,C,D,E,F,G
  Alter alter; //bemol, becar, diese
};

void detect_notes(cv::Mat& img,
                  std::vector<Line>& lines,
                  std::vector<cv::Rect>& pistes,
                  std::vector<Symbol>& symbols,
                  std::vector<Note>& notes);
#endif // !NOTE_DETECTION_HH_
