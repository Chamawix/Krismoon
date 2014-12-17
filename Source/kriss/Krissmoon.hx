package kriss;

import flash.Lib;
import flash.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.ColorTransform;
import openfl.display.Sprite;

class Krissmoon extends Sprite {

	public static var carte = new Carte();

	public function new() {
		super();

		stage.addEventListener(KeyboardEvent.KEY_UP, event_changeColor);

		addChild(carte);
	}

	private function event_changeColor(e:KeyboardEvent):Void {
	 	var f = carte.getFactions();
	 	for (faction in f)
	 	{
	 		faction.attaque();
	 	}
	 }
}