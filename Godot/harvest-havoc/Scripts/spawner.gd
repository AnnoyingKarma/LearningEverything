extends Node2D

var FoodScene = preload("res://Scenes/food.tscn");
var GlobalScreenSize;

var scalingValue;

func _on_background_scaling_value(scaleValue: Vector2) -> void:
	scalingValue=scaleValue;

func _ready()->void:
	pass

func inst(pos):
	pos.y=-pos.y-16;
	var calc:int=pos.x-15;
	pos.x=randi() % calc + 16;
	var instOfFood = FoodScene.instantiate();
	instOfFood.position=pos;
	var foodSprite = instOfFood.get_node("Sprite2D");
	var foodCollision = instOfFood.get_node("CollisionShape2D");
	if (scalingValue):
		foodSprite.scale=scalingValue;
		foodCollision.scale=scalingValue;
	var randomFrameForFood:int=randi()%64;
	foodSprite.frame=randomFrameForFood;
	add_child(instOfFood);

func _on_timer_timeout() -> void:
	GlobalScreenSize=get_viewport_rect().size;
	var pos=GlobalScreenSize;
	inst(pos);