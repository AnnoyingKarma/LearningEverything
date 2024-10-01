extends Node

var config;
var highScore;


func _ready()-> void:
	config=ConfigFile.new();
	load_game();
	print(highScore.text);

func load_game():
	var err=GlobalScript.config.load("res://SaveFile/score.cfg");
	
	if err !=OK:
		return
	
	for score in GlobalScript.config.get_sections():
		highScore=GlobalScript.config.get_value(score,"bestScore");
