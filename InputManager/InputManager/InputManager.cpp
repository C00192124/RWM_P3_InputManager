#pragma once
#include "InputManager.h"

void InputHandler::InputCheck()
{
	while (SDL_PollEvent(m_e) != 0)
	{
		switch (m_e->type)
		{
		case SDL_KEYDOWN:
		{
			switch (m_e->key.keysym.sym)
			{
			case SDLK_BACKSPACE:
				m_eventlisten->BACKSPACE = true;
				cout << "Backspace Pressed" << endl;
				break;
			case SDLK_TAB:
				m_eventlisten->TAB = true;
				cout << "Tab Pressed" << endl;
				break;
			case SDLK_RETURN:
				m_eventlisten->RETURN = true;
				cout << "Return Pressed" << endl;
				break;
			case SDLK_ESCAPE:
				m_eventlisten->ESCAPE = true;
				cout << "Escape Pressed" << endl;
				break;
			case SDLK_SPACE:
				m_eventlisten->SPACE = true;
				cout << "Space Pressed" << endl;
				break;
			case SDLK_HASH:
				m_eventlisten->HASH = true;
				cout << "Hash Pressed" << endl;
				break;
			case SDLK_ASTERISK:
				m_eventlisten->STAR = true;
				cout << "Asterisk Pressed" << endl;
				break;
			case SDLK_COMMA:
				m_eventlisten->COMMA = true;
				cout << "Comma Pressed" << endl;
				break;
			case SDLK_PERIOD:
				m_eventlisten->PERIOD = true;
				cout << "Period Pressed" << endl;
				break;
			case SDLK_SLASH:
				m_eventlisten->FORWARDSLASH = true;
				cout << "Forward Slash Pressed" << endl;
				break;
			case SDLK_0:
				m_eventlisten->ZERO = true;
				cout << "0 Pressed" << endl;
				break;
			case SDLK_1:
				m_eventlisten->ONE = true;
				cout << "1 Pressed" << endl;
				break;
			case SDLK_2:
				m_eventlisten->TWO = true;
				cout << "2 Pressed" << endl;
				break;
			case SDLK_3:
				m_eventlisten->THREE = true;
				cout << "3 Pressed" << endl;
				break;
			case SDLK_4:
				m_eventlisten->FOUR = true;
				cout << "4 Pressed" << endl;
				break;
			case SDLK_5:
				m_eventlisten->FIVE = true;
				cout << "5 Pressed" << endl;
				break;
			case SDLK_6:
				m_eventlisten->SIX = true;
				cout << "6 Pressed" << endl;
				break;
			case SDLK_7:
				m_eventlisten->SEVEN = true;
				cout << "7 Pressed" << endl;
				break;
			case SDLK_8:
				m_eventlisten->EIGHT = true;
				cout << "8 Pressed" << endl;
				break;
			case SDLK_9:
				m_eventlisten->NINE = true;
				cout << "9 Pressed" << endl;
				break;
			case SDLK_SEMICOLON:
				m_eventlisten->COLON = true;
				cout << "Colon Pressed" << endl;
				break;
			case SDLK_EQUALS:
				m_eventlisten->PLUS = true;
				cout << "Equals Pressed" << endl;
				break;
			case SDLK_BACKSLASH:
				m_eventlisten->BACKSLASH = true;
				cout << "Backslash Pressed" << endl;
				break;
			case SDLK_LEFTBRACKET:
				m_eventlisten->LEFTBRACKET = true;
				cout << "Left Bracket Pressed" << endl;
				break;
			case SDLK_RIGHTBRACKET:
				m_eventlisten->RIGHTBRACKET = true;
				cout << "Right Bracket Pressed" << endl;
				break;
			case SDLK_a:
				m_eventlisten->A = true;
				cout << "A Pressed" << endl;
				break;
			case SDLK_b:
				m_eventlisten->B = true;
				cout << "B Pressed" << endl;
				break;
			case SDLK_c:
				m_eventlisten->C = true;
				cout << "C Pressed" << endl;
				break;
			case SDLK_d:
				m_eventlisten->D = true;
				cout << "D Pressed" << endl;
				break;
			case SDLK_e:
				m_eventlisten->E = true;
				cout << "E Pressed" << endl;
				break;
			case SDLK_f:
				m_eventlisten->F = true;
				cout << "F Pressed" << endl;
				break;
			case SDLK_g:
				m_eventlisten->G = true;
				cout << "G Pressed" << endl;
				break;
			case SDLK_h:
				m_eventlisten->H = true;
				cout << "H Pressed" << endl;
				break;
			case SDLK_i:
				m_eventlisten->I = true;
				cout << "I Pressed" << endl;
				break;
			case SDLK_j:
				m_eventlisten->J = true;
				cout << "J Pressed" << endl;
				break;
			case SDLK_k:
				m_eventlisten->K = true;
				cout << "K Pressed" << endl;
				break;
			case SDLK_l:
				m_eventlisten->L = true;
				cout << "L Pressed" << endl;
				break;
			case SDLK_m:
				m_eventlisten->M = true;
				cout << "M Pressed" << endl;
				break;
			case SDLK_n:
				m_eventlisten->N = true;
				cout << "N Pressed" << endl;
				break;
			case SDLK_o:
				m_eventlisten->O = true;
				cout << "O Pressed" << endl;
				break;
			case SDLK_p:
				m_eventlisten->P = true;
				cout << "P Pressed" << endl;
				break;
			case SDLK_q:
				m_eventlisten->Q = true;
				cout << "Q Pressed" << endl;
				break;
			case SDLK_r:
				m_eventlisten->R = true;
				cout << "R Pressed" << endl;
				break;
			case SDLK_s:
				m_eventlisten->S = true;
				cout << "S Pressed" << endl;
				break;
			case SDLK_t:
				m_eventlisten->T = true;
				cout << "T Pressed" << endl;
				break;
			case SDLK_u:
				m_eventlisten->U = true;
				cout << "U Pressed" << endl;
				break;
			case SDLK_v:
				m_eventlisten->V = true;
				cout << "V Pressed" << endl;
				break;
			case SDLK_w:
				m_eventlisten->W = true;
				cout << "W Pressed" << endl;
				break;
			case SDLK_x:
				m_eventlisten->X = true;
				cout << "X Pressed" << endl;
				break;
			case SDLK_y:
				m_eventlisten->Y = true;
				cout << "Y Pressed" << endl;
				break;
			case SDLK_z:
				m_eventlisten->Z = true;
				cout << "Z Pressed" << endl;
				break;
			case SDLK_DELETE:
				m_eventlisten->DELETE = true;
				cout << "Delete Pressed" << endl;
				break;
			case SDLK_KP_0:
				m_eventlisten->NUMZERO = true;
				cout << "Num Zero Pressed" << endl;
				break;
			case SDLK_KP_1:
				m_eventlisten->NUMONE = true;
				cout << "Num One Pressed" << endl;
				break;
			case SDLK_KP_2:
				m_eventlisten->NUMTWO = true;
				cout << "Num Two Pressed" << endl;
				break;
			case SDLK_KP_3:
				m_eventlisten->NUMTHREE = true;
				cout << "Num Three Pressed" << endl;
				break;
			case SDLK_KP_4:
				m_eventlisten->NUMFOUR = true;
				cout << "Num Four Pressed" << endl;
				break;
			case SDLK_KP_5:
				m_eventlisten->NUMFIVE = true;
				cout << "Num Five Pressed" << endl;
				break;
			case SDLK_KP_6:
				m_eventlisten->NUMSIX = true;
				cout << "Num Six Pressed" << endl;
				break;
			case SDLK_KP_7:
				m_eventlisten->NUMSEVEN = true;
				cout << "Num Seven Pressed" << endl;
				break;
			case SDLK_KP_8:
				m_eventlisten->NUMEIGHT = true;
				cout << "Num Eight Pressed" << endl;
				break;
			case SDLK_KP_9:
				m_eventlisten->NUMNINE = true;
				cout << "Num Nine Pressed" << endl;
				break;
			case SDLK_KP_MULTIPLY:
				m_eventlisten->STAR = true;
				cout << "Asterisk Pressed" << endl;
				break;
			case SDLK_KP_PLUS:
				m_eventlisten->PLUS = true;
				cout << "Plus Pressed" << endl;
				break;
			case SDLK_UP:
				m_eventlisten->UP = true;
				cout << "Up Pressed" << endl;
				break;
			case SDLK_DOWN:
				m_eventlisten->DOWN = true;
				cout << "Down Pressed" << endl;
				break;
			case SDLK_LEFT:
				m_eventlisten->LEFT = true;
				cout << "Left Pressed" << endl;
				break;
			case SDLK_RIGHT:
				m_eventlisten->RIGHT = true;
				cout << "Right Pressed" << endl;
				break;
			case SDLK_INSERT:
				m_eventlisten->INSERT = true;
				cout << "Insert Pressed" << endl;
				break;
			case SDLK_HOME:
				m_eventlisten->HOME = true;
				cout << "Home Pressed" << endl;
				break;
			case SDLK_END:
				m_eventlisten->END = true;
				cout << "End Pressed" << endl;
				break;
			case SDLK_PAGEUP:
				m_eventlisten->PAGEUP = true;
				cout << "Page Up Pressed" << endl;
				break;
			case SDLK_PAGEDOWN:
				m_eventlisten->PAGEDOWN = true;
				cout << "Page Down Pressed" << endl;
				break;
			case SDLK_F1:
				m_eventlisten->F1 = true;
				cout << "F1 Pressed" << endl;
				break;
			case SDLK_F2:
				m_eventlisten->F2 = true;
				cout << "F2 Pressed" << endl;
				break;
			case SDLK_F3:
				m_eventlisten->F3 = true;
				cout << "F3 Pressed" << endl;
				break;
			case SDLK_F4:
				m_eventlisten->F4 = true;
				cout << "F4 Pressed" << endl;
				break;
			case SDLK_F5:
				m_eventlisten->F5 = true;
				cout << "F5 Pressed" << endl;
				break;
			case SDLK_F6:
				m_eventlisten->F6 = true;
				cout << "F6 Pressed" << endl;
				break;
			case SDLK_F7:
				m_eventlisten->F7 = true;
				cout << "F7 Pressed" << endl;
				break;
			case SDLK_F8:
				m_eventlisten->F8 = true;
				cout << "F8 Pressed" << endl;
				break;
			case SDLK_F9:
				m_eventlisten->F9 = true;
				cout << "F9 Pressed" << endl;
				break;
			case SDLK_F10:
				m_eventlisten->F10 = true;
				cout << "F10 Pressed" << endl;
				break;
			case SDLK_F11:
				m_eventlisten->F11 = true;
				cout << "F11 Pressed" << endl;
				break;
			case SDLK_F12:
				m_eventlisten->F12 = true;
				cout << "F12 Pressed" << endl;
				break;
			case SDLK_CAPSLOCK:
				m_eventlisten->CAPS = true;
				cout << "Caps Pressed" << endl;
				break;
			case SDLK_RSHIFT:
				m_eventlisten->RIGHTSHIFT = true;
				cout << "Right Shift Pressed" << endl;
				break;
			case SDLK_LSHIFT:
				m_eventlisten->LEFTSHIFT = true;
				cout << "F12 Pressed" << endl;
				break;
			case SDLK_RCTRL:
				m_eventlisten->RIGHTCONTROL = true;
				cout << "Right Ctrl Pressed" << endl;
				break;
			case SDLK_LCTRL:
				m_eventlisten->LEFTCONTROL = true;
				cout << "Left Ctrl Pressed" << endl;
				break;
			case SDLK_RALT:
				m_eventlisten->ALTGR = true;
				cout << "AltGr Pressed" << endl;
				break;
			case SDLK_LALT:
				m_eventlisten->ALT = true;
				cout << "Alt Pressed" << endl;
				break;
			default:
				break;
			}
			break;
		}

		////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////

		case SDL_KEYUP:
		{
			switch (m_e->key.keysym.sym)
			{
			case SDLK_BACKSPACE:
				m_eventlisten->BACKSPACE = false;
				cout << "Backspace Released" << endl;
				break;
			case SDLK_TAB:
				m_eventlisten->TAB = false;
				cout << "Tab Released" << endl;
				break;
			case SDLK_RETURN:
				m_eventlisten->RETURN = false;
				cout << "Return Released" << endl;
				break;
			case SDLK_ESCAPE:
				m_eventlisten->ESCAPE = false;
				cout << "Escape Released" << endl;
				break;
			case SDLK_SPACE:
				m_eventlisten->SPACE = false;
				cout << "Space Released" << endl;
				break;
			case SDLK_HASH:
				m_eventlisten->HASH = false;
				cout << "Hash Released" << endl;
				break;
			case SDLK_ASTERISK:
				m_eventlisten->STAR = false;
				cout << "Asterisk Released" << endl;
				break;
			case SDLK_COMMA:
				m_eventlisten->COMMA = false;
				cout << "Comma Released" << endl;
				break;
			case SDLK_PERIOD:
				m_eventlisten->PERIOD = false;
				cout << "Period Released" << endl;
				break;
			case SDLK_SLASH:
				m_eventlisten->FORWARDSLASH = false;
				cout << "Forward Slash Released" << endl;
				break;
			case SDLK_0:
				m_eventlisten->ZERO = false;
				cout << "0 Released" << endl;
				break;
			case SDLK_1:
				m_eventlisten->ONE = false;
				cout << "1 Released" << endl;
				break;
			case SDLK_2:
				m_eventlisten->TWO = false;
				cout << "2 Released" << endl;
				break;
			case SDLK_3:
				m_eventlisten->THREE = false;
				cout << "3 Released" << endl;
				break;
			case SDLK_4:
				m_eventlisten->FOUR = false;
				cout << "4 Released" << endl;
				break;
			case SDLK_5:
				m_eventlisten->FIVE = false;
				cout << "5 Released" << endl;
				break;
			case SDLK_6:
				m_eventlisten->SIX = false;
				cout << "6 Released" << endl;
				break;
			case SDLK_7:
				m_eventlisten->SEVEN = false;
				cout << "7 Released" << endl;
				break;
			case SDLK_8:
				m_eventlisten->EIGHT = false;
				cout << "8 Released" << endl;
				break;
			case SDLK_9:
				m_eventlisten->NINE = false;
				cout << "9 Released" << endl;
				break;
			case SDLK_SEMICOLON:
				m_eventlisten->COLON = false;
				cout << "Colon Released" << endl;
				break;
			case SDLK_EQUALS:
				m_eventlisten->PLUS = false;
				cout << "Equals Released" << endl;
				break;
			case SDLK_BACKSLASH:
				m_eventlisten->BACKSLASH = false;
				cout << "Backslash Released" << endl;
				break;
			case SDLK_LEFTBRACKET:
				m_eventlisten->LEFTBRACKET = false;
				cout << "Left Bracket Released" << endl;
				break;
			case SDLK_RIGHTBRACKET:
				m_eventlisten->RIGHTBRACKET = false;
				cout << "Right Bracket Released" << endl;
				break;
			case SDLK_a:
				m_eventlisten->A = false;
				cout << "A Released" << endl;
				break;
			case SDLK_b:
				m_eventlisten->B = false;
				cout << "B Released" << endl;
				break;
			case SDLK_c:
				m_eventlisten->C = false;
				cout << "C Released" << endl;
				break;
			case SDLK_d:
				m_eventlisten->D = false;
				cout << "D Released" << endl;
				break;
			case SDLK_e:
				m_eventlisten->E = false;
				cout << "E Released" << endl;
				break;
			case SDLK_f:
				m_eventlisten->F = false;
				cout << "F Released" << endl;
				break;
			case SDLK_g:
				m_eventlisten->G = false;
				cout << "G Released" << endl;
				break;
			case SDLK_h:
				m_eventlisten->H = false;
				cout << "H Released" << endl;
				break;
			case SDLK_i:
				m_eventlisten->I = false;
				cout << "I Released" << endl;
				break;
			case SDLK_j:
				m_eventlisten->J = false;
				cout << "J Released" << endl;
				break;
			case SDLK_k:
				m_eventlisten->K = false;
				cout << "K Released" << endl;
				break;
			case SDLK_l:
				m_eventlisten->L = false;
				cout << "L Released" << endl;
				break;
			case SDLK_m:
				m_eventlisten->M = false;
				cout << "M Released" << endl;
				break;
			case SDLK_n:
				m_eventlisten->N = false;
				cout << "N Released" << endl;
				break;
			case SDLK_o:
				m_eventlisten->O = false;
				cout << "O Released" << endl;
				break;
			case SDLK_p:
				m_eventlisten->P = false;
				cout << "P Released" << endl;
				break;
			case SDLK_q:
				m_eventlisten->Q = false;
				cout << "Q Released" << endl;
				break;
			case SDLK_r:
				m_eventlisten->R = false;
				cout << "R Released" << endl;
				break;
			case SDLK_s:
				m_eventlisten->S = false;
				cout << "S Released" << endl;
				break;
			case SDLK_t:
				m_eventlisten->T = false;
				cout << "T Released" << endl;
				break;
			case SDLK_u:
				m_eventlisten->U = false;
				cout << "U Released" << endl;
				break;
			case SDLK_v:
				m_eventlisten->V = false;
				cout << "V Released" << endl;
				break;
			case SDLK_w:
				m_eventlisten->W = false;
				cout << "W Released" << endl;
				break;
			case SDLK_x:
				m_eventlisten->X = false;
				cout << "X Released" << endl;
				break;
			case SDLK_y:
				m_eventlisten->Y = false;
				cout << "Y Released" << endl;
				break;
			case SDLK_z:
				m_eventlisten->Z = false;
				cout << "Z Released" << endl;
				break;
			case SDLK_DELETE:
				m_eventlisten->DELETE = false;
				cout << "Delete Released" << endl;
				break;
			case SDLK_KP_0:
				m_eventlisten->NUMZERO = false;
				cout << "Num Zero Released" << endl;
				break;
			case SDLK_KP_1:
				m_eventlisten->NUMONE = false;
				cout << "Num One Released" << endl;
				break;
			case SDLK_KP_2:
				m_eventlisten->NUMTWO = false;
				cout << "Num Two Released" << endl;
				break;
			case SDLK_KP_3:
				m_eventlisten->NUMTHREE = false;
				cout << "Num Three Released" << endl;
				break;
			case SDLK_KP_4:
				m_eventlisten->NUMFOUR = false;
				cout << "Num Four Released" << endl;
				break;
			case SDLK_KP_5:
				m_eventlisten->NUMFIVE = false;
				cout << "Num Five Released" << endl;
				break;
			case SDLK_KP_6:
				m_eventlisten->NUMSIX = false;
				cout << "Num Six Released" << endl;
				break;
			case SDLK_KP_7:
				m_eventlisten->NUMSEVEN = false;
				cout << "Num Seven Released" << endl;
				break;
			case SDLK_KP_8:
				m_eventlisten->NUMEIGHT = false;
				cout << "Num Eight Released" << endl;
				break;
			case SDLK_KP_9:
				m_eventlisten->NUMNINE = false;
				cout << "Num Nine Released" << endl;
				break;
			case SDLK_KP_MULTIPLY:
				m_eventlisten->STAR = false;
				cout << "Asterisk Released" << endl;
				break;
			case SDLK_KP_PLUS:
				m_eventlisten->PLUS = false;
				cout << "Plus Released" << endl;
				break;
			case SDLK_UP:
				m_eventlisten->UP = false;
				cout << "Up Released" << endl;
				break;
			case SDLK_DOWN:
				m_eventlisten->DOWN = false;
				cout << "Down Released" << endl;
				break;
			case SDLK_LEFT:
				m_eventlisten->LEFT = false;
				cout << "Left Released" << endl;
				break;
			case SDLK_RIGHT:
				m_eventlisten->RIGHT = false;
				cout << "Right Released" << endl;
				break;
			case SDLK_INSERT:
				m_eventlisten->INSERT = false;
				cout << "Insert Released" << endl;
				break;
			case SDLK_HOME:
				m_eventlisten->HOME = false;
				cout << "Home Released" << endl;
				break;
			case SDLK_END:
				m_eventlisten->END = false;
				cout << "End Released" << endl;
				break;
			case SDLK_PAGEUP:
				m_eventlisten->PAGEUP = false;
				cout << "Page Up Released" << endl;
				break;
			case SDLK_PAGEDOWN:
				m_eventlisten->PAGEDOWN = false;
				cout << "Page Down Released" << endl;
				break;
			case SDLK_F1:
				m_eventlisten->F1 = false;
				cout << "F1 Released" << endl;
				break;
			case SDLK_F2:
				m_eventlisten->F2 = false;
				cout << "F2 Released" << endl;
				break;
			case SDLK_F3:
				m_eventlisten->F3 = false;
				cout << "F3 Released" << endl;
				break;
			case SDLK_F4:
				m_eventlisten->F4 = false;
				cout << "F4 Released" << endl;
				break;
			case SDLK_F5:
				m_eventlisten->F5 = false;
				cout << "F5 Released" << endl;
				break;
			case SDLK_F6:
				m_eventlisten->F6 = false;
				cout << "F6 Released" << endl;
				break;
			case SDLK_F7:
				m_eventlisten->F7 = false;
				cout << "F7 Released" << endl;
				break;
			case SDLK_F8:
				m_eventlisten->F8 = false;
				cout << "F8 Released" << endl;
				break;
			case SDLK_F9:
				m_eventlisten->F9 = false;
				cout << "F9 Released" << endl;
				break;
			case SDLK_F10:
				m_eventlisten->F10 = false;
				cout << "F10 Released" << endl;
				break;
			case SDLK_F11:
				m_eventlisten->F11 = false;
				cout << "F11 Released" << endl;
				break;
			case SDLK_F12:
				m_eventlisten->F12 = false;
				cout << "F12 Released" << endl;
				break;
			case SDLK_CAPSLOCK:
				m_eventlisten->CAPS = false;
				cout << "Caps Released" << endl;
				break;
			case SDLK_RSHIFT:
				m_eventlisten->RIGHTSHIFT = false;
				cout << "Right Shift Released" << endl;
				break;
			case SDLK_LSHIFT:
				m_eventlisten->LEFTSHIFT = false;
				cout << "F12 Released" << endl;
				break;
			case SDLK_RCTRL:
				m_eventlisten->RIGHTCONTROL = false;
				cout << "Right Ctrl Released" << endl;
				break;
			case SDLK_LCTRL:
				m_eventlisten->LEFTCONTROL = false;
				cout << "Left Ctrl Released" << endl;
				break;
			case SDLK_RALT:
				m_eventlisten->ALTGR = false;
				cout << "AltGr Released" << endl;
				break;
			case SDLK_LALT:
				m_eventlisten->ALT = false;
				cout << "Alt Released" << endl;
				break;
			default:
				break;
			}
			break;
		}


		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////

		case SDL_MOUSEBUTTONDOWN:
		{
			switch (m_e->button.button)
			{
			case SDL_BUTTON_LEFT:
				m_eventlisten->LEFTMOUSE = true;
				cout << "Left Mouse Pressed" << endl;
				break;
			case SDL_BUTTON_RIGHT:
				m_eventlisten->RIGHTMOUSE = true;
				cout << "Right Mouse Pressed" << endl;
				break;
			case SDL_BUTTON_MIDDLE:
				m_eventlisten->WHEELCLICK = true;
				cout << "Wheel Pressed" << endl;
				break;
			default:
				break;
			}
			break;
		}

		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////

		case SDL_MOUSEBUTTONUP:
		{
			switch (m_e->button.button)
			{
			case SDL_BUTTON_LEFT:
				m_eventlisten->LEFTMOUSE = false;
				cout << "Left Mouse Released" << endl;
				break;
			case SDL_BUTTON_RIGHT:
				m_eventlisten->RIGHTMOUSE = false;
				cout << "Right Mouse Released" << endl;
				break;
			case SDL_BUTTON_MIDDLE:
				m_eventlisten->WHEELCLICK = false;
				cout << "Wheel Released" << endl;
				break;
			default:
				break;
			}
			break;
		}

		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
		
		case SDL_JOYBUTTONDOWN:
		{
			switch (m_e->jbutton.button)
			{
			case SDL_CONTROLLER_BUTTON_A:
				m_eventlisten->CON_A = true;
				cout << "Controller A Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_B:
				m_eventlisten->CON_B = true;
				cout << "Controller B Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_X:
				m_eventlisten->CON_X = true;
				cout << "Controller X Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_Y:
				m_eventlisten->CON_Y = true;
				cout << "Controller Y Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_START:
				m_eventlisten->CON_START = true;
				cout << "Controller Start Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_BACK:
				m_eventlisten->CON_BACK = true;
				cout << "Controller Back Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_UP:
				m_eventlisten->CON_UP = true;
				cout << "Controller Up Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
				m_eventlisten->CON_DOWN = true;
				cout << "Controller Down Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
				m_eventlisten->CON_LEFT = true;
				cout << "Controller Left Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
				m_eventlisten->CON_RIGHT = true;
				cout << "Controller Right Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
				m_eventlisten->CON_RIGHTSHOULDER = true;
				cout << "Controller Right Shoulder Pressed" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
				m_eventlisten->CON_LEFTSHOULDER = true;
				cout << "Controller Left Shoulder Pressed" << endl;
				break;
			default:
				break;
			}
			break;
		}

		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////

		case SDL_JOYBUTTONUP:
		{
			switch (m_e->jbutton.button)
			{
			case SDL_CONTROLLER_BUTTON_A:
				m_eventlisten->CON_A = false;
				cout << "Controller A Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_B:
				m_eventlisten->CON_B = false;
				cout << "Controller B Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_X:
				m_eventlisten->CON_X = false;
				cout << "Controller X Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_Y:
				m_eventlisten->CON_Y = false;
				cout << "Controller Y Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_START:
				m_eventlisten->CON_START = false;
				cout << "Controller Start Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_BACK:
				m_eventlisten->CON_BACK = false;
				cout << "Controller Back Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_UP:
				m_eventlisten->CON_UP = false;
				cout << "Controller Up Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
				m_eventlisten->CON_DOWN = false;
				cout << "Controller Down Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
				m_eventlisten->CON_LEFT = false;
				cout << "Controller Left Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
				m_eventlisten->CON_RIGHT = false;
				cout << "Controller Right Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
				m_eventlisten->CON_RIGHTSHOULDER = false;
				cout << "Controller Right Shoulder Released" << endl;
				break;
			case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
				m_eventlisten->CON_LEFTSHOULDER = false;
				cout << "Controller Left Shoulder Released" << endl;
				break;
			default:
				break;
			}
			break;
		}
		}
	}
}

InputHandler::~InputHandler() {}