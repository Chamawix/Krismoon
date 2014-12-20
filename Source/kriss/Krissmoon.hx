package kriss;

import flash.Lib;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;
import openfl.display.Sprite;

/*
* Fonction principale 
*/

class Krissmoon extends Sprite {

	public static var carte:Carte;
	public static inline var NUM_ROWS= Std.int(12);
	public static inline var NUM_COLUMNS= Std.int(12);

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
	 	for (faction in f)
	 	{
	 		faction.attaque();
	 	}
	 }
}