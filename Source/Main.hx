package ;

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


import openfl.display.Sprite;

class Main extends Sprite {

	public static var NUM_COLUMNS = 12;
	public static var NUM_ROWS = 12;
	public static var factionNeutre = new Faction("Neutre", 0, 0, 0xAAAAAA);
	public static var regions= new Array <Array <Region>> ();
	private var hexas= new Array <Array <Case>> ();
	private var factions= new Array <Faction> ();

	private var space = new Space();
	private var debug:ShapeDebug;

	public function new() {
		super();
		init();	
	}
	
	private function init(){

		stage.addEventListener(KeyboardEvent.KEY_UP, event_changeColor);

		// #if js
		// 		js.Lib.alert(stage.stageWidth+"/"+stage.stageHeight );
		// #end

		// Initialisation des factions :
		factions.push(new Faction("Mort-vivant", 9, 1, 0x111111));
		factions.push(new Faction("Justicar", 5, 5, 0x882222));
		factions.push(new Faction("Bezergner", 8, 2, 0xCC4444));
		factions.push(new Faction("Morticor", 3, 7, 0x1122BB));
		factions.push(new Faction ("Envirald", 1, 9, 0x22BB11));
		// #if js
		// 	js.Lib.alert(factions[1].couleur);
		// #end

		// Initialisation des régions
		
		for (row in 0...NUM_ROWS) {
			
			regions[row] = new Array <Region> ();
			hexas[row]= new Array <Case> ();
			
			for (column in 0...NUM_COLUMNS) {
				
				regions[row][column] = null;
				hexas[row][column] = null;


				// #if js
				// 	js.Lib.alert(row+column);
				// #end
				
			}
			
		}

		drawMap(NUM_ROWS, NUM_COLUMNS, Std.int(stage.stageWidth-100),Std.int(stage.stageHeight-100));
		

		// #if js
		// 	js.Lib.alert(region);
		// #end

		//regions[0][0].changement_Faction(factions[3]);
	}

	private function drawMap(mapx:Int, mapy:Int, w:Int, h:Int):Void {
		// #if js
		// 		js.Lib.alert(mapx+"/"+mapy+"/"+w+"/"+h);
		// #end

		var radius = 20;
		var xhexa:Float;
		var yhexa:Float;

		// #if js
		// 		js.Lib.alert(radius);
		// #end
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
				hexas[i][j]= hexa;
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

			// #if js
			// js.Lib.alert(region);
			// #end 

			regions[i][j] = region;

			}

			// #if js
			// 	js.Lib.alert(regions[0][0].appartenance.couleur);
			// #end


		}
	 }

	 private function event_changeColor(e:KeyboardEvent):Void {
	 	
	 	for (faction in factions)
	 	{
	 		faction.attaque();
	 	}

	 }




	// private function drawOneHexa(x:Int, y:Int, radius:Int):Void {
	// 	graphics.lineStyle(2, 0x000000);


	// 	for (i in 0...6)
	// 	{	
	// 		//graphics.beginFill(0x00FF00);
	// 		//graphics.lineStyle( 2,  0x123456);
	// 	    var angle = 2 * Math.PI / 6 * (i + 0.5);
	// 	    var x_i = x + radius * Math.cos(angle);

	// 	    var y_i = y + radius * Math.sin(angle);
		   
		    

	// 	    if (i == 0){
	// 	        graphics.moveTo(Std.int(x_i), Std.int(y_i));
	// 	    }
	// 	    else{
	// 	        graphics.lineTo(Std.int(x_i),Std.int(y_i));
	// 	    }
 //    	}
	// }

}

	
// 	}
// }