package kriss;

import flash.Lib;
import openfl.Assets;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;
import openfl.display.Sprite;
import haxe.Timer;
import haxe.io.Eof;
import haxe.io.Output;
import haxe.io.Input;
import flash.net.SharedObject;




// @:jsRequire("fs")
// extern class FS {
//   static function writeFile(path:String,
//     encoding:String):String;
// }


/*
* Fonction principale 
*/


class Krissmoon extends Sprite {

	public static var carte:Carte;
	public static inline var NUM_ROWS= Std.int(25);
	public static inline var NUM_COLUMNS= Std.int(25);
	private var fJusticar = Assets.getText("IAExport/Justicar.xml");
	private var fMortVivant= Assets.getText("IAExport/MortVivant.xml");
	private var fBerzergner = Assets.getText("IAExport/Berzergner.xml");
	private var fMorticor = Assets.getText("IAExport/Morticor.xml");
	private var fEnvirald = Assets.getText("IAExport/Envirald.xml");



/*
* Constructeur principal, crée la carte, ajoute les évènements et affiche la carte. 
*/

	public function new() {
		super();
		//js.Lib.alert(fMortVivant);

		js.Lib.alert(Assets.exists("IAExport/MortVivant.xml", TEXT));


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
			

			//for (i in 0...100){
				for (faction in f)
			 	{
			 		//faction.getFrontiere();
			 		faction.attaque();
			 		//haxe.Timer.delay(faction.attaque, 100);

			 		//js.Lib.alert(Assets.exists("IAExport/MortVivant.xml", TEXT));

			 		switch (faction.getNom()) {
			 			case "Mort-vivant" : 
			 				// fout = SharedObject.getLocal(fMortVivant);
			 				fMortVivant = ""+faction.updateXML().toString();
			 			case "Justicar":
			 				// fout = SharedObject.getLocal(fJusticar);
			 				fJusticar = ""+faction.updateXML().toString();
			 			case "Bezergner":
			 				// fout = SharedObject.getLocal(fBerzergner);
			 				fBerzergner = ""+faction.updateXML().toString();
						case "Morticor" :
							// fout = SharedObject.getLocal(fMorticor);
							fMorticor = ""+faction.updateXML().toString();
						case"Envirald" :
							// fout = SharedObject.getLocal(fEnvirald);
							fEnvirald = ""+faction.updateXML().toString();
			 		}
			 		//js.Lib.alert(Assets.exists("IAExport/MortVivant.xml", TEXT));

			 		js.Lib.alert(fMortVivant);


			 		//FS.writeFile(fMortVivant, ""+faction.updateXML().toString());

			 		//fout.close();


			 	}
			 //}
		 }

	 	
	 }
}