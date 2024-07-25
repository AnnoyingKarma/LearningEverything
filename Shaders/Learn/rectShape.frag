#ifdef GL_ES
precision mediump float;
#endif

uniform vec2 u_resolution;


float makeRectangle(vec2 scale,vec2 position){
  scale=vec2(0.5)-scale * 0.5;
  vec2 shaper = vec2(step(scale.x,position.x),step(scale.y,position.y));
  shaper *= vec2(step(scale.x,1.0-position.x),step(scale.y,1.0-position.y));
  return shaper.x * shaper.y;
}

void main(){
  vec3 color = vec3(0.81, 0.3, 0.3);
  vec2 position = gl_FragCoord.xy/u_resolution;
  vec2 size = vec2(0.5,0.2);
  float rect = makeRectangle(size,position);
  color = vec3(rect);
  gl_FragColor= vec4(color,1.0);
}