package kriss;

import flash.Vector;

class Faction{

	private var nom:String;
	private var territoire = new Array <Region> ();
	//private var ia:Ia; Pour plus tard
	private var frontiere = new Array <Region> ();
	private var puissanceAttaque:Int;
	private var puissanceDefense: Int;
	public var couleur: UInt;


	// Création d'une faction

	public function new(nom:String, puissanceAttaque:Int, puissanceDefense:Int, couleur:UInt)
	{
		this.nom=nom;
		this.puissanceAttaque=puissanceAttaque;
		this.puissanceDefense=puissanceDefense;
		this.couleur=couleur;

	}


	/*
		Sélection aléatoire d'une région dans la faction
		Si elle a des enemis, effectue une attaque aléatoirement sur un des terrains ennemis
	*/

	public function attaque() :Void{

		//probleme avec la fonction !

		//Engage une action d'attaque contre une autre faction
		var atqDone = false;
		
		var l = territoire.length;
		//var traceback = "";
		var count=0;
		
		while (!atqDone){
			
			count++;

			var i = Std.int(Math.random()*territoire.length);

			territoire[i].typeVoisins();

			
			if (territoire[i].getEnnemie().length==0 && count >15*15) break;

			if (territoire[i].getEnnemie().length==0) continue;

			var atq = territoire[i].getEnnemie();
			var indice= Std.int(atq.length*Math.random());

			territoire[i].attaqueZone(atq[indice]);
			// #if js
			// js.Lib.alert(territoire[i].getEnnemie());
			// #end
			atqDone=true;
			//traceback = traceback + " " + territoire[i].hexa.ligne + "/"+ territoire[i].hexa.colonne;
		}
		
	}


	// ajout d'une nouvelle regions dans la faction, suite a une attaque

	public function ajoutTerritoire(region:Region):Void{
		// if(nom != "Neutre") {
		// 	#if js
		// 	js.Lib.alert("Ajout d'une région dans un territoire");
		// 	#end
		// }
		territoire.push(region);
	}


	// retrait d'une region, suite a une défaite

	public function retraitTerritoire(region:Region):Void{
		territoire.remove(region);
	}

	public function getNom():String {
		return nom;
	}
}