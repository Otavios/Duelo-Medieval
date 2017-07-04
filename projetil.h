#ifndef PROJETIL_H
#define PROJETIL_H

#include "includes.h"

class Projetil{
	private:
		int x, y, largura, altura, v, sentido, tipo;
        static ALLEGRO_BITMAP *img_flecha;
		static ALLEGRO_BITMAP *img_magia;
		static ALLEGRO_BITMAP *img_runaPoder;

	public:
		Projetil();
		Projetil(int x, int y, int largura, int altura, int v, int sentido, int tipo);
		void andar();
		void desenhar();
		bool operator==(Projetil);

		void setX(int x);
		int getX();
		void setY(int y);
		int getY();
		void setV(int v);
		int getV();
		void setLargura(int largura);
		int getLargura();
		void setAltura(int altura);
		int getAltura();
		void setTipo(int tipo);
		int getTipo();
		static void inicializarImagens();

};


#endif
