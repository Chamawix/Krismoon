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


	private var hexa:Case; //public
	private var faction:Faction;
	private var listeVoisins:StringMap<Point>;
	private var regionAllie = new Array <String> ();
	private var regionEnnemie = new Array <String> ();
	private var capital:Bool = false;
	private var nbUnite:Int = 1;


/*
* Constucteur de Région, il a besoin d'une case, et d'une faction. La case sera l'objet graphique, tandis que la faction
* sera une interaction avec les données. 
*/

	public function new(h:Case,nouvelleFaction:Faction, cap:Bool = false){

		hexa=h;
		faction=nouvelleFaction;
		capital= cap;

		// #if js
		// 		js.Lib.alert(this);
		// #end

		hexa.updateHexa(faction.couleur);
		hexa.setText(""+nbUnite);
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
		// if (faction.getNom() == "Justicar"){
		// #if js
		// 	js.Lib.alert("Retrait région de  : "+faction.getNom());
		// #end
		// }
		faction.doFrontiere();

		faction = nouvelleFaction;
		
		hexa.updateHexa(faction.couleur);
		hexa.setText(""+nbUnite);

		//Ajouter la région dans la faction
		faction.ajoutTerritoire(this);
		// if (faction.getNom() == "Justicar"){
		// #if js
		// 	js.Lib.alert("Ajout région dans  : "+ faction.getNom());
		// #end
		// }

		typeVoisins();
		faction.doFrontiere();

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
	public function isCap(): Bool {
		return capital;
	}

	public function toString(): String {
		var s = "{Ligne:"+hexa.getLigne()+";Colonne :"+ hexa.getColonne()+"}\n";
		return s;
	}

	/*
	* Effectue une attaque sur une zone voisine. Ici se trouve les règles d'attaque/defense.  
	*/

	public function getUnite():Int{
		return nbUnite;
	}

	public function addUnite(n:Int):Void{
		nbUnite+=n;
		if(nbUnite > 100) nbUnite=30;
		hexa.setText(""+nbUnite);
	}
	public function removeUnite(n:Int):Void{
		nbUnite-=n;
		if(nbUnite <0) nbUnite=0;
		hexa.setText(""+nbUnite);
	}
	public function setUnite(nb:Int):Void{
		nbUnite= nb;
		hexa.setText(""+nbUnite);
	
	}

	public function getVoisin(orientation:String):Region {
		var p = listeVoisins.get(orientation);
		var r = Krissmoon.carte.getRegions();


		return r[p.x][p.y];
	}

	public function attaqueZone(orientation:String, nbUniteAttaquante:Int){
		var regionAttaque = getVoisin(orientation);

		
		// #if js
		// 	js.Lib.alert(faction.getNom()+"\n\n"+"Distance :"+distanceCap()+ "\nAttaque :"+calculAttaque()+"\nVS\nDef:"+
		// 			r[p.x][p.y].getFaction().getNom()+"\n"+r[p.x][p.y].calculDef());
		// #end



		if(! regionAttaque.isCap() && (calculAttaque()*nbUnite>regionAttaque.calculDef()*regionAttaque.getUnite()))
		{
			//regionAttaque.changement_Faction(faction);
			if (calculAttaque()*nbUnite-regionAttaque.calculDef()*regionAttaque.getUnite() <= 100){
				regionAttaque.changement_Faction(Carte.factionNeutre);
				regionAttaque.setUnite(0);
			}
			if(calculAttaque()*nbUnite-regionAttaque.calculDef()*regionAttaque.getUnite() <= 300 && calculAttaque()*nbUnite-regionAttaque.calculDef()*regionAttaque.getUnite() > 100){
				regionAttaque.changement_Faction(faction);
				regionAttaque.setUnite(Std.int(nbUnite*2/3));
			}
			if(calculAttaque()*nbUnite-regionAttaque.calculDef()*regionAttaque.getUnite() >300){
			{
				regionAttaque.changement_Faction(faction);
				regionAttaque.setUnite(nbUnite);
			}
		}
		// #if js
		// 	js.Lib.alert(orientation+"\n"+ p + "\n" + this.hexa.getLigne() +"/"+this.hexa.getColonne());
		// #end
			//if (faction.getNom()=="Envirald"){
				

			//}
		}
	}

	//Calcul de la defense en fonction de la distance a la capital
	public function calculDef():Int{
		var defense = 0;
	
		// #if js
		// 	js.Lib.alert("Distance capitale/region="+Std.int(Math.sqrt(Math.pow(cap.x-hexa.getColonne(), 2.0)+(Math.pow(cap.y-hexa.getLigne(), 2.0)))));
		// #end
		
		//defense =faction.getPuissanceDefense();
		var d= distanceCap();
		if (distanceCap()>4) d=4;

		defense= faction.getPuissanceDefense()*(regionAllie.length+1)+(500*(4-d));
		//defense-= 10*distanceCap();
		if (faction.getNom()=="Neutre") defense=0;


		return defense;
	}

	/*
	* calcul de l'attaque fonction du nombre de case alliées
	*/
	private function calculAttaque():Int{
		var attaque = 0;
		var d= distanceCap();
		if (distanceCap()>4) d=4;

		attaque = faction.getPuissanceAttaque()*(regionAllie.length+1) + (300*(4-d));
		//attaque += attaque - (10-faction.getPuissanceAttaque())*distanceCap();

		return attaque;
	}
	private function distanceCap():Int {
		var cap = faction.getCapitale();
		return Std.int(Math.sqrt(Math.pow(cap.x-hexa.getColonne(), 2.0)+(Math.pow(cap.y-hexa.getLigne(), 2.0))));
	}
}