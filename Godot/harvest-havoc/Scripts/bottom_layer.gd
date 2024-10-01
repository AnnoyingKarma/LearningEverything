extends Area2D

@onready var health=%ScoreManager.get_node("Panel/MarginContainer/BoxContainer/VBoxContainer/HBoxContainer3/healthBar");
var GlobalScreenSize;

func _ready() -> void:
	GlobalScreenSize=get_viewport_rect().size;
	self.position.x=GlobalScreenSize.x/2;
	self.position.y=GlobalScreenSize.y+100;


func _on_background_scaling_value(scaleValue: Vector2) -> void:
	self.scale+=scaleValue;


func _on_body_entered(body: Node2D) -> void:
	health.value+=10;
	body.queue_free();
	if(health.value==10):
		pass
