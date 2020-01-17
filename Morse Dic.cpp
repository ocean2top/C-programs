#include <iostream>
#include <map>
using namespace std;

string dictionary(char cha)
{
  string text(1, cha);
  map<string, string> letter;
  
  letter.insert(make_pair("A" ,".-"));
  letter.insert(make_pair("B" ,"-..."));
  letter.insert(make_pair("C" ,"-.-."));
  letter.insert(make_pair("D" ,"-.."));
  letter.insert(make_pair("E" ,"."));
  letter.insert(make_pair("F" ,"..-."));
  letter.insert(make_pair("G" ,"--."));
  letter.insert(make_pair("H" ,"...."));
  letter.insert(make_pair("I" ,".."));
  letter.insert(make_pair("J" ,".---"));
  letter.insert(make_pair("K" ,"-.-"));
  letter.insert(make_pair("L" ,".-.."));
  letter.insert(make_pair("M" ,"--"));
  letter.insert(make_pair("N" ,"-."));
  letter.insert(make_pair("O" ,"---"));
  letter.insert(make_pair("P" ,".--."));
  letter.insert(make_pair("Q" ,"--.-"));
  letter.insert(make_pair("R" ,".-."));
  letter.insert(make_pair("S" ,"..."));
  letter.insert(make_pair("T" ,"-"));
  letter.insert(make_pair("U" ,"..-"));
  letter.insert(make_pair("V" ,"...-"));
  letter.insert(make_pair("W" ,".--"));
  letter.insert(make_pair("X ","-..-"));
  letter.insert(make_pair("Y" ,"-.--"));
  letter.insert(make_pair("Z" ,"--.."));
  
  letter.insert(make_pair("a" ,".-"));
  letter.insert(make_pair("b" ,"-..."));
  letter.insert(make_pair("c" ,"-.-."));
  letter.insert(make_pair("d" ,"-.."));
  letter.insert(make_pair("e" ,"."));
  letter.insert(make_pair("f" ,"..-."));
  letter.insert(make_pair("g" ,"--."));
  letter.insert(make_pair("h" ,"...."));
  letter.insert(make_pair("i" ,".."));
  letter.insert(make_pair("j" ,".---"));
  letter.insert(make_pair("k" ,"-.-"));
  letter.insert(make_pair("l" ,".-.."));
  letter.insert(make_pair("m" ,"--"));
  letter.insert(make_pair("n" ,"-."));
  letter.insert(make_pair("o" ,"---"));
  letter.insert(make_pair("p" ,".--."));
  letter.insert(make_pair("q" ,"--.-"));
  letter.insert(make_pair("r" ,".-."));
  letter.insert(make_pair("s" ,"..."));
  letter.insert(make_pair("t" ,"-"));
  letter.insert(make_pair("u" ,"..-"));
  letter.insert(make_pair("v" ,"...-"));
  letter.insert(make_pair("w" ,".--"));
  letter.insert(make_pair("x ","-..-"));
  letter.insert(make_pair("y" ,"-.--"));
  letter.insert(make_pair("z" ,"--.."));

  letter.insert(make_pair("1" ,".----"));
  letter.insert(make_pair("2" ,"..---"));
  letter.insert(make_pair("3" ,"...--"));
  letter.insert(make_pair("4" ,"....-"));
  letter.insert(make_pair("5" ,"....."));
  letter.insert(make_pair("6" ,"-...."));
  letter.insert(make_pair("7" ,"--..."));
  letter.insert(make_pair("8" ,"---.."));
  letter.insert(make_pair("9" ,"----."));
  letter.insert(make_pair("0" ,"-----"));
  letter.insert(make_pair(".-" ,"A"));
  letter.insert(make_pair("-..." ,"B"));
  letter.insert(make_pair("-.-." ,"C"));
  letter.insert(make_pair("-.." ,"D"));
  letter.insert(make_pair("." ,"E"));
  letter.insert(make_pair("..-." ,"F"));
  letter.insert(make_pair("--." ,"G"));
  letter.insert(make_pair("...." ,"H"));
  letter.insert(make_pair(".." ,"I"));
  letter.insert(make_pair(".---" ,"J"));
  letter.insert(make_pair("-.-" ,"K"));
  letter.insert(make_pair(".-.." ,"L"));
  letter.insert(make_pair("--" ,"M"));
  letter.insert(make_pair("-." ,"N"));
  letter.insert(make_pair("---" ,"O"));
  letter.insert(make_pair(".--." ,"P"));
  letter.insert(make_pair("--.-" ,"Q"));
  letter.insert(make_pair(".-." ,"R"));
  letter.insert(make_pair("..." ,"S"));
  letter.insert(make_pair("-" ,"T"));
  letter.insert(make_pair(".. -" ,"U"));
  letter.insert(make_pair("...-" ,"V"));
  letter.insert(make_pair(".--" ,"W"));
  letter.insert(make_pair("-..-","X"));
  letter.insert(make_pair("-.--" ,"Y"));
  letter.insert(make_pair("--.." ,"Z"));
  letter.insert(make_pair(".----" ,"1"));
  letter.insert(make_pair("..---" ,"2"));
  letter.insert(make_pair("...--" ,"3"));
  letter.insert(make_pair("....-" ,"4"));
  letter.insert(make_pair("....." ,"5"));
  letter.insert(make_pair("-...." ,"6"));
  letter.insert(make_pair("--..." ,"7"));
  letter.insert(make_pair("---.." ,"8"));
  letter.insert(make_pair("----." ,"9"));
  letter.insert(make_pair("-----" ,"0"));
  letter.insert(make_pair(" " ,"|"));
  letter.insert(make_pair("|" ," "));

  /*char send[temp.size() + 1];
	strcpy(send, temp.c_str());
  char* address = send;*/
  string eachone = letter[text];
  return eachone;
}