extends ParallaxBackground
signal scalingValue(scaleValue:Vector2);

@onready var bgsprite = $ParallaxLayer/Sprite2D;

func _ready() -> void:
	var globalScreenSize : Vector2 = get_viewport().size;
	var textureSize = bgsprite.texture.get_size();
	
	bgsprite.position=globalScreenSize/2;
	var scaling : Vector2 = Vector2(0,0);
	
	scaling.x += globalScreenSize.x/textureSize.x;
	scaling.y += globalScreenSize.y/textureSize.y;
	emit_signal("scalingValue",scaling);
	
	bgsprite.scale = scaling;
