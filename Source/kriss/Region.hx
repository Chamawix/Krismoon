package kriss;

import flash.Vector;
import haxe.ds.StringMap;
import flash.Lib;
import openfl.geom.ColorTransform;

/*
*Ajout d'une énumération de type Point, décrivant la position sur la grille de la région
*
*/
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


/*
* Constucteur de Région, il a besoin d'une case, et d'une faction. La case sera l'objet graphique, tandis que la faction
* sera une interaction avec les données. 
*/

	public function new(h:Case,nouvelleFaction:Faction){

		hexa=h;
		faction=nouvelleFaction;

		// #if js
		// 		js.Lib.alert(this);
		// #end

		hexa.updateHexa(faction.couleur);
		// #if js
		// 		js.Lib.alert(this + "\n" + " AjoutTerritoire ou listeVoisin");
		// #end

		faction.ajoutTerritoire(this);
		// #if js
		// 		js.Lib.alert(this + "\n" + " listeVoisins bug");
		// #end

		listeVoisins=voisins();
		// #if js
		// 		js.Lib.alert(this);
		// #end
		
	}

/*
* Change la faction. 
* Interragit directement avec les factions créées, en supprimant la région de la liste des territoires
* de la faction qui perd la région, et ajoute la région dans le territoire qui gagne cette région
*/

	public function changement_Faction(nouvelleFaction:Faction):Void{
		
		//retirer la région de la faction
		faction.retraitTerritoire(this);

		faction = nouvelleFaction;
		hexa.updateHexa(faction.couleur);

		//Ajouter la région dans la faction
		faction.ajoutTerritoire(this);

		typeVoisins();

	}

	/*
	* Fonction interne (private), qui permet de calculer les voisins de la région, qui seront statiques ici (les régions ne sont pas destructibles)
	* Elle est appelée dans le constructeur, pour remplir une string map de type :
	* <"Orientation", "Coordonnées de type Poit">, par exemple : "SO", "1,1", correspond au voisin Sud-Ouest, de coordonnée 1,1
	* Du fait des cases en hexagone, il y a un decalage selon que la ligne est paire ou impaire (Le if/else du début)
	*/

	private function voisins():StringMap <Point>{

		var result= new StringMap <Point> ();
		var p: Point = {x:hexa.getLigne(), y:hexa.getColonne()};
		var q:Int;
		var r:Int;
		if (hexa.getColonne()==8) {

			
		}
		
		if(hexa.getLigne() %2 == 0)
		{
			for (i in 0...6){
				switch (i) {
					case 0 :
							q= hexa.getColonne() -1;
							r= hexa.getLigne();

							if (q>=0) result.set("O", {x:q,y:r});

					case 1 :
							q= hexa.getColonne() -1;
							r= hexa.getLigne() -1;
							if (q>=0 && r>=0){
							result.set("NO",{x:q, y:r});
							}

					case 2 :
							q= hexa.getColonne();
							r= hexa.getLigne() -1;
							if (r>=0){
							result.set("NE",{x:q, y:r});
						};
		
					
					case 3 :
							q= hexa.getColonne()+1;
							r= hexa.getLigne();
							
							if (q< Krissmoon.NUM_COLUMNS){
							result.set("E",{x:q, y:r});
						};

		
					
					case 4 :
							q= hexa.getColonne() ;
							r= hexa.getLigne()+1;
							if (r<Krissmoon.NUM_ROWS){
							result.set("SE",{x:q, y:r});
						}
		
					
					case 5 :
							q= hexa.getColonne() -1;
							r= hexa.getLigne() +1;
							if (q>=0 && r<Krissmoon.NUM_ROWS){
							result.set("SO", {x:q, y:r});
						}
		
				} 
			}
		}
		else{
			for (j in 0...6){
				switch (j) {
					case 0 :
							q= hexa.getColonne() -1;
							r= hexa.getLigne();
							if (q>=0){
							result.set("O",{x:q, y:r});
						}
		
					case 1 :
							q= hexa.getColonne();
							r= hexa.getLigne()-1;
							if (r>=0){
							result.set("NO",{x:q, y:r});
						}
		
					case 2 :
							q= hexa.getColonne()+1;
							r= hexa.getLigne() -1;
							if (r>=0 && q<Krissmoon.NUM_COLUMNS){
							result.set("NE",{x:q, y:r});
						}
		
					
					case 3 :
							q= hexa.getColonne() +1;
							r= hexa.getLigne();
							if (q<Krissmoon.NUM_COLUMNS){
							result.set("E",{x:q, y:r});
						}
		
					
					case 4 :
							q= hexa.getColonne()+1;
							r= hexa.getLigne()+1;
							if (r<Krissmoon.NUM_ROWS && q< Krissmoon.NUM_COLUMNS){
							result.set("SE",{x:q, y:r});
						}
		
					
					case 5 :
							q= hexa.getColonne();
							r= hexa.getLigne()+1;
							if (r <Krissmoon.NUM_ROWS){
							result.set("SO",{x:q, y:r});
						}
		
				} 
			}
		}

		return result;
	}

	/*
	* Retourne la liste de voisins
	*/

	public function getVoisins():Void {
		/*#if js
		js.Lib.alert(listeVoisins + "\n Voisins alliés" + regionAllie +"\n Voisins Ennemies" + regionEnnemie);
		#end*/
	}

	/* 
	* Retourne la faction actuelle 
	*/

	public function getFaction():Faction{
		return faction;
	}

	/*
	* Détermine le type du voisin, si c'est une case ennemie ou alliée. 
	*/

	public function typeVoisins():Void {
		var iter = listeVoisins.keys();
		for (voisin in iter){
			var reg = Krissmoon.carte.getRegions();
			//trace(reg);
			if (faction == reg[listeVoisins.get(voisin).x][listeVoisins.get(voisin).y].getFaction()){
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

	/*
	* Renvoit les regions voisinnes ennemies ou alliées
	*/

	public function getEnnemie():Array <String> {
		return regionEnnemie;
	}
	public function getAllie(): Array <String> {
		return regionAllie;
	}

	/*
	* Effectue une attaque sur une zone voisine. 
	*/

	public function attaqueZone( orientation:String){
		var p = listeVoisins.get(orientation);
		var r = Krissmoon.carte.getRegions();
		if(r[p.x][p.y].getFaction().getNom() == "Neutre")
		r[p.x][p.y].changement_Faction(faction);
		// #if js
		// 	js.Lib.alert(orientation+"\n"+ p + "\n" + this.hexa.getLigne() +"/"+this.hexa.getColonne());
		// #end
		}

}