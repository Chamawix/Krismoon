package ;

import flash.display.BitmapData;
import flash.display.Bitmap;
import openfl.Assets;
import motion.Actuate;
import flash.display.Sprite;
import flash.Vector;
import flash.display.Shape;





class Region {

	public var hexa:Case;



	public function new(colonne:Int, ligne:Int, x:Float, y:Float, color:UInt = 0x222222){
		

	}

	public function voisins(x:Float, y:Float, radius:Int):Map<String, Point>{
		var result= new Map <String,Point> ();

		if(hexa.colonne %2 == 0)
		{
			for (var i=0 ; i<6; i++){
				switch (i) {
					case 0 :
						q= hexa.colonne --;
						r= hexa.ligne;
						if (hexa.colonne<0){
							
						}
					break; 
				} 
			}
		}
		
	}

	public function deleteHexa(){
		graphics.clear();
	}

}