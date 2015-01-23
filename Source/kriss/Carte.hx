package kriss;

import flash.Lib;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;
import openfl.display.Sprite;

/*
* La carte, objet graphique contenant l'ensemble des cases, des regions et des factions. C'est l'objet
* princial, dans lequel tout est géré en mémoire.  
*/

class Carte extends Sprite {

	public static var factionNeutre = new Faction("Neutre", 0, 0, 0xAAAAAA, 0, 0);


	private var columns: Int;
	private var rows :Int;
	private var regions = new Array <Array <Region>> ();
	private var factions = new Array <Faction> ();
	private var w:Float;
	private var h: Float;


	private static inline var radius = 25;

	/*
	* Constructeur, construit a partir d'une taille en pixel (height et width), et un ensemble
	* de ligne et de colonnes.
	*/

	public function new(width : Float, height: Float, nrows:Int, ncolumns:Int) {
		super();

		w = width;
		h = height;
		columns= ncolumns;
		rows = nrows;

		// #if js
		// 	js.Lib.alert(columns+"/"+ rows +"/"+ factionNeutre+"/"+ regions+ "/"+ factions);
		// #end

		init();	
	}


	/* 
		Création des factions avec choix des noms, des couleurs et de leurs attaque/defense
		Initialisation de la map de régions
		Appel de drawMap
	*/

	private function init(){

		factions.push(new Faction("Mort-vivant", 9, 1, 0x111111, 0, 0));
		factions.push(new Faction("Justicar", 5, 5, 0xDDDD22, 22, 20));
		factions.push(new Faction("Bezergner", 8, 2, 0xCC4444, 16, 12));
		factions.push(new Faction("Morticor", 3, 7, 0x1122BB, 5, 16));
		factions.push(new Faction ("Envirald", 0, 10, 0x00AA00, 12, 11));

		for (row in 0...rows) {
			
			regions[row] = new Array <Region> ();
			
			for (column in 0...columns) {
				
				regions[row][column] = null;			
			}		
		}		

				// #if js
				// 	js.Lib.alert(columns+"/"+ rows +"/"+ factionNeutre+"/"+ regions+ "/"+ factions);
				// #end


		drawMap(rows, columns, Std.int(w-100),Std.int(h-100));

	}


	/* 
		Création de la map initiale et des hexagones, avec affichage
		Chaque hexagone devient une région
		Initialisation des factions et de leurs position de départ
		Remplissage de regions
	*/
	private function drawMap(mapx:Int, mapy:Int, w:Int, h:Int):Void {
		
		var xhexa:Float;
		var yhexa:Float;

				

		for (i in 0...mapy){
			for (j in 0...mapx){
				if(j%2 == 0){
				xhexa = i*radius*2*Math.sqrt(3)/2+radius*2;
				yhexa = j*radius*2*3/4+radius*2;
				
			}
			else{
				xhexa = i*radius*2*Math.sqrt(3)/2+radius*2+radius -2*radius/15;
				yhexa = j*radius*2*3/4+radius*2;
			}
				

				var colonne=i;
				var ligne=j;

				var hexa = new Case(colonne, ligne, xhexa, yhexa, 0xAA0000+j*1000+i*10000, radius);


				hexa.drawOneHexa();

				//Ajoute au stage l'hexagone -> Devient graphique.
				addChild(hexa);

				// #if js
				// 	js.Lib.alert(hexa);
				// #end


				//Sauvegarde en mémoire le child du stage. 
				var region:Region;
				

				if (i== factions[0].getCapitale().x && j==factions[0].getCapitale().y) {

					region = new Region (hexa,factions[0], true);
				}
				else if(i== factions[1].getCapitale().x && j==factions[1].getCapitale().y)
					region = new Region (hexa,factions[1], true);
				else if (i== factions[2].getCapitale().x && j==factions[2].getCapitale().y)
					region = new Region (hexa,factions[2], true);
				else if ((i== factions[3].getCapitale().x && j==factions[3].getCapitale().y))
					region = new Region (hexa,factions[3], true);
				else if ((i== factions[4].getCapitale().x && j==factions[4].getCapitale().y))
					region = new Region (hexa,factions[4], true);
				else{ 
					region = new Region (hexa,factionNeutre);
				}
				//region = new Region (hexa,factionNeutre);

			// #if js
			// 	js.Lib.alert(region);
			// #end

		
			regions[i][j] = region;
	
			}
		}
	 }

	 public function getFactions():Array <Faction> {
	 	return factions;
	 }

	 public function getRegions():Array <Array <Region>> {
	 	return regions;
	 }

	 public function getNum_Columns():Int{
	 	return columns;
	 }

	  public function getNum_Rows():Int{
	 	return rows;
	 }

}