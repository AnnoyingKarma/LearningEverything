extends Area2D

var GlobalScreenSize;

func _ready() -> void:
	GlobalScreenSize=get_viewport_rect().size;
	var collShape=get_child(0);
	collShape.position.x=GlobalScreenSize.x/2;
	collShape.position.y=-GlobalScreenSize.y-50;
	
