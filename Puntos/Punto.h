#include <array>

#indef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class punto2D 
	{
	public://Declaración de funciones
		punto2D();
			 
			void setPosition (double a, double b); 
			float scalar (float t1, float t2);
			float transfer (float t1, float t2);
			float rotateRespectOrigin(float t1);
			[[no discard]] float getX() const; getY() const;
		
	private: //Declaración de atributos
			float x;
			float y;
	};
#endif //PUNTOS_PUNTO_H