#include "sudoku_TextUi.h"
#include "sudoku_situation.h"

sudoku_TextUi::sudoku_TextUi(void):FSM_UI<sudoku_situation>()
{
}

void sudoku_TextUi::displaySpecificSituation(const sudoku_situation *p_situation)
{
  cout << p_situation->toString() << endl ;
}

string sudoku_TextUi::toString(void)const
{
  return "sudoku_TextUi";
}


FSM_UI_if* createGameOfLifeTextUi(void)
{
  return new sudoku_TextUi();
}

extern "C"
{
  void registerFsmUi(map<string,FSM_UI_creator> *p_factory)
  {
    registerFsmUi("sudoku",createGameOfLifeTextUi,p_factory);
  }
}
