extends CanvasLayer

func _ready() -> void:
	process_mode=Node.PROCESS_MODE_ALWAYS;

func _on_start_pressed() -> void:
	get_tree().paused=false;
	get_tree().change_scene_to_file("res://Scenes/game.tscn");


func _on_credits_pressed() -> void:
	$credits.visible = true;


func _on_quit_pressed() -> void:
	get_tree().quit();
