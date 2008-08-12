#ifndef _SUDOKU_TEXT_UI_H_
#define _SUDOKU_TEXT_UI_H_

#include "FSM_UI.h"
#include "sudoku_situation.h"

class sudoku_TextUi:public FSM_UI<sudoku_situation>
{
 public:
  sudoku_TextUi(void);

  //Methods inherited from interface
  void displaySpecificSituation(const sudoku_situation *p_situation);
  string toString(void)const;
	


 private:
};
#endif
