#pragma once
#include <iostream>
#include <vector>
#include "SDL.h"

using namespace std;

class EventListener
{
public:
	EventListener() {};
	~EventListener() {};

	bool GRAVE = false;
	bool ONE = false;
	bool TWO = false;
	bool THREE = false;
	bool FOUR = false;
	bool FIVE = false;
	bool SIX = false;
	bool SEVEN = false;
	bool EIGHT = false;
	bool NINE = false;
	bool ZERO = false;
	bool MINUS = false;
	bool PLUS = false;
	bool BACKSPACE = false;
	bool TAB = false;
	bool Q = false;
	bool W = false;
	bool E = false;
	bool R = false;
	bool T = false;
	bool Y = false;
	bool U = false;
	bool I = false;
	bool O = false;
	bool P = false;
	bool LEFTBRACKET = false;
	bool RIGHTBRACKET = false;
	bool RETURN = false;
	bool CAPS = false;
	bool A = false;
	bool S = false;
	bool D = false;
	bool F = false;
	bool G = false;
	bool H = false;
	bool J = false;
	bool K = false;
	bool L = false;
	bool COLON = false;
	bool AT = false;
	bool HASH = false;
	bool LEFTSHIFT = false;
	bool BACKSLASH = false;
	bool Z = false;
	bool X = false;
	bool C = false;
	bool V = false;
	bool B = false;
	bool N = false;
	bool M = false;
	bool COMMA = false;
	bool PERIOD = false;
	bool FORWARDSLASH = false;
	bool RIGHTSHIFT = false;
	bool LEFTCONTROL = false;
	bool LEFTFN = false;
	bool ALT = false;
	bool SPACE = false;
	bool ALTGR = false;
	bool RIGHTFN = false;
	bool RIGHTCONTROL = false;
	bool ESCAPE = false;
	bool F1 = false;
	bool F2 = false;
	bool F3 = false;
	bool F4 = false;
	bool F5 = false;
	bool F6 = false;
	bool F7 = false;
	bool F8 = false;
	bool F9 = false;
	bool F10 = false;
	bool F11 = false;
	bool F12 = false;
	bool MUTE = false;
	bool VOLUMEDOWN = false;
	bool VOLUMEUP = false;
	bool INSERT = false;
	bool HOME = false;
	bool PAGEUP = false;
	bool DELETE = false;
	bool END = false;
	bool PAGEDOWN = false;
	bool UP = false;
	bool DOWN = false;
	bool LEFT = false;
	bool RIGHT = false;
	bool NUMLOCK = false;
	bool STAR = false;
	bool NUMONE = false;
	bool NUMTWO = false;
	bool NUMTHREE = false;
	bool NUMFOUR = false;
	bool NUMFIVE = false;
	bool NUMSIX = false;
	bool NUMSEVEN = false;
	bool NUMEIGHT = false;
	bool NUMNINE = false;
	bool NUMZERO = false;
	bool LEFTMOUSE = false;
	bool RIGHTMOUSE = false;
	bool WHEELCLICK = false;
	bool MOUSETHREE = false;
	bool CON_A = false;
	bool CON_B = false;
	bool CON_X = false;
	bool CON_Y = false;
	bool CON_BACK = false;
	bool CON_START = false;
	bool CON_UP = false;
	bool CON_DOWN = false;
	bool CON_LEFT = false;
	bool CON_RIGHT = false;
	bool CON_RIGHTSHOULDER = false;
	bool CON_LEFTSHOULDER = false;



};

class InputHandler
{
public:
	InputHandler(SDL_Event * e, EventListener * ep) { m_e = e; m_eventlisten = ep; };
	~InputHandler();

	void InputCheck();
private:
	SDL_Event * m_e;
	EventListener * m_eventlisten;

};