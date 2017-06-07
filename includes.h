#ifndef INCLUDES_H
#define INCLUDES_H

#define N_TECLAS 52

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
 
#include <string>
#include <iostream>
#include <ctime>
#include <cmath>

#include "lista.h"
#include "projetil.h"
#include "player.h"

using namespace std;

enum teclas{A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
	K0, K1, K2, K3, K4, K5, K6, K7, K8, K9, ESC, TAB, CAPSLOCK, LSHIFT, RSHIFT, ALT, ALTGR, LCTRL, RCTRL, SPACE, ENTER, BACKSPACE, 
	UP, DOWN, LEFT, RIGHT};
	
enum classes{guerreiro, mago, orc, elfo};

enum estados{vivo, morto};

bool verificaColisao(double x1, double y1, double w1, double h1, double x2, double y2, double w2, double h2);

#endif
