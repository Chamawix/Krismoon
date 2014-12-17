package kriss;

import flash.display.Sprite;
import flash.Vector;

class Case extends Sprite {

	public var colonne:Int;
	public var ligne:Int; 
	public var couleur:UInt;
	public var groupe:Int;
	public var posx:Float;
	public var posy:Float;
	public var radius:Int;


	public function new(colonne:Int, ligne:Int, x:Float, y:Float, color:UInt = 0x222222, rad:Int=20){
		super();
		this.ligne = ligne;
		this.colonne = colonne;
		this.posx=x;
		this.posy=y;
		couleur=color;
		radius=rad;

	}

	public function drawOneHexa():Void {
		graphics.lineStyle(1, 0x000000);
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

	public function updateHexa(color:UInt){
		graphics.clear();
		couleur=color;
		drawOneHexa();

	}

	public function deleteHexa(){
		graphics.clear();
	}

}