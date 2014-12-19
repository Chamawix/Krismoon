package kriss;

import flash.Lib;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;
import openfl.display.Sprite;

class Carte extends Sprite {

	private var NUM_COLUMNS = 12;
	private var NUM_ROWS = 12;
	private var factionNeutre = new Faction("Neutre", 0, 0, 0xAAAAAA);
	private var regions = new Array <Array <Region>> ();
	private var factions = new Array <Faction> ();

	public function new() {
		super();
		init();	
	}


	/* 
		Création des factions avec choix des noms, des couleurs et de leurs attaque/defense
		Initialisation de la map de régions
		Appel de drawMap
	*/

	private function init(){

		factions.push(new Faction("Mort-vivant", 9, 1, 0x111111));
		factions.push(new Faction("Justicar", 5, 5, 0xDDDD22));
		factions.push(new Faction("Bezergner", 8, 2, 0xCC4444));
		factions.push(new Faction("Morticor", 3, 7, 0x1122BB));
		factions.push(new Faction ("Envirald", 1, 9, 0x00AA00));

		for (row in 0...NUM_ROWS) {
			
			regions[row] = new Array <Region> ();
			
			for (column in 0...NUM_COLUMNS) {
				
				regions[row][column] = null;			
			}		
		}

		drawMap(NUM_ROWS, NUM_COLUMNS, Std.int(stage.stageWidth-100),Std.int(stage.stageHeight-100));

	}


	/* 
		Création de la map initiale et des hexagones, avec affichage
		Chaque hexagone devient une région
		Initialisation des factions et de leurs position de départ
		Remplissage de regions
	*/
	private function drawMap(mapx:Int, mapy:Int, w:Int, h:Int):Void {

		var radius = 20;
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

				//Sauvegarde en mémoire le child du stage. 
				var region:Region;

				if (i== 0 && j==0) {

					region = new Region (hexa,factions[0]);
				}
				else if(i == 5 && j == 4)
					region = new Region (hexa,factions[1]);
				else if (i == 7 && j== 5)
					region = new Region (hexa,factions[2]);
				else if (i == 2 && j== 7)
					region = new Region (hexa,factions[3]);
				else if (i == 9 && j== 8)
					region = new Region (hexa,factions[4]);
				else{ 
					region = new Region (hexa,factionNeutre);
				}
		
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
	 	return NUM_COLUMNS;
	 }

	  public function getNum_Rows():Int{
	 	return NUM_ROWS;
	 }


}