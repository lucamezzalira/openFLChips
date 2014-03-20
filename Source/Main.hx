package;

import flash.display.BitmapData;
import flash.display.Bitmap;
import flash.display.Sprite;
import openfl.Assets;
import motion.easing.Back;
import motion.Actuate;

class Main extends Sprite {
	
	
	public function new () {
		
		super ();
		
        buildChips();
		
	}
	
	private function buildChips(){
		var total:Int = 100;
		var bitmapData:BitmapData = Assets.getBitmapData ("assets/chip.png");
		var chip:Bitmap;
		for( i in 0...total ) {
       	 	chip = new Bitmap(bitmapData);
       		addChild(chip);

       		chip.x = Math.random() * stage.stageWidth;
       		chip.y = 540;

       		continuosMovement(chip);
		}

	}

	private function continuosMovement(element){
		var item:Bitmap = element;
		var finalYPos = 0;

		if(item.y == 0){
			finalYPos = 540;
		}

		Actuate.tween(item, 1, { x: (Math.random() * stage.stageWidth), y: finalYPos } ).delay(Math.random() * 5).onComplete(continuosMovement, [item]);

	}
}