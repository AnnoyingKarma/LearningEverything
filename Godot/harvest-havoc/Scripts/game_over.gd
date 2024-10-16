extends CanvasLayer

func _ready() -> void:
	process_mode=PROCESS_MODE_ALWAYS;
	visible=false;

func _on_retry_pressed() -> void:
	get_tree().change_scene_to_file("res://Scenes/game.tscn");

func _on_mainmenu_pressed() -> void:
	get_tree().change_scene_to_file("res://Scenes/main_menu.tscn");

func _on_quit_pressed() -> void:
	get_tree().quit();
