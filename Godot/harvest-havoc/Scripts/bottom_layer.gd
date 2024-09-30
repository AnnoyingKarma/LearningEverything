extends Area2D

var GlobalScreenSize;

func _ready() -> void:
	GlobalScreenSize=get_viewport_rect().size;
	self.position.x=GlobalScreenSize.x/2;
	self.position.y=GlobalScreenSize.y+100;


func _on_background_scaling_value(scaleValue: Vector2) -> void:
	self.scale+=scaleValue;


func _on_body_entered(body: Node2D) -> void:
	body.queue_free();
