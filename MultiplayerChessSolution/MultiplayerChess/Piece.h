#include <iostream>
#include <map>



/**
* 
*/
class Piece {
	public:

		/**
		*/
		Piece(int color) {
			this->color = color;
			this->captured = false;
		};

		/**
		*/
		int getColor() {
			return color;
		}

		/**
		*/
		void setColor(int color) {
			this->color = color;
		}

		/**
		*/
		bool getCaptured() {
			return captured;
		}

		/**
		*/
		void setCaptured(bool captured ) {
			this->captured = captured;
		}
		
		/**
		*/
		virtual bool checkMovement() {
			//Empty for generic piece
		}

		/**
		*/
		virtual bool move() {
			//Empty for generic piece
		}

	private:
		/**
		*/
		int color;
		
		/**
		*/
		bool captured;
};

class King {

};

