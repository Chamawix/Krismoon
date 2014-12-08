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
	public var map:Map<String,Point>;



	public function new(){
		
		map= voisins();

	}

	public function voisins():Map<String, Point>{
		var result= new Map <String,Point> ();

		if(hexa.colonne %2 == 0)
		{
			for (var i=0 ; i<6; i++){
				switch (i) {
					case 0 :
							q= hexa.colonne --;
							r= hexa.ligne;
							if (hexa.colonne>0){
							result.add("O",{hexa.ligne,hexa.colonne})
						}
					break; 
					case 1 :
							q= hexa.colonne --;
							r= hexa.ligne --;
							if (hexa.colonne>0 && hexa.ligne >0){
							result.add("NO",{hexa.ligne,hexa.colonne})
						}
					break; 
					case 2 :
							q= hexa.colonne;
							r= hexa.ligne --;
							if (hexa.colonne>0){
							result.add("NE",{hexa.ligne,hexa.colonne})
						}
					break; 
					
					case 3 :
							q= hexa.colonne ++;
							r= hexa.ligne;
							if (hexa.colonne<NUM_COLUMNS){
							result.add("E",{hexa.ligne,hexa.colonne})
						}
					break; 
					
					case 4 :
							q= hexa.colonne ;
							r= hexa.ligne ++;
							if (hexa.ligne<NUM_ROW){
							result.add("SE",{hexa.ligne,hexa.colonne})
						}
					break; 
					
					case 5 :
							q= hexa.colonne --;
							r= hexa.ligne ++;
							if (hexa.colonne>0 && hexa.ligne<NUM_ROW){
							result.add("SO",{hexa.ligne,hexa.colonne})
						}
					break; 
				} 
			}
		}
		else{
			for (var i=0 ; i<6; i++){
				switch (i) {
					case 0 :
							q= hexa.colonne --;
							r= hexa.ligne;
							if (hexa.colonne>0){
							result.add("O",{hexa.ligne,hexa.colonne})
						}
					break; 
					case 1 :
							q= hexa.colonne;
							r= hexa.ligne --;
							if (hexa.ligne>0){
							result.add("NO",{hexa.ligne,hexa.colonne})
						}
					break; 
					case 2 :
							q= hexa.colonne++;
							r= hexa.ligne --;
							if (hexa.colonne>0 && hexa.colonne < NUM_COLUMNS){
							result.add("NE",{hexa.ligne,hexa.colonne})
						}
					break; 
					
					case 3 :
							q= hexa.colonne ++;
							r= hexa.ligne;
							if (hexa.colonne<NUM_COLUMNS){
							result.add("E",{hexa.ligne,hexa.colonne})
						}
					break; 
					
					case 4 :
							q= hexa.colonne++;
							r= hexa.ligne ++;
							if (hexa.ligne<NUM_ROW && hexa.colonne < NUM_COLUMNS){
							result.add("SE",{hexa.ligne,hexa.colonne})
						}
					break; 
					
					case 5 :
							q= hexa.colonne ;
							r= hexa.ligne ++;
							if ( hexa.ligne<NUM_ROW){
							result.add("SO",{hexa.ligne,hexa.colonne})
						}
					break; 
				} 
			}
		}

		return result;
	}
}