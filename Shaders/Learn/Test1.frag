#ifdef GL_ES
precision mediump float;
#endif

uniform vec2 u_resolution;

void main(){

  vec2 uv = gl_FragCoord.xy / u_resolution.xy*2.0-1.0;
  uv.x *= u_resolution.x/u_resolution.y;
  float d = length(uv); 
  d-=0.5;
  d=step(0.1,d);
  gl_FragColor = vec4(d,d,d,1.0);
  
}