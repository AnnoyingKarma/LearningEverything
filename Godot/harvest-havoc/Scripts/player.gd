extends CharacterBody2D
var GlobalScreenSize;
var Speed=600.0;
var Acceleration=3000.0;
var ScreenPressed;
var ScreenPosition;


func _ready() -> void:
	GlobalScreenSize = get_viewport_rect().size;
	position.x= GlobalScreenSize.x/2;
	position.y=GlobalScreenSize.y-50;

func _on_background_scaling_value(scaleValue: Vector2) -> void:
	scale=scaleValue;


func _input(event: InputEvent) -> void:
	if event is InputEventScreenTouch:
		ScreenPressed = event.pressed;
		ScreenPosition = event.position.x;
	

func _physics_process(_delta: float) -> void:
	var direction=0.0;
	if(ScreenPressed):
		if(ScreenPosition > GlobalScreenSize.x/2):
			direction=1.0;
		else:
			direction=-1.0;
	if(direction!=0):
		velocity.x = move_toward(velocity.x,direction*Speed,Acceleration*_delta);
	else:
		velocity.x = move_toward(velocity.x,0,Acceleration*_delta);
	move_and_slide();
	if (position.x>GlobalScreenSize.x):
		position.x=0;
	if (position.x<0):
		position.x=GlobalScreenSize.x;