extends Node2D

var FoodScene = preload("res://Scenes/food.tscn");
var GlobalScreenSize;
var strScore=0;
var scalingValue;
@onready var scoreLabel=%ScoreManager.get_node("Panel/MarginContainer/BoxContainer/VBoxContainer/HBoxContainer/score");
@onready var playerHealth=%ScoreManager.get_node("Panel/MarginContainer/BoxContainer/VBoxContainer/HBoxContainer3/healthBar");
@onready var bestScore=%ScoreManager.get_node("Panel/MarginContainer/BoxContainer/VBoxContainer/HBoxContainer2/bestScore");
@onready var timer=$Timer;

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
	countScore();
	lose();


func countScore():
	strScore+=1;
	scoreLabel.text = str(strScore);

func lose():
	if (playerHealth.value==10):
		$"../GameOver".visible=true;
		bestScore.text=str(strScore);
		timer.stop();
