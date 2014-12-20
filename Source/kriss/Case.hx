package kriss;

import flash.display.Sprite;
import flash.Vector;

/*
* Crée un objet graphique Case, dans lequel on va dessiner les hexagones, et les modifier
*/

class Case extends Sprite {

	private var colonne:Int;
	private var ligne:Int; 
	private var couleur:UInt;
	private var groupe:Int;
	private var posx:Float;
	private var posy:Float;
	private var radius:Int;
	private inline var lineStyle = 0x000000;
	private inline var lineWidth = 1;

	/*
	* Constructeur, a base de positions, et taille et de couleur. 
	*/

	public function new(colonne:Int, ligne:Int, x:Float, y:Float, color:UInt = 0x222222, rad:Int=20){
		super();
		this.ligne = ligne;
		this.colonne = colonne;
		this.posx=x;
		this.posy=y;
		couleur=color;
		radius=rad;

	}
	/*
	* Fonction centrale qui permet de dessiner les hexagones. Elle remplit leur couleur, le style de ligne. 
	* Ici c'est un dessin vectorielle, ligne par ligne. 
	*/

	public function drawOneHexa():Void {
		graphics.lineStyle(lineWidth, lineStyle);
		graphics.beginFill(couleur);
		
		// #if js
		// 	js.Lib.alert(couleur);
		// #end

		for (i in 0...6)
		{	
			
			//graphics.lineStyle( 2,  0x123456);
		    var angle = 2 * Math.PI / 6 * (i + 0.5);
		    var x_i = posx + radius * Math.cos(angle);

		    var y_i = posy + radius * Math.sin(angle);
		   
		    

		    if (i == 0){
		        graphics.moveTo(Std.int(x_i), Std.int(y_i));
		    }
		    else{
		        graphics.lineTo(Std.int(x_i),Std.int(y_i));
		    }

    	}
	}

	/*
	* Fonction mettant a jour graphiquement la case. Ici, elle ne change que la couleur
	*/

	public function updateHexa(color:UInt){
		graphics.clear();
		couleur=color;
		drawOneHexa();

	}

	/*
	* Permet de supprimer graphiquement l'hexagone en question. Certaines opérations pourront être ajouté.
	*/

	public function deleteHexa(){
		graphics.clear();
	}

}