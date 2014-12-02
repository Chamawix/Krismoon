package ;

import flash.display.BitmapData;
import flash.display.Bitmap;
import openfl.Assets;
import motion.Actuate;
import flash.display.Sprite;
import flash.Vector;
import flash.display.Shape;




class Case extends Sprite {

	public var colonne:Int;
	public var ligne:Int; 
	public var couleur:UInt;
	public var groupe:Int;
	public var posx:Float;
	public var posy:Float;
	public var radius:Int;


	public function new(colonne:Int, ligne:Int, x:Float, y:Float, color:UInt = 0x222222){
		super();
		this.ligne = ligne;
		this.colonne = colonne;
		this.posx=x;
		this.posy=y;
		couleur=color;
		groupe= 1;

	}

	public function drawOneHexa(x:Float, y:Float, radius:Int):Void {
		graphics.lineStyle(1, 0x000000);
		graphics.beginFill(couleur);
		this.radius = radius;
		
		// #if js
		// 	js.Lib.alert(couleur);
		// #end

		for (i in 0...6)
		{	
			
			//graphics.lineStyle( 2,  0x123456);
		    var angle = 2 * Math.PI / 6 * (i + 0.5);
		    var x_i = x + radius * Math.cos(angle);

		    var y_i = y + radius * Math.sin(angle);
		   
		    

		    if (i == 0){
			// #if js
			// 	js.Lib.alert(x_i+"/"+y_i);
			// #end
		        graphics.moveTo(Std.int(x_i), Std.int(y_i));
		    }
		    else{
		        graphics.lineTo(Std.int(x_i),Std.int(y_i));
		    }

    	}
	}

	public function deleteHexa(){
		graphics.clear();
	}

}