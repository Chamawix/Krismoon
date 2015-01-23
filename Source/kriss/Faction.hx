package kriss;

import flash.Vector;
import kriss.Region.Point;


class Faction{
	public var couleur: UInt;

	private var nom:String;
	private var territoire = new Array <Region> ();
	//private var ia:Ia; Pour plus tard
	private var frontiere = new Array <Region> ();
	private var puissanceAttaque:Int;
	private var puissanceDefense: Int;
	private var capitaleLigne:Int;
	private var capitaleColonne:Int;
	private var factionXML:Xml;
	/*
	Ensemble de caracs a voir pour chaque faction:
	? facteur d'extension (plus je suis loin, plus je suis efficace) offensif
	? defensif
	nbr de capitale?
	Capacité spéciale? 
	récupérer des données particulières? -> Alliance, ennemi juré, bonus spécial? 

	*/


	// Création d'une faction

	public function new(nom:String, puissanceAttaque:Int, puissanceDefense:Int, couleur:UInt, colonne:Int, ligne:Int)
	{
		this.nom=nom;
		this.puissanceAttaque=puissanceAttaque;
		this.puissanceDefense=puissanceDefense;
		this.couleur=couleur;
		this.capitaleLigne=ligne;
		this.capitaleColonne=colonne;
		initXML();

	}



	public function gestionUnite(){
		//Aléatoire full 
		
		var indiceAllie = Std.int(Math.random()*territoire.length);

		var indiceDepart = Std.int(Math.random()*territoire.length);

		deplacementUnite(territoire[indiceDepart],territoire[indiceAllie], Std.int(territoire[indiceDepart].getUnite()/2));
	}

	public function deplacementUnite(regionDepart:Region, regionArrive:Region, nb:Int):Void {
		
		if (nb >= regionDepart.getUnite()) nb = regionDepart.getUnite()-1;
			
			regionDepart.removeUnite(nb);
			regionArrive.addUnite(nb);

		}


	/*
		Sélection aléatoire d'une région frontaliere (adjacente a un ennemi) dans la faction
		Effectue une attaque aléatoirement sur un des terrains ennemis
		ajout d'une composante d'unité. 
		Pour l'instant, si il n'y a pas assez d'unité pour attaque,
		l'attaque a lieu quand même et on ajoute une unité a la frontière donnée
	*/

	public function attaque() :Void{

		territoire[0].addUnite(1);
		gestionUnite();

		//Engage une action d'attaque contre une autre faction
		var atqDone = false;
		
		var l = territoire.length;
		

		//var traceback = "";
		doFrontiere();

		// if (this.nom == "Justicar"){
		// 	#if js	
		// 		js.Lib.alert("Frontiere Justicar :"+ frontiere.length);
		// 	#end
		// 	var z = 0;
		// }
		
		while (!atqDone){

			var i = Std.int(Math.random() *frontiere.length);
			frontiere[i].addUnite(1);
			var nbUniteDispo= frontiere[i].getUnite()-1;

			var atq = frontiere[i].getEnnemie();
			var indice= Std.int(atq.length*Math.random());

			frontiere[i].attaqueZone(atq[indice], nbUniteDispo);
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

		frontiere.push(region);
			
	}


	// retrait d'une region, suite a une défaite

	public function retraitTerritoire(region:Region):Void{
		territoire.remove(region);
		frontiere.remove(region);
	}

	public function getNom():String {
		return nom;
	}
	public function getFrontiere():Array<Region>{
		return frontiere;
	}
	public function getTerritoire():Array<Region>{
		return territoire;
	}
	public function getPuissanceAttaque(): Int{
		return puissanceAttaque;
	}
	public function getPuissanceDefense():Int{
		return puissanceDefense;
	}
	public function getCapitale():Point{
		var p : Point = {x: capitaleColonne,y:capitaleLigne};
		return p;
	}

	public function doFrontiere():Void {

		for (region in territoire)
		{
			region.typeVoisins();
			// #if js
			// 	js.Lib.alert(region.getEnnemie().length);
			// #end
			if (region.getEnnemie().length!= 0 && frontiere.indexOf(region) == -1)
			{
				// #if js
				// 	js.Lib.alert(region);
				// #end
				frontiere.push(region);
			}
			else if (region.getEnnemie().length ==0 && frontiere.indexOf(region) != -1) {

				frontiere.remove(region);
			}
		}
	}

	private function isFrontiere(region : Region ):Bool {
		if(frontiere.indexOf(region) == -1 ) return false;
		else return true;
	}

	public function initXML():Void {
		factionXML = Xml.createElement('' + nom);
		factionXML.set("puissanceAttaque", ""+ puissanceAttaque);
		factionXML.set("puissanceDefense", ""+ puissanceDefense);

	 	var child = Xml.createElement('territoire'); 
	 	factionXML.addChild(child);

	}

	// private function updateXMLFrontiere():Void{
	// 	factionXML.removeChild(factionXML.elementsNamed('frontiere').next());

	// 	var child:Xml = Xml.createElement('frontiere'); 

	//  	for (i in frontiere){
	//  		child = Xml.createElement(''+i.toString());
	//  		child.set("NbUnite", ""+ i.getUnite());
	//  		factionXML.addChild(child);
	//  	}

	//  	factionXML.addChild(child);
	// }

	private function updateXMLTerritoire():Void{
		factionXML.removeChild(factionXML.elementsNamed("territoire").next());

		var child:Xml = Xml.createElement('territoire'); 

	 	for (i in territoire){
	 		var childReg = Xml.createElement(''+i.toString());
	 		childReg.set("NbUnite", ""+ i.getUnite());
	 		childReg.set("isFrontiere", ""+ isFrontiere(i));
	 		child.addChild(childReg);
	 	}

	 	factionXML.addChild(child);
	}

	public function updateXML():Xml {

		updateXMLTerritoire();
		//updateXMLFrontiere();

	 	#if js 
	 	//js.Lib.alert(factionXML);
	 	#end

	 	return factionXML;
	 }


	public function changeCapitale():Void{
		
	}
}