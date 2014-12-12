package ;

import flash.display.BitmapData;
import flash.display.Bitmap;
import openfl.Assets;
import motion.Actuate;
import flash.display.Sprite;
import flash.Vector;
import flash.display.Shape;
import haxe.ds.StringMap;

import nape.shape.Polygon;
import flash.Lib;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.space.Space;
import nape.util.Debug;
import nape.util.ShapeDebug;
import flash.display.Bitmap;
import flash.display.BitmapData;
import openfl.Assets;
import motion.Actuate;
import flash.events.Event;
import flash.events.MouseEvent;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;


	typedef Point ={
	x:Int
	,y:Int
}

class Region {


	public var hexa:Case;
	private var faction:Faction;
	private var listeVoisins:StringMap<Point>;
	private var regionAllie = new Array <String> ();
	private var regionEnnemie = new Array <String> ();



	public function new(h:Case,nouvelleFaction:Faction){

		hexa= h;
		faction=nouvelleFaction;

		hexa.updateHexa(faction.couleur);

		faction.ajoutTerritoire(this);

		listeVoisins=voisins();
		//if (faction.nom != "Neutre") 
			//typeVoisins();
	}

	public function changement_Faction(nouvelleFaction:Faction):Void{



		// #if js
		// 	js.Lib.alert(this);
		// #end
		
		//retirer la région de la faction
		faction.retraitTerritoire(this);

		faction = nouvelleFaction;
		hexa.updateHexa(faction.couleur);

		//Ajouter la région dans la faction
		faction.ajoutTerritoire(this);

		typeVoisins();

	}

	private function voisins():StringMap <Point>{

		var result= new StringMap <Point> ();
		var p: Point = {x:hexa.ligne, y:hexa.colonne};
		var q:Int;
		var r:Int;
		if (hexa.colonne==8) {
			#if js
			//js.Lib.alert(hexa.colonne+"/"+hexa.ligne);
			#end
		}

		if(hexa.ligne %2 == 0)
		{
			for (i in 0...6){
				switch (i) {
					case 0 :
							q= hexa.colonne -1;
							r= hexa.ligne;

							if (q>=0) result.set("O", {x:q,y:r});

					case 1 :
							q= hexa.colonne -1;
							r= hexa.ligne -1;
							if (q>=0 && r>=0){
							result.set("NO",{x:q, y:r});
							}

					case 2 :
							q= hexa.colonne;
							r= hexa.ligne -1;
							if (r>=0){
							result.set("NE",{x:q, y:r});
						};
		
					
					case 3 :
							q= hexa.colonne+1;
							r= hexa.ligne;
							
							if (q<Main.NUM_COLUMNS){
							result.set("E",{x:q, y:r});
						};

		
					
					case 4 :
							q= hexa.colonne ;
							r= hexa.ligne +1;
							if (r<Main.NUM_ROWS){
							result.set("SE",{x:q, y:r});
						}
		
					
					case 5 :
							q= hexa.colonne -1;
							r= hexa.ligne +1;
							if (q>=0 && r<Main.NUM_ROWS){
							result.set("SO", {x:q, y:r});
						}
		
				} 
			}
		}
		else{
			for (j in 0...6){
				switch (j) {
					case 0 :
							q= hexa.colonne -1;
							r= hexa.ligne;
							if (q>=0){
							result.set("O",{x:q, y:r});
						}
		
					case 1 :
							q= hexa.colonne;
							r= hexa.ligne-1;
							if (r>=0){
							result.set("NO",{x:q, y:r});
						}
		
					case 2 :
							q= hexa.colonne+1;
							r= hexa.ligne -1;
							if (r>=0 && q<Main.NUM_COLUMNS){
							result.set("NE",{x:q, y:r});
						}
		
					
					case 3 :
							q= hexa.colonne +1;
							r= hexa.ligne;
							if (q<Main.NUM_COLUMNS){
							result.set("E",{x:q, y:r});
						}
		
					
					case 4 :
							q= hexa.colonne+1;
							r= hexa.ligne+1;
							if (r<Main.NUM_ROWS && q< Main.NUM_COLUMNS){
							result.set("SE",{x:q, y:r});
						}
		
					
					case 5 :
							q= hexa.colonne;
							r= hexa.ligne+1;
							if (r <Main.NUM_ROWS){
							result.set("SO",{x:q, y:r});
						}
		
				} 
			}
		}

		return result;
	}

	public function getVoisins():Void {
		#if js
		js.Lib.alert(listeVoisins + "\n Voisins alliés" + regionAllie +"\n Voisins Ennemies" + regionEnnemie);
		#end
	}
	public function getFaction():Faction{
		return faction;
	}

	public function typeVoisins():Void {
		
		var iter = listeVoisins.keys();

		for (voisin in iter){

			if (faction == Main.regions[listeVoisins.get(voisin).x][listeVoisins.get(voisin).y].getFaction()){
				if(regionAllie.indexOf(""+voisin) == -1 )
					regionAllie.push(""+voisin);
				if(regionEnnemie.indexOf(""+voisin) != -1)
					regionEnnemie.remove(""+voisin);
			}

			else {
				
				
				if (regionEnnemie.indexOf(""+voisin) == -1)
					regionEnnemie.push(""+voisin);

				if (regionAllie.indexOf(""+voisin)!= -1)
					regionAllie.remove(""+voisin);
			}


		}

	}


	public function getEnnemie():Array <String> {
		return regionEnnemie;
	}
	public function getAllie(): Array <String> {
		return regionAllie;
	}

	public function attaqueZone( orientation:String){
		var p = listeVoisins.get(orientation);
		if(Main.regions[p.x][p.y].getFaction().nom == "Neutre")
		Main.regions[p.x][p.y].changement_Faction(faction);
		// #if js
		// 	js.Lib.alert(orientation+"\n"+ p + "\n" + this.hexa.ligne +"/"+this.hexa.colonne);
		// #end
		
		}

}