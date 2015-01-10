package kriss;

import flash.Lib;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;
import openfl.display.Sprite;
import haxe.Timer;

/*
* Fonction principale 
*/


class Krissmoon extends Sprite {

	public static var carte:Carte;
	public static inline var NUM_ROWS= Std.int(25);
	public static inline var NUM_COLUMNS= Std.int(25);

/*
* Constructeur principal, crée la carte, ajoute les évènements et affiche la carte. 
*/

	public function new() {
		super();


		#if js
		//	js.Lib.alert(stage.stageWidth);
		#end
		
		carte = new Carte(stage.stageWidth, stage.stageHeight, NUM_ROWS, NUM_COLUMNS);


		stage.addEventListener(KeyboardEvent.KEY_UP, event_attaque);

		addChild(carte);
	}

/*
* Event générant les attaques, dès qu'on appuie sur une touche du clavier.
*/

	private function event_attaque(e:KeyboardEvent):Void {
	 	var f = carte.getFactions();
		 // 	#if js
		// 	js.Lib.alert(e.keyCode);
		// #end
		if(e.keyCode == 32) // ESPACE
		{
			#if js
				js.Lib.alert("Mort-vivant, nb territoire : "+f[0].getTerritoire().length+"\n"
					+ "nb frontiere :" + f[0].getFrontiere().length);
				var s = "";
				for (r in f[0].getFrontiere()) s+= r.toString();
				
				js.Lib.alert(s);

			#end
		}
		else {
			

			for (i in 0...2){
				for (faction in f)
			 	{

			 		//faction.getFrontiere();
			 		faction.attaque();
			 		//haxe.Timer.delay(faction.attaque, 100);
			 	}
			 }
		 }

	 	
	 }
}