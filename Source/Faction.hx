package ;

import flash.display.BitmapData;
import flash.display.Bitmap;
import openfl.Assets;
import motion.Actuate;
import flash.display.Sprite;
import flash.Vector;
import flash.display.Shape;




class Faction {

	private var nom:String;
	private var territoire:Array<>;
	//private var ia:Ia; Pour plus tard
	private var puissanceAttaque:Int;
	private var puissanceDefense: Int;
	private var couleur: UInt;

	//Crée une faction
	public function new(nom:String, puissanceAttaque:Int, puissanceDefense:Int, couleur:UInt)
	{
		this.nom=nom;
		this.puissanceAttaque=puissanceAttaque;
		this.puissanceDefense=puissanceDefense;
		this.couleur=couleur;

	}

	public function attaque() :Void{
		//Engage une action d'attaque contre une autre faction
		// Le resultat renvoi

		
	}	
}